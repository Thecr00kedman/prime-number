#include<iostream>
using namespace std;

int main(){
	int n, i, c=0;
	cout<<"enter your number."<<endl;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0){
			c++;
		}
	}
		if (c==2)
		{
			
			cout<<"the given number is prime."<<endl;
			
		}
		else{
			cout<<"the number is not prime."<<endl;
		}
	
}
