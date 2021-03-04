/* Name : Annie Bhalla
   Roll No. : 19HCS4009
   Course : BSC (H) Computer Science
   Semester : 4
   Subject : Algorithms
   Title : Binary Search
*/

#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int A[],int n,int key)
{
	int beg=0,end=n-1;
	int mid;
	int comp=0;
	while(beg<=end)
	{
		mid = (beg+end)/2;
		comp++;
		if(A[mid]==key)
		{
			cout<<"\n Number of Comparisons in this Situation : "<<comp;
			return mid;
		}	
		else if(key<A[mid])
		     end=mid-1;
		else  beg=mid+1;	   
	}
	    cout<<"\n Number of Comparisons in this Situation : "<<comp;
		return -1;

}

void value(int a[], int s){
    for (int i=0; i<s; i++) {
        a[i]=rand()%s;
        cout<<a[i]<<endl;
    }
}
    
int main()
{
	int n,key;
	char ch;
	cout<<"\n Enter the number of elements ";
	cin>>n;
	int *A= new int[n];
	value(A,n);  // to input elements in array 
	sort(A,A+n);  // sorting array using stl

	do{
	cout<<"\n Enter the value to be searched :";
	cin>>key;
	int index= binary_search(A,n,key);
	
	if(index==-1)
	 cout<<"\n Element Not Found ";
	 else
      cout<<"\n Element found at index : "<<index;
	
     cout<<endl<<endl<<" Do you wish to searchh another element ";
	  cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}


