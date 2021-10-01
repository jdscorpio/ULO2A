/// set<typ> - zbiór uporz¹dkowany, unikalny
/// np. 1,5,3,1,3,2
/// set = 1,2,3,5

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> A;
    int n;
    for (int i=0; i<5; i++)
    {
        cin >> n;
        A.insert(n);
        for (auto el: A)
            cout << el << " ";
        cout << "\n";
    }

    return 0;
}
