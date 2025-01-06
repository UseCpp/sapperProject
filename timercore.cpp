#include "timercore.h"

TimerCore::TimerCore()
    : m_isRunning{false}
    , m_accumulatedDuration{0} {}

void TimerCore::start() {
    if (!m_isRunning) {
        m_startPoint = std::chrono::steady_clock::now();
        m_isRunning = true;
    }
}

void TimerCore::stop() {
    if (m_isRunning) {
        auto now = std::chrono::steady_clock::now();
        m_accumulatedDuration += std::chrono::duration_cast<std::chrono::milliseconds>(now - m_startPoint).count();
        m_isRunning = false;
    }
}

void TimerCore::reset() {
    m_isRunning = false;
    m_accumulatedDuration = 0;
}

// Возвращает прошедшее время в миллисекундах
long long TimerCore::elapsedMilliseconds() const {
    long long totalMs = m_accumulatedDuration;
    if (m_isRunning) {
        auto now = std::chrono::steady_clock::now();
        totalMs += std::chrono::duration_cast<std::chrono::milliseconds>(now - m_startPoint).count();
    }
    return totalMs;
}

// Возвращает строку вида "HH:MM:SS"
std::string TimerCore::elapsedString() const {
    auto totalMs = elapsedMilliseconds();
    auto totalSec = totalMs / 1000;

    int hours = static_cast<int>(totalSec / 3600);
    int minutes = static_cast<int>((totalSec % 3600) / 60);
    int seconds = static_cast<int>(totalSec % 60);

    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hours << ":"
        << std::setw(2) << std::setfill('0') << minutes << ":"
        << std::setw(2) << std::setfill('0') << seconds;
    return oss.str();
}

// Возвращает универсальную функцию, которая вызывает elapsedString()
std::function<std::string()> TimerCore::elapsedCallback() {
    return [this]() { return this->elapsedString(); };
}
