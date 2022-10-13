#include "Stack.hpp"

int main() {
// Test Stack
    auto s = Stack<float, 5>::Create();
    s.Push(1);
    s.Push(4);
    s.Push(5);
    s.Push(7.8);
    auto s2(s);
    while (!s2.IsEmpty()) {
        std::cout << s2.Top() << " ";
        s2.Pop();
    }
    return 0;
}
