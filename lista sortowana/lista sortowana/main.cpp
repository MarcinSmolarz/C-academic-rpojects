#include <iostream>
#include "SortedList.h"

using namespace std;

int main()
{
    SortedList l;
    for(int i=0; i<10; i++)
    {
        int v;
        cin >> v;
        l.insert(v);
        l.print();
    }


    return 0;
}
