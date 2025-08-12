#include <iostream>
#include <string>

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    
    // integers
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << '\n';
    swap(x, y);
    std::cout << "After swap:  x = " << x << ", y = " << y << '\n';

    // doubles
    double d1 = 3.14, d2 = 2.718;
    std::cout << "Before swap: d1 = " << d1 << ", d2 = " << d2 << '\n';
    swap(d1, d2);
    std::cout << "After swap:  d1 = " << d1 << ", d2 = " << d2 << '\n';

    // strings
    std::string s1 = "hello", s2 = "world";
    std::cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << '\n';
    swap(s1, s2);
    std::cout << "After swap:  s1 = " << s1 << ", s2 = " << s2 << '\n';

    return 0;
}
