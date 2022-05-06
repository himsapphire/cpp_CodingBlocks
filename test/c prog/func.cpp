#include<iostream>
#define pi 3.14
#include<math.h>
using namespace std;
void vol(int a){
cout<<"volume of cube"<<a*a;

}
void vol(float l,float b,float h){
cout<<"volume of cuboid"<<l*b*h;

}

void vol(float si){
cout<<"volume of sphere"<<(4/3)*pi*si^3;

}
int main(){
float a=10,l=10,b=10,h=10,r=10,s=10;
void vol(a);
void vol(l,b,h);
void vol(r);
void vol(r,s);
return 0;

}
