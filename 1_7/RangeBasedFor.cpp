#include <iostream>

using namespace std;

int main(){
    int aList[5]  = {10, 20, 30, 40, 50};

    //각 요소의 값을 n에 복사함
    for(auto n : aList)
        cout << n << ' ';
    cout << endl;

    //n은 각 요소에 대한 참조 -> 값 변경 가능
    for(auto &n : aList){
        n = 100;
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}

