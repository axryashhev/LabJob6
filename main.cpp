#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
#include "models/PeriodicalPublication.h"

using namespace std;

template<typename T>
using List = vector<T, allocator<T>>;

void println() {
    cout << endl;
}

int main() {

    int n;
    double findValue;
    cout << "Введите кол-во публикации: ";
    cin >> n;

    List<PeriodicalPublication> periodicalPublicationList(n);

    println();

    for_each(begin(periodicalPublicationList),
      end(periodicalPublicationList),
      [](PeriodicalPublication& periodicalPublication) {
        cin >> periodicalPublication;
        println();
      });

    cout << "Введите искомое значение (по стимости подписки): ";
    cin >> findValue;

    List<PeriodicalPublication> findList;

    for(auto item: periodicalPublicationList) {
        if(item.getPrice() > findValue) {
            findList.push_back(item);
        }
    }

    ofstream fstream1;
    fstream1.open("../data.txt");

    if(fstream1.is_open() && !findList.empty()) {
        fstream1 << "{ " << endl;
        for(auto item : findList) {
            fstream1 << item << ",\n";
            cout << item;
            println();
        }
        fstream1 << endl << "};" ;
    }

    fstream1.close();

    return 0;
}
