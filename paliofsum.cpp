#include <iostream>
using namespace std;

int main() {
	int n,temp,sum=0,n1,rev;
	cin>>n;
     temp = n;
while (n> 0)
{
n1 = n % 10;
sum = sum + n1;
n=n/10;
}
cout<<sum;
do
     {
         n1 = sum% 10;
         rev = (rev * 10) + n1;
         sum= sum/ 10;
     } while (sum != 0);
     if(n==rev)
     cout<<"yes";
     else
     cout<<"not";

	// your code goes here
	return 0;
}
