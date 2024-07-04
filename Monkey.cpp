#include<bits/stdc++.h>
using namespace std;

int main() {
    char ch[100005];
   

    while(cin.getline(ch, 100005)){
        int length = strlen(ch);

        sort(ch, ch + length);

        for(int i=0;i<length;i++){
            if(ch[i]!=' '){
                cout<<ch[i];
            }
            
        }
        cout<<endl;
    }

    return 0;
}
