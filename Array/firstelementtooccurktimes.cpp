//
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int Fun(int *arr, int n, int k)
{   
    unordered_map<int,int> mp;
    // for(int i=0;i<n;i++){
    //     mp[arr[i]]++;
    // }
    // all the elements along with their frequency stored

    //iterating over an map
    // for(auto i:mp){
    //     if(i.second==k){
    //         return i.first;
    //     }
    // }
    //above code is not correct cause there is a 
    // chance that it may return 2 as output
    // cause it is in ordered map



    //lets do it another time
     for(int i=0;i<n;i++){
        if(mp[arr[i]]==(k-1))return arr[i];

        mp[arr[i]]++;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 2, 1, 3, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    int k = 3; // k times occuring first element
    int ans = Fun(arr, n, k);
    cout << "First Repeating Element is :" << ans;
    return 0;
}