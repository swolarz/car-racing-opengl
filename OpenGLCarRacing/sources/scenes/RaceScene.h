#pragma once

#include <vector>

#include "drawing/camera/Camera.h"
#include "models/car/RaceCar.h"
#include "racing/Race.h"
#include "Scene.h"
#include "scenes/TerrainLoader.h"

class RaceScene : public Scene
{
private:

	TerrainLoader* terrainLoader;
	Camera* camera;
	Race* race;

	std::vector<RaceCar*> raceCars;

public:

	RaceScene(Race* race, int windowWidth, int windowHeight);

	virtual void update();
	virtual void render();
};
