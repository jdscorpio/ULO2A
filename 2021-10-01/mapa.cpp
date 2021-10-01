/// map<klucz,wartosc> - posortowany kontener po kluczu
/// multimap - dla chêtnych

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string,int> week;
    week["poniedzialek"] = 1;
    week["wtorek"] = 2;
    week["sroda"] = 3;
    week["czwartek"] = 4;
    week["piatek"] = 5;
    week["sobota"] = 6;
    week["niedziela"] = 7;

    for (auto el: week)
        cout << el.first << " " << el.second << endl;


    return 0;
}
