#include<bits/stdc++.h>
using namespace std;

int func(long long int x)
{
    int res=0;
    while(1)
    {
        if(x==1)
            break;
        // cout<<x<<"  ";
        if(x%2==0)
        {
            x=x/2;
            ++res;
        }
        else
        {
            x=3*x+1;
            ++res;
        }

    }
    return res;
}


int main()
{

   long long int x,y,d=0,ma,j,p,q;
    while(cin >> x >> y)
   {
       p=x;
       q=y;
       d=0;
     // if(x==0||y==0)
       //    break;

        if(x>y){
           j=x;
           x=y;
           y=j;
        }
        ma=d;
        for(long long int i=x; i<=y; i++)
        {
            d=func(i);
            if((d+1)>ma)
                ma=d+1;
        }
        cout<<p<<" "<<q<<" "<<ma<<endl;
    }
    return 0;
}

