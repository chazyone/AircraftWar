#ifndef __LOADSCENE_H__
#define __LOADSCENE_H__

#include "cocos2d.h"
#include "globalConfig.h"

USING_NS_CC;
class LoadScene :public Scene
{
public:
	bool init();
public:
	void PlayStorys();
	void LoopPlay(float );
public:
	Sprite* pStorySprite;
	Vector<Texture2D*> mStorysFrames;
	CREATE_FUNC(LoadScene);

};


#endif
