#include <cstdio>
#include <cstdlib>
#include <cstddef>
#include <iostream>
#include <cinttypes>
#include <map>
#include <vector>

struct i_am_a_struct {
    char c;
    int i;
};

int main() {
    std::cout << "Size:" << sizeof(i_am_a_struct) << '\n';
    std::cout << "Alignment:" << alignof(i_am_a_struct) << '\n';
}