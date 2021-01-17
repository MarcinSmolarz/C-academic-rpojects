#include <cstdlib>
#include <iostream>
#include "stos.h"
#include <stdexcept>
using namespace std;

int main()
{
    Stack s;
    
    int i=1,k=1;
    
    cout<<"Wrzuc liczby na stos (0 zakonczy petle)"<<endl;  
    while(k!=0)                                         //Pêtla while, która pozwoli na wrzucanie liczb na stos dopóki nie pojawi siê zero.
    {
        cout<<i<<". ";
        cin>>k;
        if(k!=0)
        {
            s.push(k);
            i++;
        }
    }
    
    try{ cout<<s.pop()<<" "<<s.pop()<<endl; }
     catch(exception &e)
    {
          cout<<e.what();
    }
    
    cout<<"Rozmiar: "<<s.capacity()<<endl;
    s.print();
    cout<<endl;
    system("PAUSE");
    return 0;
}
