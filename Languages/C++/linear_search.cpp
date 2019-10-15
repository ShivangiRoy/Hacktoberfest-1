#include <iostream>
using namespace std ;

int main()
{
	int n;
	cout<<"Number of Elements"<<endl;
	cin>>n;
	int A[n], index = -1, x;
	cout<<"Enter search element: ";
	cin>>x;

	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		if(A[i]==x)
			index=i;
	}
	if(index != -1)
	{
		cout<<"Element is present at index "<<index<<endl;
	}
	else
		cout<<"Element is not present in given array ."<<endl ;
}
