 //
 #include<iostream>
 using namespace std;
 #include<bits/stdc++.h>
 string largestNumber(int n, int sum)
    {
        // Your code here
        if(n*9<sum)return "-1";
        string temp="";
        int count=sum/9;
        while(count--){
            temp.push_back('9');
        }
        int length=temp.length();
        if(length==n)return temp;
        int rem=sum%9;
        char ch=rem+'0';
        temp.push_back(ch);
        int len=temp.length();
        
        while(len<n){
                temp.push_back('0');
                len++;
            }
        
    
        return temp;
        
    }
    int main(){
        int n=3;
        int sum=27;
        string str=largestNumber(n,sum);
        cout<<"string is: "<<str;
    }