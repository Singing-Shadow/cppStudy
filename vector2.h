#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
private:
	float V_x, V_y;
protected:

public:
	Vector2() : Vector2(0, 0) {};
	Vector2(float x, float y) : V_x(x), V_y(y) {};
	~Vector2() {};

	Vector2 operator+(const Vector2& other) const {
		return Vector2(V_x + other.V_x, V_y + other.V_y);
	};
	Vector2 operator-(const Vector2& other) const {
		return Vector2(V_x - other.V_x, V_y - other.V_y);
	};
	Vector2 operator*(const float& scalar) const {
		return Vector2(V_x * scalar, V_y * scalar);
	};
	float* getVector() {
		return new float[2] {V_x, V_y};
	}
};

#endif
