//Prashant
//23070123102
//insertion sort 
#include<iostream>
using namespace std;
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key= arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
   int arr[]={68,29,10,52,81};
   int n= sizeof(arr)/sizeof(arr[0]);
   cout<<"Original array: "<<endl;
   for(int i=0;i<n;i++){
   cout<<arr[i]<<" "; }
   insertionSort(arr,n);
   cout<<"Sorted array: "<<endl;
   for(int i=0;i<n;i++){
   cout<<arr[i]<<" "; }
   return 0;
}