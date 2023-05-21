int atoi(string str) {
        
        
        int rem ,ans=0,flag=0 ;
        
        
        for(int i=0;i<str.size();i++){
            
            if(str[0]=='-' && i==0){
                flag = 1 ;
                continue ;
            }
            
            if(str[i] == '0'){
                rem = 0;
              ans = 10*ans + rem ;

            }
           else if(str[i] == '1'){
                rem = 1;
                ans = 10*ans + rem ;
            }
          else  if(str[i] == '2'){
                rem = 2;
                                ans = 10*ans + rem ;

            }
          else  if(str[i] == '3'){
                rem = 3;
                                ans = 10*ans + rem ;


            }
          else  if(str[i] == '4'){
                rem = 4;
                                ans = 10*ans + rem ;


            }
           else if(str[i] == '5'){
            rem = 5;
                            ans = 10*ans + rem ;


            }
           else if(str[i] == '6'){
                rem = 6;
                                ans = 10*ans+ rem ;


            }
          else  if(str[i] == '7'){
                rem = 7;
                ans = 10*ans + rem ;


            }
           else if(str[i] == '8'){
                rem = 8;
                                ans = 10*ans + rem ;


            }
           else if(str[i] == '9'){
                rem = 9;
                                ans = 10*ans + rem ;


            }

            else{
                return -1 ;
            }
        }
        
        
        if(flag==1){
            ans = -1 * ans ;
        }
        return ans ;
        
    }