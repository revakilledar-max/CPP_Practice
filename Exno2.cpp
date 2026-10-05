#include<bits/stdc++.h>
using namespace std;
class Complex{
public:
int real;
int imaginary;
Complex()
{
real=0;
imaginary=0;
}
Complex(int r,int i)
{
real=r;
imaginary=i;
}
Complex addComplexNumber(Complex C1,Complex C2)
{
Complex res;
res.real=C1.real+C2.real;
res.imaginary=C1.imaginary+C2.imaginary;
return res;
}
};
int main(){
Complex C1(8,2);
cout<<"complex no.1:"<<C1.real<<"+i"<<C1.imaginary<<endl;

Complex C2(7,5);
cout<<"complex no.2:"<<C2.real<<"+i"<<C2.imaginary<<endl;

Complex C3;
C3=C3.addComplexNumber(C1,C2);
cout<<"sum of complex no."<<C3.real<<"+i"<<C3.imaginary;
cout<<endl
<<endl;

Complex A(3,1);
cout<<"complex no.1:"<<A.real<<"+i"<<A.imaginary<<endl;

Complex B(12,4);
cout<<"complex no.1:"<<B.real<<"+i"<<B.imaginary<<endl;

Complex C;
C=C.addComplexNumber(A,B);
cout<<"sum of complex no.:"<<C.real<<"+i"
<<C.imaginary;
}
