#include<iostream>
using namespace std;
int main()
{
    int x=1;
    if(x<=5)
    {
        while(x<=5)
        {
            if(x%3==0)
            {
	      //Para que tu programa haga lo que se indica en el diagrama, esta línea tendría que estar comentada. 
	      //cout<<"tu numero es_"<<x<<endl;
                x=x+2;
            }
            else
            {
             cout<<"tu numero es_"<<x<<endl;
                x=x+2;  
            }
        }
    }
return 0;
}
