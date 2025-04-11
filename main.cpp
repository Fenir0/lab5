#include "src/arythm.cpp"
#include "src/try_example.cpp"
#include "src/mod_arythm.cpp"

#include<vector>
#include<iostream>

int main(){
    int n1, n2;
    std::cout << "2^N1 + 2^N2: ";
    std::cin >> n1 >> n2;
    std::vector<int> v1 = pow2_sum(n1, n2);
    for(int i = v1.size()-1; i >= 0; i--) std::cout << v1[i];
    std::cout << "\nFibonaci N: ";
    
    int n3;
    std::cin >> n3;
    std::vector<int> v3 = fibb_n(n3);
    for(int i = v1.size()-1; i >= 0; i--) std::cout << v3[i];
    std::cout << '\n';
    std::cout << "n1\%n2   =  " << modder(n1, n2) << '\n';
    std::cout << "n1\%-n2  =  " << modder(n1, -n2) << '\n';
    std::cout << "-n1\%n2  =  " << modder(-n1, n2) << '\n';
    std::cout << "-n1\%-n2 =  " << modder(-n1, -n2) << '\n';
    
    func_v2(0.5);
}