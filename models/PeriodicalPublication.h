//
// Created by Артём Хрящёв on 23.05.2021.
//

#ifndef LABJOB6_PERIODICALPUBLICATION_H
#define LABJOB6_PERIODICALPUBLICATION_H

#include <iostream>
#include <fstream>
#include <string>

class PeriodicalPublication {
    private: std::string name;
    private: int circulation; // тираж
    private: double price; // стоимость подписки

    public: PeriodicalPublication(std::string name, int circulation, double price) {
        this->name = name;
        this->circulation = circulation;
        this->price = price;
    }

    public: PeriodicalPublication() {}

    public: std::string getName() {
        return name;
    }

    public: void setName(std::string name) {
        this->name = name;
    }

    public: int getCirculation() {
        return circulation;
    }

    public: void setCirculation(int circulation) {
        this->circulation = circulation;
    }

    public: double getPrice() {
        return price;
    }

    public: void setPrice(double price) {
        this->price = price;
    }

    friend std::istream &operator>>(std::istream &stream, PeriodicalPublication &o);
    friend std::ostream &operator<<(std::ostream &stream, PeriodicalPublication o);
    friend std::ofstream& operator<<(std::ofstream& stream, const PeriodicalPublication& o);
};


#endif //LABJOB6_PERIODICALPUBLICATION_H
