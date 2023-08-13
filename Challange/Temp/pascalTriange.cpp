#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> x;
        for(int i=1; i<=numRows; i++){
            int z = 0;
            vector<int> y(i);
            if(i%2 == 0){
                for(int j=1; j<i/2; j++){
                    if(y.size() == 1){
                        y.push_back(1);
                    }
                    else if(y.size() == 2){
                        y.push_back(1);
                        y.push_back(1);
                    }
                    else{
                        if(j==1){
                            y.push_back(1);
                            y[y.size()-1] = y.push_back(1);
                        }
                        else{
                            y.push_back(x[i-2][z]+x[i-2][z+1]);
                            y[y.size()-j] = y.push_back(x[i-2][z]+x[i-2][z+1]); //1 5 10 10 5 1
                            z+=1;
                        }
                    }
                }
            }
            else{
                for(int j=1; j<=i/2+1; j++){
                    if(y.size() == 1){
                        y.push_back(1);
                    }
                    else if(y.size() == 2){
                        y.push_back(1);
                        y.push_back(1);
                    }
                    else{
                        if(j == (y.size()/2+1)-1){
                            y.push_back(x[i-1][z]+x[i-1][z+1]);
                        }
                        else{
                            if(j==1){
                                y.push_back(1);
                                y.push_back(y.size()-1) = y.push_back(1);
                            }
                            else{
                                y.push_back(x[i-2][z]+x[i-2][z+1]);
                                y[y.size()-j] = y.push_back(x[i-2][z]+x[i-2][z+1]);
                                z+=1;
                            }
                        }
                    }
                }
            }
            x.push_back(y);
        }
    }
};

int main(){
	int numrows;
	cin>>numrows;
	
	vector<vector<int>> v1 = generate(numrows);
	return 0;
}
