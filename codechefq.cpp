#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int q=0;
        int l=0,p=0;
        cin>>l>>p;
        
        int g=0;
        int w=0;
        
        for(int e=l;e<=p;e++)
        {
            for(int n=l+1;n<p;n++)
            {
                int y=fmax(e,n);
        for(int u=y;u>=2;u--)
        {
            if(e%u==0 && n%u==0)
            {
                g=e;
                w=n;
                q=1;
                break;
            }
        }
        if(q==1)
        {
            break;
        }
        }
        if(q==1)
        {
            break;
        }

        }
        
        if(g==w)
        {
            cout<<-1<<endl;
        }
        else
{        cout<<g;
        cout<<w<<endl ;
}
        

    }
}