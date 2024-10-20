#pragma once
#include "math.h"

/**
 * @struct Vector2
 * A structure representing a 2D vector with x and y coordinates.
 */
typedef struct Vector2
{
    float x, y;  // Coordinates of the 2D vector.

    Vector2();  // Default constructor, initializes x and y to 0.
    Vector2(float x, float y);  // Constructor with parameters to initialize the vector.

    bool operator==(Vector2& Vec);  // Equality operator: checks if two vectors are equal.

    const Vector2& operator-(Vector2 const& Vector);  // Subtraction operator: returns a new Vector2 representing the difference.
    const Vector2& operator+(Vector2 const& Vector);  // Addition operator: returns a new Vector2 representing the sum.
} Vector2, * PVector2;

/**
 * @struct Vector3
 * A structure representing a 3D vector with x, y, and z coordinates.
 */
typedef struct Vector3
{
    float x, y, z;  // Coordinates of the 3D vector.

    Vector3();  // Default constructor, initializes x, y, and z to 0.
    Vector3(float x, float y, float z);  // Constructor with parameters to initialize the vector.

    const Vector3& operator-(void) const;  // Unary negation operator: returns a vector with negated coordinates.
    // Equality operator: checks if two vectors are equal.
    const bool operator==(const Vector3& v) const;  
    // Inequality operator: checks if two vectors are not equal.
    const bool operator!=(const Vector3& v) const;  
    // Addition operator: returns the sum of two vectors.
    const Vector3& operator+(const Vector3& v) const;  
    // Subtraction operator: returns the difference between two vectors.
    const Vector3& operator-(const Vector3& v) const;
    // Scalar multiplication: scales the vector by a factor.
    const Vector3& operator*(float fl) const;  
    // Scalar division: divides the vector by a factor.
    const Vector3& operator/(float fl) const; 
    // Returns the length (magnitude) of the vector.
    const float Length(void) const;  
    // Returns the length (magnitude) of the vector.
    float getLength() const;  
    // Returns a normalized vector with length 1.
    const Vector3 Normalize(void) const; 
    // Returns the Euclidean distance between two vectors.
    float Distance(Vector3 const& Vector); 
    // Returns the squared distance between two vectors.
    float DistanceEx(Vector3 const& Vector); 
    // Returns the dot product of two vectors.
    float DotProduct(Vector3 const& Vector); 
    // Rounds each component to the nearest integer (rounding up).
    const Vector3& RoundHalfUp();  
    // Rounds each component to the nearest integer (rounding down).
    const Vector3& RoundHalfDown();  
    // Returns the cross product of two vectors.
    Vector3 cross(const Vector3& other) const;  
    // Returns the dot product of two vectors.
    float dot(const Vector3& other) const;  

} * PVector3;

/**
 * A structure representing a rectangle defined by its position and size, each as a Vector2.
 */
typedef struct Rectangle {
public:
    Vector2 Position;  // Position of the rectangle (top-left corner).
    Vector2 Size;  // Size of the rectangle (width and height).
    // Constructor to initialize the position and size of the rectangle.
    Rectangle(Vector2 pos, Vector2 size);  
    // Default constructor.
    Rectangle(); 
    // Returns a new rectangle centered at the next position along the x-axis.
    Rectangle NextCenter();  
    // Returns a new rectangle with its size scaled by a factor.
    Rectangle Scale(float rate);  
    // Division operator: adjusts the rectangle's position along the x-axis.
    Rectangle operator/(float last_center);  
    // Multiplication operator: scales the rectangle's size.
    Rectangle operator*(float rescale); 
    // Returns a new rectangle with an increment to its x-coordinate.
    Rectangle incX(float x);  
    // Returns a new rectangle with an increment to its y-coordinate.
    Rectangle incY(float y); 
    // Returns a new rectangle with an increment to its width.
    Rectangle incWidth(float x); 
    // Returns a new rectangle with an increment to its height.
    Rectangle incHeight(float y);  

} Rectangle;
