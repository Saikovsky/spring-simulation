#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    double x,a,v,d,t,m,k,F_g,F_c,F_sum;
    x=1;
    d=0.1;
    t=10;
    m=100;
    k=100;
    F_g=m*10;
    int i = t/d;
    fstream plik("plik.csv",ios::out);
   for(int j=0;j<=i;j++)
    {
        F_c=-k*x;
        //F_sum=(F_c+F_g);
        a=F_c/m;
        v+=a*d; //v=s/t a=v/t s=t*v
        x+=v*d;
        //cout<<v<<endl;
        plik<<a<<";"<<x<<";"<<v<<endl;
        plik.flush();
    }

    plik.close();
    return 0;
}
