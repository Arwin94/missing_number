#include<iostream>
using namespace std;
int missing(int a[],int s)
{
	int sum_series=0,i,sum_actual=0,val;
	for(i=0;i<s;i++)
		sum_series+=a[i];
	sum_actual=((s+1)*(s+2))/2;
	val=sum_actual-sum_series;
	return val;
	
}
int main()
{
	int size,index=1;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size],i,num;
	cout<<"Enter elements in array: "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<index<<". ";
		cin>>arr[i];
		index++;	
	}
	num=missing(arr,size);
	cout<<endl<<"Missing number is: "<<num;
}
