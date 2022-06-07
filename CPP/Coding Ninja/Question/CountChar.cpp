#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    // 	char c='A';
    // 	char a= 'Z';

    // 	char x='a';
    // 	char h='z';
    // // 	while('$' != c){
    // // 	     cout<<"My name is suraj "<<endl;
    // // 	}

    //      cout<<c+0<<endl;
    //      cout<<a+0<<endl;
    //      cout<<x+0<<endl;
    //      cout<<h+0<<endl;

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	*/
    int alpha = 0, space = 0, digit = 0;
    char c;
    
    while (c != '$'){
        c = cin.get();
        if (c + 0 >= 97 && c + 0 <= 122){
            alpha = alpha + 1;
        }
        else if (isdigit(c)){
            digit = digit + 1;
        }
        else if (c == ' '){
            space = space + 1;
        }
    }
    cout << alpha << " " << digit << " " << space << endl;
    return 0;
}
