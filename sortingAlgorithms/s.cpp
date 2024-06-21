//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{

    stack<int> st;
   int val=arr[0];
   for(int i=0;i<n;i++)
   {
       val=min(val,arr[i]);
       st.push(val);
   }
   return st;
   
}

void _getMinAtPop(stack<int>s)
{
  
    while(!s.empty())
    {   
       //a[i]= solve(s,s.top(),mini);//for top of stack min will be inserted at front of array
       cout<< s.top()<<" ";
        s.pop();
       
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}