# include<iostream>
#include<iomanip>
using namespace std;
void datatype(){
    int i;
    long l;
    char ch;
    float fn;
    double dn;
    scanf("%d %ld %c %f %lf",&i,&l,&ch,&fn,&dn);

   // printf("%d %ld %c setprecision(2) %f %lf",i,l,ch,fn ,dn);
    cout<<i<<endl;
    cout<<l<<endl;
    cout<<ch<<endl;
    cout<<fixed<< setprecision(3)<<fn<<endl<<endl;
    cout<< fixed <<setprecision(9)<<dn<<endl<<endl;

}
int main(){
    datatype();
}