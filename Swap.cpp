#include<iostream>
using namespace std;
void printStatistic(float a[],int& n)
{
	for(int i=0;i<n;i++) cin>>a[i];
	
	int max=0;
	int min=0;
	
	for(int i=0;i<n;i++)
	{
		if(max<a[i]) a[i]=max;
	}
	for(int i=0;i<n;i++)
	{
		if(min>a[i]) a[i]=min;
	}
	cout<<max<<" "<<min;
}

int main()
{
	int n;cin>>n;
	float a[n];
//	Nhapmang(a,n);
	
	int m;cin>>m;
	float b[m];
//	Nhapmang(b,m);
	
	printStatistic(a,n);
	printStatistic(b,m);
	
	return 0;
}

//int main()
//{
//	int n;cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++) cin>>a[i];
//	int max=0;
//	for(int i=0;i<n;i++)
//	{
//		if(max<a[i]) max=a[i];
//	}
//	int min=6;
//	for(int i=0;i<n;i++)
//	{
//		if(min>a[i]) min=a[i];
//	}
//	cout<<max<<" "<<min;
//	








