#include "WelcomeScene.h"

bool WelcomeScene::init()
{
	Scene::init();

	auto bkground = Sprite::create("res/img/main/ditu.jpg");
	bkground->setAnchorPoint(Vec2(0, 0));
	addChild(bkground);



	return true;
}

