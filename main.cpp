#include<iostream>
using namespace std;
int main()
{
    int x=1;
    if(x<=5)
    {
        while(x<=5)
    {
        x=x+2;
    }
    if(x%3==0)
    {
        x=x+2;
    }
    else
    {
        cout<<"el numero es_"<<x<<endl;
    }
return 0;
}


