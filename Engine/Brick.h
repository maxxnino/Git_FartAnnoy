#pragma once

#include "RectF.h"
#include "Vec2.h"
#include "Graphics.h"
#include "Colors.h"
#include "Sound.h"

class Brick
{
public:
	Brick() = default; 
	Brick(RectF& rect, Color c)
		:
		rect(rect),
		c(c)
	{}
	void Draw(Graphics& gfx);
	void Update(const Vec2& target);

private:
	static constexpr Color brickColor = Colors::Green;
	static constexpr float brickWidth = 50.0f;
	static constexpr float brickHeight = 30.0f;
	RectF rect;
	bool isDestroy = false;
	Color c;
};