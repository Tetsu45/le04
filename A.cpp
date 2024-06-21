#include <iostream>
using namespace std;
int* read_inputs(int* size);
int main(){
    int n;int q;int count = 0;
    cin >> n;
    int* arr1 = read_inputs(&n);
    cin >> q;
    int* arr2 =  read_inputs(&q);
    for (int  j = 0; j < q; j++ ){
        for(int i =0; i <n; i++){
            if(arr1[i] == arr2[j]){
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    delete[] arr1;
    delete[] arr2;
    return 0;
}
int* read_inputs(int* size){
    int* arr =  new int[*size];
    for(int i = 0; i< *size; i++){
        std::cin >> arr[i];
    }
    return arr;
}
