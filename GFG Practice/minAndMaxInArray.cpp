#include<iostream>
#include<vector>
#define ll long long    // know we can replay ll at the place of long long
using namespace std;

pair<ll ,ll> getMaxAndMin(vector<ll> a, int n){

    ll min = a[0];
    ll  max= a[0];

    pair<ll , ll> p1;

    for(int i=0; i<n; i++){
        if(min > a[i]){
            min = a[i];
        }

        if(max < a[i]){
            max = a[i];
        }
    }
    p1.first = min; p1.second = max;
    return p1;  // This is also treate as the pair class it will automatic convert in the pair class if we use {} bracess
}

int main(){
    vector<ll> arry;
    int data;
    cin>>data;
    while(data != -1){
        arry.push_back(data);
        cin>>data;
    }

    int size = arry.size();
    pair<ll , ll> p1 = getMaxAndMin(arry, size);
    
    cout<<p1.first<<" "<<p1.second<<endl;
    return 0;
}