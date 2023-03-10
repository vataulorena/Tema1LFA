#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int qcurent, a[1000000],b[1000000],c[1000000],x,d,sf,i,ok,OK,j,tranzitii,nr,z;
char cuv[1000000000],y;
ifstream f("graf.txt");
int main()
{
    qcurent=0;
    OK=0;
    nr=0;
    f>>tranzitii;
    for(j=1;j<=tranzitii;j++)
    {
        f>>x>>y>>z;
        a[j]=x;
        b[j]=y;
        c[j]=z;
    }
    cin>>cuv;
    for(i=0;i<strlen(cuv);i++)
        for(d=1;d<=tranzitii;d++)
            if( qcurent==a[d] && cuv[i]==b[d] )
            {
                cout<<a[d]<<" "<<c[d]<<endl;
                qcurent=c[d];
                break;
            }
    while(f>>sf)
        if(qcurent==sf)
            OK=1;
    if(OK==1)
        cout<<"acceptat";
    else cout<<"neacceptat";
    return 0;
}
