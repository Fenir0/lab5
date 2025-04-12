#ifndef ARYTHM
#define ARYTHM

#include<vector>
void calculate2n(std::vector<int>& v, int n);

/** @brief returns (n!) */
std::vector<int> factorial(int n);

/** @brief returns 2**n */
std::vector<int> pow2n(int n);

/** @brief returns 2**n1 + 2**n2 */
std::vector<int> pow2_sum(int n1, int n2);

/** @brief returns 2**n1 - 2**n2 */
std::vector<int> pow2_ext(int n1, int n2);

void sumv(std::vector<int>& v1, std::vector<int>& v2);

/** @brief returns Nth fibonacci number */
std::vector<int> fibb_n(int n);

#endif