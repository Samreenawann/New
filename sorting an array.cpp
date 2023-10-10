/////////////////////////////    SORTING AN ARRAY     //////////////////////////////
////////////////////////// Submitted by: Samreen Fatima ////////////////////////////
///////////////////////////// Reg. No. 2022-UAM-4608    ////////////////////////////
//////////////////////////////// BS Data Science-3   ///////////////////////////////
//////////////////////// Submitted to: Sir Aziz ur Rehman //////////////////////////




#include<iostream>
using namespace std;
int main()
{   
    
	int n;
    cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter Elements of array"<<endl;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for (int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if (arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	cout<<"The sorted array is:"<<endl;
	for (int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	cout<<endl;
	return 0;
}
