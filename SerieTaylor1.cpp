#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) 

{
    long long int i,j,a=3,n,fact=1; //Se usa el long long int por las limitaciones de los numeros
    long double seno;
    long double x;
    cin>>x;
    cin>>n;
    seno=x;
    for ( i=1; i<=n ; i++){
        fact=1;
        //Factorial
        for (j=1 ; j<=a ; j++){
            fact=fact*j;   
        }
        if (i%2==0){
            seno=seno + (pow(x,a))/fact;
        } else {
            seno=seno - pow(x,a)/fact; 
        }
        a=a+2;
    }
    cout<<fixed<<setprecision(11);
    cout<<seno<<endl;
    return 0;
}
