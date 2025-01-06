#ifndef SAVEMANAGER_H
#define SAVEMANAGER_H

#include <iostream>
#include <fstream>
#include <string>

#include <QDebug>

// TODO: Почему в shopgame простые методы были в отдельном файле, а здесь сложные методы в h-файле?
// Структура данных для сохранения
struct SaveData {
    int experience;
    int levelPlayer;

    int iLoseCount;
    int iWinCount;
    std::string sTime;

    // Метод для записи в бинарный поток
    void writeToStream(std::ofstream &out) const {
        out.write(reinterpret_cast<const char *>(&experience), sizeof(experience));
        out.write(reinterpret_cast<const char *>(&levelPlayer), sizeof(levelPlayer));
        out.write(reinterpret_cast<const char *>(&iLoseCount), sizeof(iLoseCount));
        out.write(reinterpret_cast<const char *>(&iWinCount), sizeof(iWinCount));

        // Сериализация строки
        size_t length = sTime.size();
        out.write(reinterpret_cast<const char *>(&length), sizeof(length)); // Сохраняем длину строки
        out.write(sTime.data(), length); // Сохраняем содержимое строки
    }

    // Метод для чтения из бинарного потока
    void readFromStream(std::ifstream &in) {
        in.read(reinterpret_cast<char *>(&experience), sizeof(experience));
        in.read(reinterpret_cast<char *>(&levelPlayer), sizeof(levelPlayer));
        in.read(reinterpret_cast<char *>(&iLoseCount), sizeof(iLoseCount));
        in.read(reinterpret_cast<char *>(&iWinCount), sizeof(iWinCount));

        // Десериализация строки
        size_t length;
        in.read(reinterpret_cast<char *>(&length), sizeof(length)); // Читаем длину строки
        sTime.resize(length); // Резервируем место для строки
        in.read(&sTime[0], length); // Читаем содержимое строки
    }
};

class SaveManager
{
    SaveManager();
public:
    // Сохранение данных в файл
    static void save(const SaveData &data, const std::string &fileName) {
        std::ofstream outFile(fileName, std::ios::binary);
        if (!outFile) {
             qDebug() << "Ошибка открытия файла для записи!";
            return;
        }
        data.writeToStream(outFile);
        outFile.close();
         qDebug() << "Данные успешно сохранены!";
    }

    // Загрузка данных из файла
    static SaveData load(const std::string &fileName) {
        SaveData data{};
        std::ifstream inFile(fileName, std::ios::binary);
        // TODO: а если у тебя релизная версия?
        if (!inFile) {
             qDebug() << "Ошибка открытия файла для чтения!";
            return data;
        }
        data.readFromStream(inFile);
        inFile.close();
        qDebug() << "Данные успешно загружены!";
        return data;
    }
};

#endif // SAVEMANAGER_H
