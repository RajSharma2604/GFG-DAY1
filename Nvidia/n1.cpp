//dot product of two vector
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int dotproduct(vector<int> v1,vector<int> v2){
    int ans=0;
    if(v1.size()!=v2.size())return -1;
    for(int i=0;i<v1.size();i++){
        ans=ans+v1[i]*v2[i];
    }
    return ans;
}
int main()
{   
    vector<int> v1={1,2,3,4};
    vector<int> v2={2,3,4,5};
    int ans=dotproduct(v1,v2);
    cout<<"answer is:"<<ans;
return 0;
}