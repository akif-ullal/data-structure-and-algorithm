#include<iostream>
#include<vector>
#include <climits>
using namespace std;
double findmaxsubarray(vector<int> &arr,int k)
{
    int n=arr.size();
    int maxi=INT_MIN;
   
    for(int i=0;i<=n-k;i++)
    {
        int sum=0;
        for(int j=i;j<i+k;j++)
        {
          sum=sum+arr[j];
        }
       
        maxi=max(maxi,sum);
        cout<<"max element are:"<<maxi<<" "<<endl;
        
       
    }
    double maxavg=maxi/double(k);
    return maxavg;
}
int main()
{
    vector<int> arr={1,12,-5,-6,50,3};
    int k=4;
    double ans=findmaxsubarray(arr,k);
    cout<<ans<<endl;
}