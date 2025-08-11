#include <iostream> 

// member function
class Vector2D {
public:
    float x, y;

    Vector2D(float x = 0.0f, float y = 0.0f) : x(x), y(y) {}

    // Overloading the '+' operator as a member function
    Vector2D operator+(const Vector2D& rhs) const {
        // 'this' pointer refers to the left-hand side object (e.g., v1 in v1 + v2)
        // 'rhs' refers to the right-hand side object (e.g., v2 in v1 + v2)
        return Vector2D(this->x + rhs.x, this->y + rhs.y);
    }
};


// non-member function 
class Vector2D {
public:
    float x, y;

    Vector2D(float x = 0.0f, float y = 0.0f) : x(x), y(y) {}
};

Vector2D operator+(const Vector2D& lhs, const Vector2D& rhs) {
    // 'lhs' is the left-hand side object (e.g., v1 in v1 + v2)
    // 'rhs' is the right-hand side object (e.g., v2 in v1 + v2)
    return Vector2D(lhs.x + rhs.x, lhs.y + rhs.y);
}


int main() {
    Vector2D v1(2.0f, 3.0f);
    Vector2D v2(5.0f, 1.0f);

    // The syntax for using the operator is identical
    Vector2D v3 = v1 + v2; // Internally calls operator+(v1, v2)

    std::cout << "v3.x = " << v3.x << ", v3.y = " << v3.y << std::endl; // Output: v3.x = 7, v3.y = 4
    return 0;
}



