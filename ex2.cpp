int main()
{
    ifstream f("bac.txt");
    int n,a[100],p,j,i,z,aux,poz;
    p=0;
    f>>n;
    p++;
    a[p]=n;
    z=n;
    while(f>>n)
    {
        p++;
        a[p]=n;
    }
    for(i=1;i<=p-1;i++)
      for(j=i+1;j<=p;j++)
          if(a[i]<a[j])
          {
              aux=a[i];
              a[i]=a[j];
              a[j]=aux;

          }
        for(i=1;i<=p;i++)
            if(z==a[i])
              poz=i;
    cout<<poz;
}
