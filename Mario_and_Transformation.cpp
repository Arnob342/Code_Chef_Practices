#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int y;
        cin >>y;
        int c=1;
        int s =2;
        int n = 3;
        static string a = "NORMAL";
        for (int i = 1; i < y+1; i++) 
        {
      
            if(i==c)
            {
                a = "HUGE";
                c+=3;
            }
         
            if(i==s)
            {
                a = "SMALL";
                
                s+=3;
            }
            if(n==i)
            {
                a = "NORMAL";
                n+=3;
            }
            
           
               
        }
        cout<<a<<endl;
       
   
    }
    return 0;
}