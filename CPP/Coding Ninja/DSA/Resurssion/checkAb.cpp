#include<iostream>
#include<string>
using namespace std;

// void substr(char input[]){

//     char input2[100];
//     int i = 0;
//     while (input[i] != '\0'){
//         input2[i] = input[i+1];
//     }
//     input2[i+1] = '\0';

//     for(int j =0; j<=i; j++){
//         input[j] = input2[j];
//     }
// }

bool checkAb(char input[]){
    if(input[0] == '\0'){
        return true;
    }

    if(input[0]== 'a'){
        if(input[0+1] == 'a'){
            return true;
        }else if(input[0+1] == 'b'){
            if(input[0+2] == 'b'){
                return true;
            }
        }else if(input[0+1] == ' ' || input[0+1] == '\0'){
            return true;
        }else{
            return false;
        }
    }else if(input[0] == 'b' && *(input--) == 'b' || *(input--) == 'a'){
        if(*(input--) == 'b' && input[0+1] == 'a'){
            return true;
        }else if(*(input--) == 'b' && input[0+1] == ' ' ||  input[0+1] == '\0'){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }

    bool ans =  checkAb(input++);
    return ans;
}

int main(){
    char input[100];
    cin>>input;

    bool ans = checkAb(input);
    cout<<ans;
    return 0;
}