//Fibonacci sequence printer!
#include <iostream>
using namespace std;


int main()
{
	int n,i;
	cout<<"Welcome to Fibbonacci Sequence Printer!"<<endl;
	cout<<"Pleas enter the number of terms, you want printed out: "<<endl;
	cin>>n;
	cout<<"First "<<n<<" terms of Fibonacci sequence are:"<<endl;
	unsigned long fibo(int);
	for(i=0;i<=n;i++)
	{
		cout<<"Term("<<i<<")="<<fibo(i)<<endl;
	}
	cout<<"The Sum of terms of the number you entered:"<<endl<<"Fib("<<n<<")="<<fibo(i)+fibo(i-1)-1;
	
	cin.get();
	cin.ignore();
	return 0;

}

long fibo(int x)
{
	if(x==0) return 0;
	if(x==1) return 1;
	else return fibo(x-2)+fibo(x-1);
}
