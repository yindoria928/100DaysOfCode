#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n] ;
    int aee[n] ;
    for(int i = 0; i<n; i++){
        cin >> arr[i] ;
    }
    for(int i = 0; i<n; i++){
        aee[arr[i]-1] = i+1 ;
    }
    for(int i = 0; i<n ;i++){
        cout << aee[i] << " " ;
    }
return 0;
}
