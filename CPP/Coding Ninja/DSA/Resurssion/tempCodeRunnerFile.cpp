int copyu(string output[], int n, int l,string str[],int num){
    string a[n*l];
    int k = 0;
    for(int i = 0; i < l ; i++){
        for(int j =0; j<n; j++){
            a[k] = output[j]+str[num%10][i];
            k++;
        }
    }

    for(int i = 0; i < n*l ; i++){
        output[i] = a[i];
    }
    return n*l;
}

int rtnKeypad(int num, string output[]){
    string str[100] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(num == 0){
        output[0] = "";
        return 1;
    }
    int smallnum =  num/10;
    int n = rtnKeypad(smallnum,output);
    int l = str[num%10].length();
    n = copyu(output,n,l,str,num);
    
    return n;
}