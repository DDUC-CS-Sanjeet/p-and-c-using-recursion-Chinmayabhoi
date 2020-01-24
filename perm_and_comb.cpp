#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if (n==0 || r==0)
		throw "Not Valid";
 	else if(r==1)
	{
		return n;
	}
	else
	{
		return n*permutation(n-1,r-1);
	}

  return 0;
}

int combination(int n, int r)
{
	if (n==0 || r==0)
		return 0;
 	else if(r==1)
	{
		return n;
	}
	else
	{
		return n*permutation(n-1,r-1)/r;
	}
	
  return 0;
}

int main()
{
	int a,b,c,d,e,f;
	char ch;
	do{
		cout<<"\nEnter your choice (1/2) ";
		cout<<"\n1.Permutation"<<endl;
		cout<<"2.Combination"<<endl;
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"Enter the numbers:"<<endl;
				cin>>b>>c;
				try{
				f=permutation(b,c);
				cout<<f<<endl;	
				}catch(const char* msg )
				{
					cout<<msg<<endl;
				}
				break;
			case 2:
				cout<<"Enter the numbers:"<<endl;
				cin>>d>>e;
				try{
				f=combination(b,c);
				cout<<f<<endl;	
				}catch(const char* msg )
				{
					cout<<msg<<endl;
				}
				break;
		}
		cout<<"\nWant to Enter more(y/n) "<<endl;
		cin>>ch;
		
	} while(ch=='y'||ch=='Y');
  return 0;
}
