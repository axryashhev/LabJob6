//
// Created by Артём Хрящёв on 23.05.2021.
//

#include "PeriodicalPublication.h"

std::istream &operator>>(std::istream &stream, PeriodicalPublication &o) {
    std::cout << "Введите наименование издания: ";
    stream >> o.name;
    std::cout << "Введите тираж: ";
    stream >> o.circulation;
    std::cout << "Введите стоимость подписки: ";
    stream >> o.price;

    return stream;
}

std::ostream &operator<<(std::ostream &stream, PeriodicalPublication o) {
    stream << "{ name: " << o.name
    << ", circulation: " << o.circulation
    << ", price: " << o.price << " }";
    return stream;
}

std::ofstream& operator<<(std::ofstream& stream, const PeriodicalPublication& o){
    stream << "{ name: " << o.name
           << ", circulation: " << o.circulation
           << ", " << o.price << " }";
    return stream;
}
