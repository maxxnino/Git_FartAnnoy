#pragma once

#include "RectF.h"
#include "Graphics.h"
#include "Colors.h"

class Wall
{
public:
	Wall()
		:
		rect(0,0,Graphics::ScreenWidth - 1,Graphics::ScreenHeight - 1)
	{}

public:
	RectF rect;
};