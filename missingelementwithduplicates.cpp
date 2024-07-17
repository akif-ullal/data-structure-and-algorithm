#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findmissingelement(vector<int> arr)
{
  int n=arr.size();
  sort(arr.begin(),arr.end());
  vector<int> ans;
  for(int i=0;i<n;i++)
  {
      if(arr[i]!=i+1)
      {
          ans.push_back(i+1);
      }
  }
  return ans;
}
int main()
{
    vector<int> arr={5,3,3,3,1};
    vector<int>ans=findmissingelement(arr);
    for(int i:ans)
    cout<<i<<" ";
    cout<<endl;
}