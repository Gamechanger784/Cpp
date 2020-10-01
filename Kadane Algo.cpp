#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){cin >> arr[i];}
        int maxsum = INT_MIN;
        int currsum = 0;
        for(int i = 0 ; i < n; i++){
            currsum +=arr[i];
            if(currsum>maxsum){maxsum = currsum;}
            if(currsum<0){currsum = 0;}
        }
        cout << maxsum << endl;
    }
	return 0;
}
