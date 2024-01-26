 int atoi(string str) {
        //Your code here
        int len=str.length();
        int i=0;
        int sum=0;
        if(str[0]=='-'){
            i++;
            while(i<len){
                if(isalpha(str[i]))return -1;
                if(str[i]>='0' && str[i]<='9')
                    sum=sum*10+str[i]-'0';
                else return-1;
                i++;
            }
            return -sum;
        }
        else{
            while(i<len){
                if(isalpha(str[i]))return -1;
               if(str[i]>='0' && str[i]<='9')
                    sum=sum*10+str[i]-'0';
                else return-1;
                i++;
            }
            return sum;
        }
 }