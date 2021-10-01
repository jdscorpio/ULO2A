/// Ile razy wypad³a dana cyfra?

#include <iostream>
#include <map>

using namespace std;

int main()
{
    int num;
    map<int,int> foo;
    for (int i=0; i<10; i++)
    {
        cin >> num;
        foo[num]++;
    }

    for (auto el: foo)
        cout << el.first << " " << el.second << endl;

    return 0;
}
