//#pragma once
//class FishingJoyData
//{
//public:
//	FishingJoyData(void);
//	~FishingJoyData(void);
//};

#ifndef __FishingJoy__FishingJoyData__
#define __FishingJoy__FishingJoyData__
#include "cocos2d.h"
typedef enum{
    k_Operate_Pause = 0,
    k_Operate_Resume=1,
}OperateFlag;
class FishingJoyData : public cocos2d::CCObject
{
public:
    static FishingJoyData* sharedFishingJoyData();
    CC_SYNTHESIZE(int , _gold, Gold);
    CC_SYNTHESIZE(bool, _isBeginner, IsBeginner);
    CC_SYNTHESIZE(float, _soundVolume, SoundVolume);
    CC_SYNTHESIZE(float, _musicVolume, MusicVolume);
    
    /**
     *	@brief	 内存不足时调用
     */
    void purge();
    
    /**
     *	@brief	 将数据从内存保存到外部文件中
     */
    void flush();
    
    /**
     *	@brief	 对Gold的操作
     *
     *	@param 	delta 	正负值均可
     */
    void alterGold(int delta);
    /**
     *	@brief	 重置游戏数据为默认数值
     */
    void reset();
protected:
    FishingJoyData();
    ~FishingJoyData();
    bool init();
};

#endif /* defined(__FishingJoy__FishingJoyData__) */
