#include <iostream>

using namespace std;

int main(){
    //int 객체 생성(동적 할당)
    int *pData = new int;
    int *pNewData = new int(10);

    *pData = 5;
    cout << *pData <<endl;
    cout << *pNewData << endl;

    //객체 동적 해제
    delete pData;
    delete pNewData;

    //객체를 배열로 동적 생성
    int *arr = new int[5];
    for(int i = 0; i < 5; i++){
        arr[i] = (i + 1) * 10;
    }
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }

    //배열은 배열 형태를 통해 삭제
    delete[] arr;
}

