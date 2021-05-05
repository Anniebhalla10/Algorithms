#include<iostream>
#include<algorithm>
using namespace std;


void value(int a[], int s){
    for (int i=0; i<s; i++) {
        a[i]=rand()%s;
        cout<<a[i]<<" ";
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
		 // when the key is greater than arr[i] comparison takes place
		  	if(key>=arr[i])
		        comp++; 
		  
		   
	}
	cout<<"\n Number of Comparisons "<<comp;
	
}

int main()
{
	int n,key,choice;
	char ch;
	do{
		cout<<"\n Enter the number of elements ";
		cin>>n;
		int *A= new int[n];
		cout<<"\n Enter choice for "
		    <<"\n 1. Best Case"
		    <<"\n 2. Random Case "
		    <<"\n 3. Worst Case "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:	value(A,n); 
					sort(A,A+n);
					insertion_Sort(A,n);
					break;
			case 2: value(A,n); 
					insertion_Sort(A,n);
					break;
			case 3:  value(A,n); 
					sort(A,A+n,greater<int>()); 
					insertion_Sort(A,n);
					break;
					
		}
     cout<<endl<<endl<<" Do you wish to continue ";
	  cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}

