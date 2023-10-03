#include <iostream>

using namespace std;

//참조에 의한 호출
void TestFunc(int &rParam){
    rParam = 100;
}

void Swap(int &a, int &b){
    int nTmp = a;
    a = b;
    b = nTmp;
}

int main(){
    int nData = 10;
    int &ref = nData; // nData 변수에 대한 참조자 선언
    ref = 20; //참조자의 값을 변경하면 원본도 변경됨
    cout << nData << endl;

    TestFunc(nData);
    cout << nData << endl;

    int x = 10, y = 20;
    Swap(x, y);
    cout << "x: " << x <<", y: " << y << endl;

}

