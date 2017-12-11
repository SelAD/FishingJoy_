#ifndef __FishingJoy__GameScene4__
#define __FishingJoy__GameScene4__
#include "cocos2d.h"
#include "FishLayer.h"
#include "PanelLayer.h"
#include "MenuLayer.h"
//#include "BackgroundLayer.h"
#include "CannonLayer.h"
#include "TouchLayer.h"
#include "FishingJoyData.h"


class GameScene4 : public cocos2d::CCScene
{
public:
    CREATE_FUNC(GameScene4);
    bool init();
    ~GameScene4();

    //�˵�ҳ����صĺ���
    void pause();
    void resume();
    void sound();
    void music();
    void reset();
    void transToMainMenu();
	void scheduleTimeUp();
	void cannonAimAt(cocos2d::CCPoint target);
    void cannonShootTo(cocos2d::CCPoint target);
	void alterGold(int delta);
	void onEnterTransitionDidFinish();
protected:
    
   CannonLayer* _cannonLayer;
    FishLayer* _fishLayer;
    PanelLayer* _panelLayer;
    MenuLayer* _menuLayer;
	TouchLayer* _touchLayer;
	GoldCounterLayer* _goldcounterLayer;
    
//��ײ������
    void checkOutCollision();
    bool checkOutCollisionBetweenFishesAndBullet();
    void checkOutCollisionBetweenFishesAndFishingNet();
	void update(float delat);
    void fishWillBeCaught(Fish* fish);
    //��ͣ��ָ����������е����нڵ�
    void operateAllSchedulerAndActions(cocos2d::CCNode* node, OperateFlag flag);
	//void scheduleTimeUp();
  
};

#endif /* defined(__FishingJoy__GameScene__) */

