//
//  GamePlayScene.h
//  GameFireworks
//
//  Created by NgocDu on 13/10/25.
//
//

#ifndef GameFireworks_GamePlayScene_h
#define GameFireworks_GamePlayScene_h
#include "cocos2d.h"
#include "TableGame.h"
#include "Square.h"
#define max 100
using namespace cocos2d;
class GamePlayScene : public CCLayer
{
public:
    // Method 'init' in cocos2d-x returns bool, instead of 'id' in cocos2d-iphone (an object pointer)
    virtual bool init();
    
    // there's no 'id' in cpp, so we recommend to return the class instance pointer
    static cocos2d::CCScene* scene();
    
    // preprocessor macro for "static create()" constructor ( node() deprecated )
    CREATE_FUNC(GamePlayScene);
    virtual void ccTouchesBegan(cocos2d::CCSet * touch,cocos2d::CCEvent* event);
	virtual void ccTouchesMoved(cocos2d::CCSet* touch,cocos2d::CCEvent* event);
	virtual void ccTouchesEnded(cocos2d::CCSet* touches,cocos2d::CCEvent* event);
    
    void addTableGame(int rows, int columns);
    void loadMatrix();
    void changeMatrix(Square *sq);
    void printMatrix();
    void backTracking(int i);
    void loadStartPointAndDestination();
    void InPa();
    void resetArray(int a[]);
    void checkTableGame();
private:
    CCSize  size;
    TableGame * tableGame;
    CCArray * _arraySquare;
    CCArray * _arrayRemove;
    CCPoint touchLocation;
    int arrarDestination[20];
    int arrayStart[20];
    int matran[max][max];
    int daxet[max];
    int pa[max];
    int chiphi;
    int c;//chi phí tạm thời
};
#endif
