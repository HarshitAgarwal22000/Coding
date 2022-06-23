#include<iostream>
using namespace std;
class check
{
    public:
    bool checke()
    {
        int count=0;
        int n;
        cin>>n;
        int *a=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int y=0;y<n;y++)
        {
            for(int t=0;t<n;t++)
            {
                if(a[y]==a[t])
                {
                    count=count+1;
                }
            }
            if(count>1)
            {
                return false;
                break;
            }
            count=0;
        }
        return true;
    }
};
int main()
{
    check obj;
    bool c=false;
    c=obj.checke();
    if(c==1)
    {
        cout<<"false"<<endl;
    }
    else
    {
        cout<<"true"<<endl;
    }
}