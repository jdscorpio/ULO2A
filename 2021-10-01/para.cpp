/// pair <typ, typ>

#include <iostream>
#include <utility>  /// pair
#include <string>

using namespace std;

int main()
{
    pair<int,int> p;

    p = make_pair(1,2);
    cout << p.first << " " << p.second << endl;

    pair<int, string> t(4,"cos");
    cout << t.first << " " << t.second << endl;

    return 0;
}
