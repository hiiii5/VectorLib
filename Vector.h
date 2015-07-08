#ifndef VECTOR_H
#define VECTOR_H

#if _MSC_VER > 1000
	#pragma once
#endif

#include "Vector2.h"
#include "CrossPlatformController.h"

class Vector
{
public:
	/*
	* Will translate the vector by the given x and y amounts.
	* vec - The vector to translate.
	* x   - the amount of x to translate.
	* y   - The amount of y to translate.
	*/
	Vector2 Translate(Vector2 vec, float32 x, float32 y);
	/*
	* Will scale the vector by the given dimensions.
	* vec - The vector to scale.
	* m   - The uniform ratio to scale to.
	*/
	Vector2 Scale(Vector2 vec, float32 m);
	/*
	 * Will scale the vector by the given dimensions.
	 * vec - The vector to scale.
	 * x   - The ratio by x to scale to.
	 * y   - The ratio by y to scale to.
	 */
	Vector2 Scale(Vector2 vec, float32 x, float32 y);
	/*
	 * Will rotate the vector by the given angle of theta.
	 * vec   - The vector to rotate.
	 * theta - The angle to rotate by, should be in degrees.
	 */
	Vector2 Rotate(Vector2 vec, float32 theta);
};

#endif // VECTOR_H
