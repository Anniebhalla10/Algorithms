/* Name : Annie Bhalla 
Roll No : 19HCS4009
Paper Title : Algorithms
Semester : 4
Topic : Insertion Sort
*/

#include<iostream>
#include<algorithm>
using namespace std;


void value(int a[], int s){
    for (int i=0; i<s; i++) {
        a[i]=rand()%s;
        cout<<a[i]<<endl;
    }
}


void insertion_Sort(int arr[], int size)
{
	int key=0;
	int comp=0;
	for(int j=1;j<size;j++)
	{
		 key= arr[j];
		 int i=j-1;
		 while(i>=0 && arr[i]>key)
		 {
		 	arr[i+1]=arr[i];
		 	i--;
		 	comp++;
		 }
		 arr[i+1]=key;
		/*  only in best case
			if(key>=arr[i])
		   comp++;
		   */
	}
	cout<<"\n Number of Comparisons "<<comp;
	
}

int main()
{
	int n,key;
	char ch;
	do{
		cout<<"\n Enter the number of elements ";
		cin>>n;
		int *A= new int[n];
		value(A,n);  // to input elements in array 
    	//	sort(A,A+n,greater<int>());  // sorting array using stl for case : worst case
    		//	sort(A,A+n);  // sorting array using stl for case : best case
	    insertion_Sort(A,n);
     cout<<endl<<endl<<" Do you wish to continue ";
	  cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}

