/* Name: Annie Bhalla
  Roll No : 19HCS4009
  Subject : DSA
  Semester : 4
  Title : Merge Sort
  */
  
  #include<iostream>
  #include<bits/stdc++.h>
  using namespace std;
  
  void merge(int A[],int lb, int mid,int ub)
  {
  	int i=lb;
  	int j=mid+1;
  	int k=lb;
  	int n= (ub-lb) +1;
  	int *arr= new int[n];
  	while(i<=mid && j<=ub)
  	{
  		if(A[i]<A[j])
  		{
  			arr[k]=A[i];
  			i++;
		  }
		  else
		  {
		  	arr[k]=A[j];
		  	j++;
		  }
		  k++;
	  }
	  while(i<=mid)
	  {
	  	arr[k]=A[i];
	  	i++;
	  	k++;
	  }
	  while(j<=ub)
	  {
	  	arr[k]=A[j];
		k++;
	  	j++;
	  }
	
	for(int i=lb;i<=ub;i++)
	{
		A[i]=arr[i];
	}
	  
  }
  void mergesort(int A[],int lb, int ub)
  {
  	if(lb<ub)
  	{
  		int mid= (lb+ub)/2;
  		mergesort(A,lb,mid);
  		mergesort(A,mid+1,ub);
  		merge(A,lb,mid,ub);
	  }
	
  }
  
  int main()
  {
  	int size;
  	cout<<"\n Enter the number of elements in the array";
	cin>>size;
	int *A=new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>A[i];
	}
	mergesort(A,0,size-1);
	cout<<endl;
	for(int k=0;k<size;k++)
	cout<<A[k]<<" ";
  	return 0;
  }
