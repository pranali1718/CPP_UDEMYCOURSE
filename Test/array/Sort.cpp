#include<iostream>
using namespace std;

void sorting(int arr[],int size)
{
int t;

for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		if(arr[i]<arr[j])
		{
		    t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
	}
}
cout<<"Sorted Array : ";
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
}
int main()
{
	int a[5];
	int temp;
	cout<<"Enter 5 Elements : ";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	sorting(a,5);
	return 0;

}


---------------------------------------------------------------------------------------------------------------------------------
	
	#include<iostream>
using namespace std;

void sorting(int arr[],int size)
{
int temp;

for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		
		    if(arr[j]>=arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
		
	}
}
cout<<"Sorted Array : ";
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
}
int main()
{
	int a[5];
	int temp;
	cout<<"Enter 5 Elements : ";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	sorting(a,5);
	return 0;

}

