/// pouk³aj dane osobowe wed³ug nazwiska i imienia
/// np. Kowalski Jan, Kowalski Adam, Iksinska Maria
/// wyjœcie: Iksinska Maria, Kowalski Adam, Kowalski Jan

#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<pair<string,string> > dane;
    char znak;
    string familyName, firstName;

    do
    {
        cout << "Podaj nazwisko: ";
        cin >> familyName;
        cout << "Podaj imie: ";
        cin >> firstName;
        dane.push_back(make_pair(familyName, firstName));
        cout << "Czy koniec (t-tak)?";
        cin >> znak;
    } while(znak!='t');

    sort(dane.begin(), dane.end());

    for (auto el: dane)
        cout << el.first << " " << el.second << endl;

    return 0;
}
