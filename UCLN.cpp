#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}

int main()
{
	int a;
	int b;
	do{
	cin>>a>>b;}while(a<=0||b<=0);
	
	cout<<"Uoc chung lon nhat "<<UCLN(a, b)<<endl;
	int t=UCLN(a,b);
	cout<<"Boi chung nho nhat "<<(a*b)/t<<endl;
	cout<<"Phan so toi gian "<<a/t<<"/"<<b/t;
	
	
	
	return 0;
}
