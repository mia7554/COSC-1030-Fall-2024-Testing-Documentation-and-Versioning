// tests/test_addition.cpp
#include <cassert>
#include "../src/addition.cpp"

void testAdd() {
    assert(add(2, 3) == 5);
    assert(add(0, 0) == 0);
    assert(add(-1, 1) == 0);
    assert(add(10, 5) == 15);
    std::cout << "All tests passed!" << std::endl;
}

int main() {
    testAdd();
    return 0;
}
