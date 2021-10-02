#include <iostream>
#define SIZE 10
using namespace std;


void Binarysearch(int arr[], int size, int elemwnt)
{ 
  int start=0, last=size-1;
  int mid=(start+last)/2;
  
  while(start<= last)
    
    if( arr[mid] < element)
      start=mid+1;
  else if( arr[mid] == element)
    
  {
    cout<<element<<" exist in index" <<mid<<end;
    break;
  }
  else 
    last=mid-1;
  
  mid=(start + last) / 2; }
  
  if(start>last)
    cout<<" element does not exist in index "<<end;
}

void printArray(int arr[], int size)
{     for(int i=0; i<size; i++)
  cout<<arr[i]<<"\t";
 cout<<end;   }

int main()
{   int Array[SIZE]={2,6,8,13,18,19,24,28,29,33};
    int num;
 cout<< " Enter the element you want to find";
 cin>>num;
 
 printArray(Array, SIZE);
 
 BinarySearch(Array, SIZE, num);
  return 0;
}
