#include<iostream>
#include<vector>

void calculate2n(std::vector<int>& v, int n) {
    int buf = 0, cur = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < v.size(); j++) {
            cur = 2 * v[j] + buf;
            if (cur < 0) std::cout << i << ' ' << v[j] << ' ' << buf << '\n';
            v[j] = cur % 10;
            buf = cur / 10;
        }
        while (buf > 0) {
            v.push_back(buf % 10);
            buf /= 10;
        }
        buf = 0;
    }
}

std::vector<int> factorial(int n){
    std::vector<int> v{ 1 }; // numbers are stored from least to most significant digits, e.g. 123 in v[j] is {3,2,1}
    int buf = 0, cur = 0;
    for (int i = 2; i <= n; i++) { 
        // v[j] holds current factorial (i-1)!
        // Each iteration multiplies current factorial by i, resulting in v[j]   holding i!
        for (int j = 0; j < v.size(); j++) {
            cur = i * v[j] + buf;  
            v[j] = cur % 10;
            buf = cur / 10;
        }
        // If number of digits is bigger than current (most significant digit is overflown)
        // => add them as most significant ones 
        while (buf > 0) {
            v.push_back(buf % 10);
            buf /= 10;
        }
        buf = 0;
    }
    return v;
}

std::vector<int> pow2n(int n){
    std::vector<int> v{ 1 };
    int buf = 0, cur = 0;
    for (int i = 1; i <= n; i++) {
        // v[j] holds 2^(i-1)
        // Each iteration multiplies current factorial by 2, resulting in v[j]   holding 2^i
        for (int j = 0; j < v.size(); j++) {
            cur = 2 * v[j] + buf;
            v[j] = cur % 10;
            buf = cur / 10;
        }
        while (buf > 0) {
            v.push_back(buf % 10);
            buf /= 10;
        }
        buf = 0;
    }
    return v;
}

std::vector<int> pow2_sum(int n1, int n2){
    int buf = 0, cur;
    if (n1 < n2) std::swap(n1, n2);
    std::vector<int> v1{ 1 }, v2{ 1 }, vres;
    calculate2n(v1, n1); // v1 holds the value of 2^n1
    calculate2n(v2, n2);
    for (int i = 0; i < v1.size(); i++) {
        cur = v1[i];
        if (i < v2.size()) cur += v2[i];  // handles the cases when v1 has more digits that v2
        cur += buf;
        v1[i] = cur % 10;
        buf = cur / 10;
    }
    if (buf > 0) v1.push_back(buf);
    return v1;
}

std::vector<int> pow2_ext(int n1, int n2){
    int buf = 0, cur;
    std::vector<int> v1{ 1 }, v2{ 1 }, vres;
    calculate2n(v1, n1);
    calculate2n(v2, n2);
    for (int i = 0; i < v1.size(); i++) {
        if (v2.size() <= i) {
            if (v1[i] < 0) {
                v1[i] += 10;
                v1[i + 1]--;
            }
        }else {
            if (v1[i] < v2[i]) {
                v1[i] += 10;
                v1[i + 1]--;
            }
            v1[i] = v1[i] - v2[i];
        }
    }
    return v1;
}

void sumv(std::vector<int>& v1, std::vector<int>& v2) {
    int a, buf = 0, cur;
    for (int i = 0; i < v2.size(); i++) {
        if (i >= v1.size()) v1.push_back(0);
        cur = v1[i] + v2[i] + buf;
        buf = cur / 10;
        v1[i] = v2[i]; 
        v2[i] = cur % 10;
    }
    if (buf) v2.push_back(buf);
}

std::vector<int> fibb_n(int n){
    int buf = 0, cur;
    if (n == 1) {
        return {0};
    }
    if (n == 2) {
        return {1};
    }
    std::vector<int> v1{ 0 }, v2{ 1 };
    for (int i = 2; i < n; i++) {
        sumv(v1, v2); // v1 = v2, v2 = v1+v2
    }
   return v2;  
}
