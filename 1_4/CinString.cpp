#include <iostream>
#include <string>

int main(){
    int nAge;
    std::cout << "나이 입력 : " << std::endl;
    std::cin >> nAge;

    std::string strName;
    std::cout << "이름 입력 : " << std::endl;
    std::cin >> strName;

    char szJob[32];
    std::cout << "직업 입력 : " << std::endl;
    std::cin >> szJob;

    std::cout << "나이 : " << nAge << ", 이름 : " << strName << ", 직업 : " << szJob << std::endl;

    return 0;
}

