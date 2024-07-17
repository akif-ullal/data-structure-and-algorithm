#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findduplicatenumber(vector<int> &arr)
{
    int n=arr.size();
    int ans1=0;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            ans1=arr[i];
            break;
        }
    }
     
    return ans1;
}
int main()
{
    vector<int> arr={1,3,4,2,2};
    int ans=findduplicatenumber(arr);
    cout<<ans<<endl;
}
