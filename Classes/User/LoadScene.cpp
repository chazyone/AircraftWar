#include "LoadScene.h"
#include "WelcomeScene.h"

bool LoadScene::init()
{
	Scene::init();

	auto size = Director::getInstance()->getWinSize();

	//variable init
	auto bkground = Sprite::create(RES_SINGLE_WHITE);
	bkground->setAnchorPoint(Vec2(0, 0));
	bkground->setColor(Color3B::BLACK);
	addChild(bkground);

	pStorySprite = Sprite::create("res/img/story/1.jpg");
	pStorySprite->setPosition(size / 2);
	bkground->addChild(pStorySprite);
	
	for (int i = 0; i < 8; i++) 
	{
		char name[256];
		sprintf(name, "res/img/story/%d.jpg", i + 1);
		auto photo = Director::getInstance()->getTextureCache()->addImage(name);
		mStorysFrames.pushBack(photo);
	}
	
	this->schedule(SEL_SCHEDULE(&LoadScene::LoopPlay), 0.5);
	
	return true;
}

void LoadScene::LoopPlay(float)
{
	static int i = 0;

	if (i >= 8)
	{
		i = 8;
		Director::getInstance()->replaceScene(WelcomeScene::create());
		return;
	} else {
		pStorySprite->setTexture(mStorysFrames.at(i++));
	}
}

void LoadScene::PlayStorys()
{
}




