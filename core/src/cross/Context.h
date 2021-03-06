/*
 * THE NEW CHRONOTEXT TOOLKIT: https://github.com/arielm/new-chronotext-toolkit
 * COPYRIGHT (C) 2012-2015, ARIEL MALKA ALL RIGHTS RESERVED.
 *
 * THE FOLLOWING SOURCE-CODE IS DISTRIBUTED UNDER THE SIMPLIFIED BSD LICENSE:
 * https://github.com/arielm/new-chronotext-toolkit/blob/master/LICENSE.md
 */

#pragma once

#include "cross/CrossDelegate.h"
#include "system/SystemManager.h"

namespace chr
{
    CrossSketch* createSketch();
    
    // ---

    extern CrossDelegate& delegate();
    extern SystemManager& systemManager();

    template <class T>
    inline T& checkedReference(T *instance)
    {
        assert(instance);
        return *instance;
    }
}
