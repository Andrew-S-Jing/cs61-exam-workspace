#include <cstdio>
#include <cstdlib>
#include <cstddef>
#include <iostream>
#include <cinttypes>
#include <map>
#include <vector>

struct header {
    char c;
    int i;
};

int main() {
    header h = {0, 1234};
    std::cout << alignof(h) << '\n';
}