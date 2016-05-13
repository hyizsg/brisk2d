//
//  BRView.hpp
//  brisk2d-x
//
//  Created by john on 16/5/13.
//  Copyright © 2016年 john. All rights reserved.
//

#ifndef BRView_hpp
#define BRView_hpp

#include <stdio.h>
#include "BRObject.hpp"

NS_BR_BEGIN

struct Thickness
{
    BR_PROPERTY(float, left)
    BR_PROPERTY(float, top)
    BR_PROPERTY(float, right)
    BR_PROPERTY(float, bottom)
};

enum class HorizontalAlignment
{
    Left = 0,
    Center = 1,
    Right = 2,
    Stretch = 3,
};

enum class VerticalAlignment
{
    Top = 0,
    Center = 1,
    Bottom = 2,
    Stretch = 3,
};

class BRView : public BRObject
{
public:
    BR_PROPERTY(float, actualHeight)
    BR_PROPERTY(float, actualWidth)
    BR_PROPERTY(float, height)
    BR_PROPERTY(float, Width)
    BR_PROPERTY(float, maxHeight)
    BR_PROPERTY(float, maxWidth)
    BR_PROPERTY(float, minHeight)
    BR_PROPERTY(float, minWidth)
    BR_PROPERTY(std::string, name)
    BR_PROPERTY(BRView*, parent)
    BR_PROPERTY(std::vector<BRView*>, children)
    BR_PROPERTY(int, tag)
    BR_PROPERTY(bool, isEnabled)
    BR_PROPERTY(bool, isVisible)
    BR_PROPERTY(float, opacity)
    BR_PROPERTY(Thickness, margin)
    BR_PROPERTY(Thickness, padding)
    BR_PROPERTY(HorizontalAlignment, horizontalAlignment)
    BR_PROPERTY(VerticalAlignment, verticalAlignment)
};

NS_BR_END

#endif /* BRView_hpp */
