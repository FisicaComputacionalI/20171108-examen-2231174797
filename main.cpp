//Humberto Vazquez Castro
//El programa lo que hace es pedirnos un numero x, y evalua si es menor o igual que 5
//De ser así vuelve a evaluar sieste numero es divisible entre 3
//de ser cierto lo anterior le suma 2 a este numero, y en caso contrario nos imprime el numero
//Sin embargo, si el numero es mayor que 5 nos saca del programa.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"introduce un numero_"<<endl;
    cin>>x;
    if(x<=5)
    {
        if(x%3==0)
        {
            x=x+2;
            cout<<"tu numero es_"<<x<<endl;
        }
        else
        {
            cout<<"tu numero es_"<<x<<endl;
        }
    }

return 0;
}


