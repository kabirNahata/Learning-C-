#include <iostream>

class Vector2D {
public:
    float x, y;

    // Constructor to initialize a Vector2D object
    Vector2D(float x = 0.0f, float y = 0.0f) : x(x), y(y) {}
};

// Overloading the '+' operator as a non-member function
// 'lhs' is the left-hand side object (e.g., v1 in v1 + v2)
// 'rhs' is the right-hand side object (e.g., v2 in v1 + v2)
Vector2D operator+(const Vector2D& lhs, const Vector2D& rhs) {
    return Vector2D(lhs.x + rhs.x, lhs.y + rhs.y);
}

int main() {
    Vector2D v1(2.0f, 3.0f);
    Vector2D v2(5.0f, 1.0f);

    // This calls the overloaded operator+ function
    Vector2D v3 = v1 + v2;

    std::cout << "v3.x = " << v3.x << ", v3.y = " << v3.y << std::endl; // Output: v3.x = 7, v3.y = 4
    return 0;
}