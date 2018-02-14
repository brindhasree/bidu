#include<iostream.h>
using namespace std;
class sample
{
int n;
void test()
{
cin>>n;
if(n>0)
{
cout<<"positive";
}
if(n<0){
cout<<"negative";
}
else{
cout<<"zero";
}
}
};
int main()
{
sample s;
s.test();
}
