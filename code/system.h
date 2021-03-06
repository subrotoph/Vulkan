//  Copyright © 2020 Subph. All rights reserved.
//

#pragma once
#include "common.h"

#include "window/window.h"

class System {
    
public:
    
    void cleanup();
    static System& instance() {
        static System instance; // Guaranteed to be destroyed. Instantiated on first use.
        return instance;
    }
    
private:
    System();
    ~System();
    
    
    // C++ 03
    // ========
    // Don't forget to declare these two. You want to make sure they
    // are unacceptable otherwise you may accidentally get copies of
    // your singleton appearing.
    System(System const&);         // Don't Implement
    void operator=(System const&); // Don't implement
    

};

