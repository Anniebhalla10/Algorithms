/* Name: Annei Bhalla
 Roll No : 19HCS4009
 Course : Bsc Hons CS
 Semester : 4
 Submitted to : pooja Ma'am
 Title : Count Sort
 */
 
 #include<bits/stdc++.h>
 using namespace std;

void count_sort(int A[],int n)
{
	// to find range 
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(A[max]<=A[i])
		  max=i;
	}
	int k=A[max];
	//creating temp array for couting the values
	int *count=new int[k] {};
	for(int i=0;i<n;i++)
	{
		count[A[i]]++;
	}
	
	// updating count array 
	for(int i=1;i<=k;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	
	// creating temp array to store sorted elements 
	int *temp= new int[n];
	for(int i=n-1;i>=0;i--)
	{
		temp[--count[A[i]]]  = A[i];
	}
	
	// copying sorted content to original array
	for(int i=0;i<n;i++)
	{
		A[i]=temp[i];
	}
	
}

 
int main()
{
	int size;
	cout<<"\n Enter th eisex of the array ";
	cin>>size;
	int *A=new int[size];
	cout<<"\n Enter the elements in the array ";
	for(int i=0;i<size;i++)
	{
		cin>>A[i];
	}
	count_sort(A,size);
	cout<<"\n Displaying Array ";
	for(int j=0;j<size;j++)
	{
		cout<<A[j]<<" ";
	}
return 0;
}
