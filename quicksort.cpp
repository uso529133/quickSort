#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void quickSort(vector<T> &A, int begin, int end) {
    if (begin >= end) return;

    vector<T> B, C;

    for (size_t i = begin + 1; i <= end; ++i) {
        if (A[i] < A[begin]) {
            B.push_back(A[i]);
        } else {
            C.push_back(A[i]);
        }
    }

    A[begin + B.size()] = A[begin];

    copy(B.begin(), B.end(), A.begin() + begin);
    copy(C.begin(), C.end(), A.begin() + begin + B.size() + 1);

    quickSort(A, begin, begin + B.size() - 1);
    quickSort(A, begin + B.size() + 1, end);

    return;
}
 
