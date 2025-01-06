#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include <map>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <queue>
#include <algorithm>

#include <QDebug>

#include "cell.h"
//TODO: почему длинные методы в хедере?

class gameField : public cell
{
private:
    int size;
    std::vector<std::vector<cell>> field;
    std::pair<int, int> startCell;
    std::pair<int, int> exitCell;
    std::vector<std::pair<int, int>> path;

public:
    std::pair<int, int> getStartCell() { return startCell; }

private:
    bool isInBounds(int x, int y) const {
        return x >= 0 && x < size && y >= 0 && y < size;
    }

    // Функция для поиска пути от старта к выходу (BFS)
    bool findPath() {
        // Громозкий метод. BFS реализовать в виде шаблонного метода: класс, который реализует BFS и имеет абстрактные методы, которые вызываются при посещении ноды.
        std::vector<std::vector<bool>> visited(size, std::vector<bool>(size, false));
        std::queue<std::pair<int, int>> queue;

        // Базовый список направлений
        std::vector<std::pair<int, int>> directions = { {1,0}, {-1,0}, {0,1}, {0,-1} };

        // Родитель для восстановления пути
        std::map<std::pair<int, int>, std::pair<int, int>> parent;

        queue.push(startCell);
        visited[startCell.second][startCell.first] = true;

        while (!queue.empty()) {
            auto current = queue.front();
            queue.pop();

            // Если дошли до выхода, восстанавливаем путь
            if (current == exitCell) {
                path.clear();
                for (auto cell = exitCell; cell != startCell; cell = parent[cell]) {
                    path.push_back(cell);
                }
                path.push_back(startCell);
                std::reverse(path.begin(), path.end());

                // ---- 1) Гарантированно ставим один магазин «в середине» пути ----
                // Если путь достаточно длинный, чтобы была «середина» (условно > 4),
                // выберем позицию между 1/4 и 3/4 длины пути
                if (path.size() > 4) {
                    int minIndex = path.size() / 4;         // Примерно четверть пути
                    int maxIndex = (path.size() * 3) / 4;   // Примерно три четверти пути
                    if (maxIndex > minIndex) {
                        int storeIndex = rand() % (maxIndex - minIndex + 1) + minIndex;
                        // Чтобы магазин не встал на сам старт и сам выход, на всякий случай
                        // проконтролируем рамки (хотя 1/4 и 3/4 обычно нормально):
                        storeIndex = std::max(storeIndex, 1);
                        storeIndex = std::min(storeIndex, (int)path.size() - 2);

                        auto shopCell = path[storeIndex];
                        // Устанавливаем магазин в поле
                        field[shopCell.second][shopCell.first].setShop();
                    }
                }
                // ----------------------------------------------------------------

                return true;
            }

            // ---- 2) Рандомизируем порядок обхода соседей перед каждым шагом ----
            std::random_shuffle(directions.begin(), directions.end());
            // ---------------------------------------------------------------------

            for (auto &d : directions) {
                int nx = current.first  + d.first;
                int ny = current.second + d.second;
                if (isInBounds(nx, ny) && !visited[ny][nx]) {
                    visited[ny][nx] = true;
                    queue.push({nx, ny});
                    parent[{nx, ny}] = current;
                }
            }
        }
        return false;
    }

public:
    gameField(int size, int shopCount, int bombCount) : size(size), field(size, std::vector<cell>(size)) {
        srand(static_cast<unsigned>(time(0)));

        // Установка стартовой ячейки
        startCell = {rand() % size, rand() % size};
        field[startCell.second][startCell.first].setStart();

        // Установка выходной ячейки, расположенной далеко от стартовой
        do {
            exitCell = {rand() % size, rand() % size};
        } while (abs(exitCell.first - startCell.first) + abs(exitCell.second - startCell.second) < size / 2);
        field[exitCell.second][exitCell.first].setExit();

        // Поиск пути от старта до выхода
        if (!findPath()) {
            throw qDebug() << "Не удалось найти путь от старта к выходу";
        }

        // TODO: одинаковые алгоритмы для магазинов и бомб, разобраться.
        // Установка магазинов
        int placedShops = 0;
        while (placedShops < shopCount) {
            int x = rand() % size;
            int y = rand() % size;
            if (!field[y][x].isStartCell() && !field[y][x].isExitCell() && !field[y][x].containsBomb() && !field[y][x].isHasShop() &&
                std::find(path.begin(), path.end(), std::make_pair(x, y)) == path.end()) {
                field[y][x].setShop();
                placedShops++;
            }
        }

        // Установка бомб
        int placedBombs = 0;
        while (placedBombs < bombCount) {
            int x = rand() % size;
            int y = rand() % size;
            if (!field[y][x].isStartCell() && !field[y][x].isExitCell() && !field[y][x].isHasShop() && !field[y][x].containsBomb() &&
                std::find(path.begin(), path.end(), std::make_pair(x, y)) == path.end()) {
                field[y][x].placeBomb();
                placedBombs++;
            }
        }


        // После установки магазинов и бомб
        for (int y = 0; y < size; ++y) {
            for (int x = 0; x < size; ++x) {
                if (field[y][x].isHasShop()) {
                    qDebug() << "Магазин в ячейке:" << x << y;
                }
            }
        }
    }

    cell& getCell(int x, int y) {
        if (isInBounds(x, y)) {
            return field[y][x];
        }
        throw std::out_of_range("Координаты вне поля");
    }

    const std::vector<std::vector<cell>>& getField() const {
        return field;
    }

    const std::vector<std::pair<int, int>>& getPath() const {
        return path;
    }
};

#endif // GAMEFIELD_H
