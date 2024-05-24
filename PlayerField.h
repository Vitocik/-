//PlayerField.h
#pragma once
#ifndef PLAYERFIELD_H
#define PLAYERFIELD_H

#include "Ship.h"
#include <vector>
#include <fstream>

class PlayerField {
public:
    std::vector<std::vector<CellState>> field; // Игровое поле
    int rows; // Количество строк
    int cols; // Количество столбцов

    PlayerField(int rows, int cols); // Конструктор класса PlayerField

    void placeShip(const Ship& ship); // Метод для размещения корабля
    bool canPlaceShip(const Ship& ship, int x, int y); // Метод для проверки возможности размещения корабля
    void displayField(bool showShips = false) const; // Метод для отображения игрового поля
    void manuallyPlaceShips(); // Метод для ручного размещения кораблей
    bool takeFileShot(const std::string& filename); // Метод для совершения хода с использованием файла с координатами выстрелов.
    bool takeShot(int x, int y); // Метод для совершения выстрела
    bool allShipsSunk() const; // Метод для проверки потопления всех кораблей
    bool takeQueryShot(); // Метод для совершения хода с вводом координат от пользователя
    bool takeRandomShot(); // Метод для совершения случайного хода
};

#endif // PLAYERFIELD_H