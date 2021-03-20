/* Name: Annie Bhalla
 Roll No : 19HCS4009
 Course : Bsc Hons CS
 Semester : 4
 Submitted to : pooja Ma'am
 Title : Radix Sort
 */
 
#include<bits/stdc++.h>
using namespace std;

// function to find the maximum element in the array
int getmax(int A[],int n)
{
	int maxi=0;
	for(int i=0;i<n;i++)
	   {
	   	if(A[maxi]<A[i])
	   	   maxi=i;
	   }
	return A[maxi];
}
// count_sort function
void count_sort(int A[],int n,int pos)
{
	int *count=new int[10] {};
	// to count the number of similar digits at pos position
	for(int i=0;i<n;i++)
	  ++count[(A[i]/pos)%10];
	
	// updating count array
	for(int k=1;k<10;k++)
	      count[k]=count[k]+count[k-1];
	      
	int *temp=new int[n];
	for(int i=n-1;i>=0;i--)
	{
		int index=(A[i]/pos)%10;
		temp[--count[index]]= A[i];
	}
	
	for(int k=0;k<n;k++)
	{
		A[k]=temp[k];
	}
	
}


//radix sort
void radix_sort(int A[],int size)
{
	int max= getmax(A,size);
	for(int pos=1; max/pos>0;pos*=10)
	   count_sort(A,size,pos);
	
}
int main()
{
	int size;
	cout<<"\n Enter the size of the array ";
	cin>>size;
	int *A= new int[size];
	for(int i=0;i<size;i++)
	 cin>>A[i];
	 radix_sort(A,size);
	 cout<<"\n Displaying the sorted array ";
	 for(int i=0;i<size;i++)
	 cout<<A[i]<<" ";
	return 0;
}
