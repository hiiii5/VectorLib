/*===================================================
* VectorLib Source Code
*===================================================
* Editions:
*  - Created: Dustin Roden, 07/07/2015
*/

#include "Vector.h"

Vector2 Vector::Translate(Vector2 vec, Vector2 transVec) const
{
	return Vector2(vec.GetX() + transVec.GetX(), vec.GetY() + transVec.GetY());
}

Vector2 Vector::Translate(Vector2 vec, float32 x, float32 y) const
{
	return Vector2(vec.GetX() + x, vec.GetY() + y);
}

Vector2 Vector::Scale(Vector2 vec, float32 m) const
{
	return Vector2(vec.GetX() * m, vec.GetY() * m);
}

Vector2 Vector::Scale(Vector2 vec, float32 x, float32 y) const
{
	return Vector2(vec.GetX() * x, vec.GetY() * y);
}

Vector2 Vector::Rotate(Vector2 vec, float32 theta) const
{
	Vector2 rotatedVec = vec;
	
	// Loss of precision is ok, unless we want to upgrade this to a higher precision.
	rotatedVec.SetX( vec.GetX() * cos(theta * Deg2Rad) - vec.GetY() * sin(theta * Deg2Rad) );
	rotatedVec.SetY( vec.GetY() * sin(theta * Deg2Rad) - vec.GetX() * cos(theta * Deg2Rad) );

	return rotatedVec;
}
