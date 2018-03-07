#include <iostream>
using namespace std;
class digit
{
	int n,n1,i,s=0,n2;
	public:
	void work()
	{
		cin>>n;
		n1=n;
		if(n>0)
		
	
		{
		for(i=0;n1>0;i++)
		{
			n2=n1%10;
			s=s+(n2*n2);
			n1=n1/10;
		}
		cout<<s;
		}
	else
	cout<<"invalid";
	}
	
};

int main() {
	digit g;
	g.work();
	
	
	return 0;
}
