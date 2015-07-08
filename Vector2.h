#pragma once
/*===================================================
* VectorLib Source Code
*===================================================
* Editions:
*  - Created: Dustin Roden, 07/07/2015
*/

#ifndef VECTOR2_H
#define VECTOR2_H

#if _MSC_VER > 1000
	#pragma once
#endif

#include "CrossPlatformController.h"

#define ZERO Vector2(float32(0), float32(0)) public

class Vector2
{
private:
	float32 m_x, m_y;
	float32 m_theta;

public:
	Vector2();
	Vector2(float32 x, float32 y);
	~Vector2();

	float32 GetX(){ return m_x; } const
	float32 GetY(){ return m_y; } const

	void SetX(float32 x){ m_x = x; }
	void SetY(float32 y){ m_y = y; }

	float32 GetRotation(){ return m_theta; } const
	void SetRotation(float32 theta){ m_theta = theta; }
};

#endif // VECTOR2_H