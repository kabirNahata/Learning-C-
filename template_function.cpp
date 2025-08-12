#include <iostream>

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(x, y); // Compiler generates swap<int>
    std::cout << "x: " << x << ", y: " << y << std::endl;

    std::string s1 = "hello", s2 = "world";
    swap(s1, s2); // Compiler generates swap<std::string>
    std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;
    return 0;
}