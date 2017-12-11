//
//  ProgressBar.h
//  FishingJoy
//
//  Created by xsy
//
//

#ifndef __FishingJoy__ProgressBar__
#define __FishingJoy__ProgressBar__
#include "cocos2d.h"
#include "ProgressProtocol.h"
class ProgressBar : public cocos2d::CCProgressTimer
{
public:
    /**
     *	@brief
     *
     *	@param 	target 	ProgressDelegate
     *	@param 	sprite 	ProgressBarSprite
     *
     *	@return
     */
    static ProgressBar* create(ProgressDelegate* target, cocos2d::CCSprite *sprite);
    bool init(ProgressDelegate* target, cocos2d::CCSprite *sprite);
    /**
     *	@brief	    ����һ���ٷֱ�
     *
     *	@param 	delta 	����ֵ
     */
    void progressBy(float delta);
    /**
     *	@brief	     ���ӵ�һ���ٷֱ�
     *
     *	@param 	destination 	Ŀ��ֵ
     */
    void progressTo(float destination);
    /**
     *	@brief	     ���ý�����ǰ��������
     *
     *	@param 	Speed 	����
     *
     *	@return
     */
    CC_SYNTHESIZE(float, _speed, Speed);
    CC_SYNTHESIZE(ProgressDelegate*, _target, Target);
    
    /**
     *	@brief	    Ϊ����������ǰ���򱳾�
     *
     *	@param 	Foreground 	ǰ��������������ĵ�ǰ�İٷֱ�ֵ
     *	@param 	Background 	����
     *
     *	@return
     */
    CC_PROPERTY(cocos2d::CCNode*, _background, Background);
    CC_PROPERTY(cocos2d::CCNode*, _foreground, Foreground);
protected:
    void updatePercentage();
    void loadingFinished();
};

#endif /* defined(__FishingJoy__ProgressBar__) */