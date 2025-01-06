#ifndef TIMERCORE_H
#define TIMERCORE_H

#include <chrono>
#include <functional>
#include <string>
#include <iomanip>
#include <sstream>

class TimerCore {
private:
    bool m_isRunning;
    long long m_accumulatedDuration;
    std::chrono::time_point<std::chrono::steady_clock> m_startPoint;

public:
    TimerCore();

    void start();
    void stop();
    void reset();

    // Возвращает прошедшее время в миллисекундах
    long long elapsedMilliseconds() const;

    // Возвращает строку вида "HH:MM:SS"
    std::string elapsedString() const;

    // Возвращает универсальную функцию, которая вызывает elapsedString()
    std::function<std::string()> elapsedCallback();
};

#endif // TIMERCORE_H
