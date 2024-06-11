#include <iostream>
using namespace std;

void missingelement(int arr[],int n)
{ 
  int i=0;
  while(i<n)
  {
      int index=arr[i]-1;
      if(arr[i]!=arr[index])
      {
        swap(arr[i],arr[index]);
      }
      else{
        i++;
      }
  }
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=i+1)
    {
        cout<<i+1<<" ";
    }
  }

}

int main() {
 int arr[] = {1, 3, 3, 3, 5};
 int n=5;
 missingelement(arr,n);
  return 0;
}

// Input: arr[] = {1, 3, 3, 3, 5}, N = 5
// Output: 2 4
// Explanation: The numbers missing from the list are 2 and 4
// All other elements in the range [1, 5] are present in the array.

// Input: arr[] = {1, 2, 3, 4, 4, 7, 7}, N = 7
// Output: 5 6