/* Name : Annie Bhalla
   Roll No : 19HCS4009
   Subject : Design and analysis of Algorithms
   Semester : 4
   Title : Max Heapify
*/

#include<bits/stdc++.h>
using namespace std;


void max_heapify(int A[],int n,int index)
{
	int largest=index;
	int left = 2*index;
	int right= 2*index+1;
	while(left<=n && A[left]>A[largest])
	  largest=left;
	while(right<=n && A[right]>A[largest])
	 largest = right;
	if(largest!=index)
	{
		swap(A[largest],A[index]);
		max_heapify(A,n,largest);
	}
}

void heapsort(int A[],int n)
{
	// for constructing the max heap
	for(int i=n/2;i>=1;i--)
	{
		max_heapify(A,n,i);
	}
	
	// for sorting them in ascending order
	for(int i=n;i>=1;i--)
	{
		swap(A[1],A[i]);
		max_heapify(A,i-1,1);
	}
}


int main()
{
	int size;
	cout<<"\n Enter the number of elements : ";
	cin>>size;
	int *A=new int[size];
	cout<<"\n Enter the elements ";
	for(int i=1;i<=size;i++)
	 cin>>A[i];
	heapsort(A,size);
	cout<<"\n Displaying : ";
	for(int k=1;k<=size;k++)
	{
		cout<<A[k]<<" ";
	}
	return 0; 
}
