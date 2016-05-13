//
//  BRDirector.cpp
//  brisk2d-x
//
//  Created by john on 16/5/13.
//  Copyright © 2016年 john. All rights reserved.
//

#include "BRDirector.hpp"

NS_BR_BEGIN

BRDirector* BRDirector::s_director = nullptr;

BRDirector* BRDirector::getInstance()
{
    if (s_director == nullptr) {
        s_director = new BRDirector;
    }
    
    return s_director;
}

void BRDirector::purge()
{
    delete s_director;
    s_director = nullptr;
}

void BRDirector::runWithScene(BRScene* scene)
{
    initDirector();
}


NS_BR_END