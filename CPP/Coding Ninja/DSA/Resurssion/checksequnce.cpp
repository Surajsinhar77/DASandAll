#include <iostream>
#include <string>
using namespace std;

bool mychecksequenece(char large[], char *small, int i){
    
    if (small[0] == '\0'){
        return true;
    }

    // int size = sizeof_large(large);
    for (int i; large[i] != '\0'; i++){

        if (large[i] == small[0]){
            // char *smallans = small;
            small++;
            bool ans = mychecksequenece(large, small,i);
            return ans;
        }
    }
    return false;
}


bool checksequenece(char large[], char *small){

    bool ans = mychecksequenece(large,small,0);
    return ans;

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