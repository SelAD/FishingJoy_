#ifndef __FishingJoy__FishLayer__
#define __FishingJoy__FishLayer__
#include "cocos2d.h"
#include "Fish.h"
class FishLayer : public cocos2d::CCLayer
{
public:
    CREATE_FUNC(FishLayer);
    bool init();
    CC_SYNTHESIZE_READONLY(cocos2d::CCArray*, _fishes, Fishes);
    ~FishLayer();
	
protected:
    void addFish(float dt);
	void resetFish(Fish* fish);
	//void updateFishMovement();
	//void setFishRoute(Fish* fish,ccTime dt);
	//void linerRoute(Fish* fish,CCPoint from,CCPoint to,ccTime dt);
	//void bezierRoute(Fish* fish,CCPoint from,CCPoint to,ccTime dt);
	//void moveActionEnd();	
};

#endif