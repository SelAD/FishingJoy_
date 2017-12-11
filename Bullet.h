#ifndef __FishingJoy__Bullet__
#define __FishingJoy__Bullet__
#include "cocos2d.h"
class Bullet : public cocos2d::CCNode
{
public:
    CREATE_FUNC(Bullet);
    bool init();
    
    //�ӵ�����
    void flyTo(cocos2d::CCPoint target,int cannonType);
    //ʹ�ӵ���������
    void end();
    
    cocos2d::CCPoint getCollisionPoint();

protected:
    cocos2d::CCSprite* _bulletSprite;
};

#endif /* defined(__FishingJoy__Bullet__) */
