#include "src/arythm.cpp"
#include "src/try_example.cpp"
#include "src/mod_arythm.cpp"

#include<vector>
#include<iostream>

int main(){
    int n1, n2;
    std::cin >> n1 >> n2;
    std::vector<int> v1 = pow2_sum(n1, n2);
    for(int i = v1.size()-1; i >= 0; i--) std::cout << v1[i];
    std::cout << '\n';
    int n3;
    std::cin >> n3;
    std::vector<int> v3 = fibb_n(n3);
    for(int i = v1.size()-1; i >= 0; i--) std::cout << v3[i];
    std::cout << '\n';
    std::cout << modder(13, 3) << '\n';
    std::cout << modder(13, -3) << '\n';
    std::cout << modder(-13, 3) << '\n';
    std::cout << modder(-13, -3);
    
    func_v2(0.5);
}