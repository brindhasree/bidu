#include<iostream>
using namespace std;
int main()
{
    int i,j,c=0;
    char ar[100];
    cin.getline(ar,100);
    for(i=0;ar[i]!='\0';i++)
    {
        for(j=i+1;ar[j]!='\0';j++)
        {
            if(ar[i]==ar[j])
            {  
                c++;
                break;
            }
        }
    }
    if(c>0)
    cout<<"yes";
    else
    {
    	cout<<"no";
    }

    system("pause");
    return 0;
}
