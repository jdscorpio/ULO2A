#include <iostream>
#include <set>

using namespace std;

int main()
{
    int A[10] = {1,2,6,5,2,1,4,3,1,4};
    int B[] = {2,1,6,4,3,5};

    set<int> AA;
    for (int i=0; i<10; i++)
        AA.insert(A[i]);

    set<int> BB;
    for (int i=0; i<6; i++)
        BB.insert(B[i]);

    for (auto el: AA)
        cout << el << " ";
    cout << "\n";

    for (auto el: BB)
        cout << el << " ";
    cout << "\n";

    if (AA == BB)
        cout << "Rowne";
    else
        cout << "Nierowne";

    return 0;
}
