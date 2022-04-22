#include<iostream.h>
using namespace std;
int main()
{
    int i;
    cin>>i;
    int y,o;
    cin>>y>>o;
    if(y>o)
    {
        cout<<y-o;
    }
    else if(y<o)
    {
        cout<<o-y;
    }
}