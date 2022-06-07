#include<iostream>
using namespace std;


// bool isSubsequence(string s, string t) {
        
//         int n2 = s.length();
//         int n1 = t.length();
        
//         bool ans = NULL;
        
//         for(int i =0 ; i<n1;  i++){
//             for(int j =0; j<n2; j++ ){
                    
//                     cout<<t[i]<<" "<<s[j]<<endl;
//                     if(s[j]==t[i]){
//                         ans = true;
//                         // cout<<ans<<endl;
//                         break;
//                     }else{
//                         if(j==n2-1){
//                             ans = false;
//                             return ans;
//                         } 
//                     }
//                     // return ans;
//             }
//         }
//         return ans;
// }

    bool isSubsequence(string s, string t) {
        
        int n1 = s.length();
        int n2 = t.length();
        
        bool ans = NULL;
        
        for(int i =0 ; i<n1;  i++){
            for(int j =0; j<n2; j++ ){
                    
                    cout<<t[i]<<" "<<s[j]<<endl;
                    if(t[j]==s[i]){
                        ans = true;
                        // cout<<ans<<endl;
                        break;
                    }else{
                        if(j==n2-1){
                            ans = false;
                            return ans;
                        } 
                    }
                    // return ans;
            }
        }
        return ans;
}


int main(){
    
    // int n;
    // cout<<"Enter the size of the array : ";
    // cin >> n;

    bool  a = isSubsequence("","ahbgdc");
    cout<<a<<endl;



    // int ary[n];
    
    return 0;
}