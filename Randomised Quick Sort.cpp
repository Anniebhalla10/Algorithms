/* Name : Annie Bhalla
   Roll No. : 19HCS4009
   Subject : Algorithms
   Semester : 4
   Lab Task : Randomised Quick Sort 
*/

#include<bits/stdc++.h>
using namespace std;

int partition(int A[],int lb,int ub)
{
	int start=lb;
	int end=ub;
	int pivot= A[lb];
	while(start<end)
	{
		while(A[start]<=pivot)
		  start++;
		  
		while(A[end]>pivot)
		   end--;
		   
		if(start<end)
		{
			swap(A[start],A[end]);
		}
		
	}
	swap(A[end],A[lb]);
	return end;
}

int partition_random(int A[],int lb,int ub)
{
	srand(time(NULL));
	int random = lb+ rand()%(ub-lb);
	swap(A[random],A[lb]);
	return partition(A,lb,ub);
}

void quick_sort(int A[], int lb,int ub)
{
	if(lb<ub)
	{
		int loc = partition_random(A,lb,ub);
		quick_sort(A,loc+1,ub);
		quick_sort(A,lb,loc-1);
	}
}


int main()
{
	int size;
	cout<<"\n Enter the umber of elements ";
	cin>>size;
	int *A=new int[size];
	cout<<"\n Enter the elments in the array ";
	for(int i=0;i<size;i++)
	{
		cin>>A[i];
	}
	quick_sort(A,0,size-1);
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}
