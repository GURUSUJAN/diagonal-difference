#include"iostream"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n][n];
    int i=0,j=0;
    int sum=0,dia=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if((i+j)=n-1)
           {
               sum+=ar[i][j];
           }
           if(i==j)
           {
               dia+=ar[i][j];
           }
        }
    }
    if((dia-sum)<0)
    {
        cout<<(-1*(dia-sum))<<endl;
    }
    else
    {
        cout<<(dia-sum)<<endl;
    }
}
