/* Name : Annie Bhalla
   Roll No. : 19HCS4009
   Subject : Algorithms
   Semester : 4
   Lab Task : Randomised Quick Sort 
*/

#include<bits/stdc++.h>
using namespace std;

int comp=0;

void value(int a[],int s){
    for (int i=0; i<s; i++) {
        a[i]=rand()%s;
        cout<<a[i]<<endl;
    }
}

int partition(int A[],int lb,int ub)
{
	int start=lb;
	int end=ub;
	int pivot= A[lb];
	while(start<end)
	{
		while(A[start]<=pivot)
		{
			start++;
			comp++;
		}
		  
		while(A[end]>pivot)
		   {
		   	end--;
		   	comp++;
		   }
		   
		if(start<end)
		{
			comp++;
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
			cout<<"\n Number of comparisons : "<<comp<<endl;
	}
}


int main()
{
	char ch;
	int ans;
	int size;
	do{
	       	cout<<"\n Enter the umber of elements ";		
			cin>>size;
			int *A=new int[size];
			value(A,size);
			// sort(A,A+size);     // used for best case
			// sort(A,A+size,greater<int>());   // used for worst case
			quick_sort(A,0,size-1);
			comp=0;
			cout<<"\n Do you wish to continue ";
			cin>>ch;
						
		}while(ch='y' || 'Y');

	return 0;
}
