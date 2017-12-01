#pragma once

#include "Vec2.h"
#include "RectF.h"
#include "Graphics.h"
#include "Colors.h"
#include "Wall.h"
#include "SpriteCodex.h"
#include "Sound.h"

class Ball
{
public:
	Ball() = default;
	Ball(Vec2& vec, Vec2& vel)
		:
		vec(vec),
		vel(vel)
	{}
	void DoCollisionWalls(const RectF& walls);
	void RebounceX();
	void RebounceY();
	void Draw(Graphics& gfx) const;
	void Update(const float dt);
	RectF GetRect();
private:
	static constexpr float rad = 14.0f;
	Vec2 vec;
	Vec2 vel;
};
