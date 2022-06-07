#include <iostream>
#include <string>
using namespace std;

bool checksequenece(char large[], char *small){
    
    if (small[0] == '\0'){
        return true;
    }

    // int size = sizeof_large(large);
    for (int i = 0; large[i] != '\0'; i++){

        if (large[i] == small[0]){
            // char *smallans = small;
            small++;
            bool ans = checksequenece(large, small);
            return ans;
        }
    }
    return false;
}

int main()
{
    char large[100], small[100];
    // char small[100];

    cout << "enter the value of large and small : ";
    cin >> large >> small;

    bool ans = checksequenece(large, small);
    if(ans){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}