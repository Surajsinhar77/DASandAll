int findUniq(int ary[], int n){
    int temp = 0, j =0;

    for(int i =0; i<n; i++){
        if(ary[i]==ary[j] && i!=j){
            j++;
            i=0;
        }else{
            if(i==n-1){
                temp = ary[j];
            }
        }
    }
    return temp;
}