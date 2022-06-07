#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    
    int s;
    cin>>s;
    int prev = s;
    bool ans = false;
    int i = 1;
    while(i<n){
        cin>>s;
        int curr = s;
        if(prev==curr){
            cout<< "false" <<endl;
            break;
        }else if(prev<curr){
            ans = true;
        }
        else{
            if(ans == true){
                ans = false;
                cout<< "false" <<endl;
                break;
            }
            ans = true;
        }
        prev = curr;
        i++;
    }

    if(ans==true){
        cout<<"true"<<endl;
    }
    
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
    
//     int s;
//     cin>>s;
//     int prev = s;
//     bool ans = false;
//     int i = 1;
//     while(i<n){
//         cin>>s;
//         int curr = s;
//         if(prev==curr){
//             ans = false;
//             cout<< "false" <<endl;
//             return 0;
//         }else if(prev<curr){
//             ans = true;
//         }
//         else{
//             if(ans == true){
//                 ans = false;
//                 cout<< "false" <<endl;
//                 return 0;
//             }
//             // ans = true;
//         }
//         prev = curr;
//         i++;
//     }

    
//         cout<<"true"<<endl;
    
    
//     return 0;
// }