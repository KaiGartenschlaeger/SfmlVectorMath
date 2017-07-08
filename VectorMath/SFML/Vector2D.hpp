#pragma once

#include <cmath>
#include <SFML\System\Vector2.hpp>

class Vector2D : public sf::Vector2<float>
{

public:

	Vector2D();
	Vector2D(float x, float y);
	Vector2D(sf::Vector2f const & other);

	/// <summary>
	/// Addiert einen Vektor.
	/// </summary>
	Vector2D add(Vector2D const & other) const;

	/// <summary>
	/// Addiert einen Vektor.
	/// </summary>
	Vector2D & operator+(Vector2D const & other) const;

	/// <summary>
	/// Subtrahiert ein Vektor.
	/// </summary>
	Vector2D subtract(Vector2D const & other) const;

	/// <summary>
	/// Subtrahiert ein Vektor.
	/// </summary>
	Vector2D & operator-(Vector2D const & other) const;

	/// <summary>
	/// Multipliziert den Vektor mit einem Skalar.
	/// </summary>
	Vector2D multiply(float scalar) const;

	/// <summary>
	/// Multipliziert den Vektor mit einem Skalar.
	/// </summary>
	Vector2D & operator*(float scalar) const;

	/// <summary>
	/// Überprüft, ob zwei Vektoren gleich sind.
	/// </summary>
	bool operator==(Vector2D const & other) const;

	/// <summary>
	/// Überprüft, ob zwei Vektoren nicht gleich sind.
	/// </summary>
	bool operator!=(Vector2D const & other) const;

	/// <summary>
	/// Berechnet das Skalarprodukt zweier Vektoren.
	/// </summary>
	float multiply(Vector2D const & other) const;

	/// <summary>
	/// Berechnet das Skalarprodukt zweier Vektoren.
	/// </summary>
	float operator*(Vector2D const & other) const;

	/// <summary>
	/// Berechnet die Lände des Vektors.
	/// </summary>
	float length() const;

	/// <summary>
	/// Berechnet die quadratische Länge des Vektors.
	/// </summary>
	float lengthSquared() const;

	/// <summary>
	/// Negiert den Vektor.
	/// </summary>
	Vector2D negate();

	/// <summary>
	/// Berechnet den Winkel zwischen zwei Vektoren.
	/// </summary>
	float angleTo(Vector2D const & other) const;

	/// <summary>
	/// Normalisiert den Vektor.
	/// </summary>
	void normalize();

	/// <summary>
	/// Berechnet die direkte Distanz zwischen zwei Vektoren (Fluglinie).
	/// </summary>
	float distanceTo(Vector2D const & other) const;

	/// <summary>
	/// Berechnet die Manhatten Distanz zwischen zwei Vektoren.
	/// </summary>
	float manhattenDistanceTo(Vector2D const & other) const;

	/// <summary>
	/// Gibt an, ob es sich um ein Null-Vektor handelt.
	/// </summary>
	bool isNull() const;

};