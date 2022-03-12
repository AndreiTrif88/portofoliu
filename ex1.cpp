#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("bac.txt");
    int  n,a[100],j,p,x,i,aux,ok=0;
    n=0;
    f>>x;
    n++;
    a[n]=x;
    p=x;
    while(f>>x)
    {
        n++;
        a[n]=x;
        
    }
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if (a[i]>a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
   for(i=1;i<=n;i++)
        if(a[i]==p && ok==0)
        {
             cout <<i;
             ok=1;
        }
    
}
