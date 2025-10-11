#include <iostream>
using namespace std;
int *search_array(int *arr, const int N, const int k){
    int dem = 0;
    for(int i =0 ;i <N;i++){
        if(arr[i]*arr[i]<k){
            dem++;
        }
    }
    cout << dem << endl;
    for(int i = 0;i<dem;i++){
        if(arr[i]*arr[i]<k){
            printf("%d",arr[i]);
        }
    }
    return arr;
}    
int main() {
    int N = 6, k = 5;
    int *arr = new int[N];
    for(int i = 0;i<N;i++){
        cin >> arr[i];
    }
    search_array(arr, N, k);
    delete[] arr;
    return 0;
}