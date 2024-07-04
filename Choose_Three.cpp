#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>> T;

    while(T--){
        int N, S, flag=0;
        cin>> N>> S;

        int *arr = new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        for(int i=0;i<N-2;i++){
            for(int j=i+1;j<N-1;j++){
                for(int k=j+1; k<N; k++){
                    if(i==j||i==k||j==k){
                        break;
                    }
                    else if((arr[i]+arr[j]+arr[k])==S){
                     flag=1;
                     break;
                    }
                }
            }
        }

        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}