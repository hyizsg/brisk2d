//
//  BRObject.hpp
//  brisk2d-x
//
//  Created by john on 16/5/13.
//  Copyright © 2016年 john. All rights reserved.
//

#ifndef BRObject_hpp
#define BRObject_hpp

#include <stdio.h>
#include <string>
#include <vector>

#define NS_BR_BEGIN namespace brisk {
#define NS_BR_END   }

#define BR_PROPERTY(type, name)     public : type name;

NS_BR_BEGIN

class BRObject {
    
    
public:
    BRObject();
    virtual ~BRObject();
};


NS_BR_END

#endif /* BRObject_hpp */
