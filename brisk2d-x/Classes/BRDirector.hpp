//
//  BRDirector.hpp
//  brisk2d-x
//
//  Created by john on 16/5/13.
//  Copyright © 2016年 john. All rights reserved.
//

#ifndef BRDirector_hpp
#define BRDirector_hpp

#include <stdio.h>
#include "BRObject.hpp"

NS_BR_BEGIN

class BRScene;

class BRDirector : public BRObject {
    
    
public:
    static BRDirector* getInstance();
    static void purge();
    
    void runWithScene(BRScene* scene);
    
protected:
    void initDirector();
    
protected:
    static BRDirector* s_director;
};

NS_BR_END

#endif /* BRDirector_hpp */
