#include<bits/stdc++.h>
using namespace std;
//https://www.youtube.com/watch?v=yB57bcffJo4
void sieve(int n){
    if(n<2){return ;}
    int arr[n+1];
    for(int i = 1 ; i <=n ; i++){
        arr[i] = 1;
    }
    for(int i = 3 ; i <=n ; i+=2){
        if(arr[i]==1){
            for(int j = i*i ; j <= n ; j+=i){
                arr[j] = 0;
            }
        }
    }
    cout << 2 << " ";
    for(int i = 3 ; i <= n ; i+=2){
        if(arr[i]!=0){cout << i << " ";}
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        sieve(n);
        cout << endl;
    }
	return 0;
}
