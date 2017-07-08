#include "Vector2D.hpp"

Vector2D::Vector2D()
	: sf::Vector2f()
{
}

Vector2D::Vector2D(float x, float y)
	: sf::Vector2f(x, y)
{
}

Vector2D::Vector2D(sf::Vector2f const & other)
	: sf::Vector2f(other.x, other.y)
{
}

Vector2D Vector2D::add(Vector2D const & other) const
{
	return Vector2D(
		x + other.x,
		y + other.y
	);
}

Vector2D & Vector2D::operator+(Vector2D const & other) const
{
	return add(other);
}

Vector2D Vector2D::subtract(Vector2D const & other) const
{
	return Vector2D(
		x - other.x,
		y - other.y
	);
}

Vector2D & Vector2D::operator-(Vector2D const & other) const
{
	return subtract(other);
}

Vector2D Vector2D::multiply(float scalar) const
{
	return Vector2D(
		x * scalar,
		y * scalar
	);
}

Vector2D & Vector2D::operator*(float scalar) const
{
	return multiply(scalar);
}

bool Vector2D::operator==(Vector2D const & other) const
{
	return x == other.x && y == other.y;
}

bool Vector2D::operator!=(Vector2D const & other) const
{
	return !(*this == other);
}

float Vector2D::multiply(Vector2D const & other) const
{
	return (
		x * other.x +
		y * other.y);
}

float Vector2D::operator*(Vector2D const & other) const
{
	return multiply(other);
}

float Vector2D::length() const
{
	return std::sqrt(
		x * x +
		y * y);
}

float Vector2D::lengthSquared() const
{
	return
		x * x +
		y * y;
}

Vector2D Vector2D::negate()
{
	return Vector2D(
		-x,
		-y
	);
}

float Vector2D::angleTo(Vector2D const & other) const
{
	float scalarProduct = multiply(other);
	float lengths = length() * other.length();

	if (lengths == 0.0f)
		return 0.0f;

	return std::acosf(scalarProduct / lengths);
}

void Vector2D::normalize()
{
	float l = length();
	if (l > 0.0f)
	{
		x /= l;
		y /= l;
	}
}

float Vector2D::distanceTo(Vector2D const & other) const
{
	float distance;

	if (x == other.x)
	{
		distance = other.y - y;
	}
	else if (y == other.y)
	{
		distance = other.x - x;
	}
	else
	{
		distance = Vector2D(
			other.x - x,
			other.y - y
		).length();
	}

	return std::abs(distance);
}

float Vector2D::manhattenDistanceTo(Vector2D const & other) const
{
	float distance;

	if (x == other.x)
	{
		distance = other.y - y;
	}
	else if (y == other.y)
	{
		distance = other.x - x;
	}
	else
	{
		distance =
			other.x - x +
			other.y - y;
	}

	return std::abs(distance);
}

bool Vector2D::isNull() const
{
	return x == 0.0f && y == 0.0f;
}