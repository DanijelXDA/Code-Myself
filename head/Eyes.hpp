#ifndef EYES_HPP_INCLUDED
#define EYES_HPP_INCLUDED

#include "Brain.hpp" // Need this lib to transfer motions and images for processing

class Eyes {
    private:
        bool EyeLidOpened;
        float viewDistance;
        int image[256]; // 256 bits image
    public:
        bool checkEyeLid(bool); // check is eye lid opened
        void changeEyeLidState(bool); // Change eye lid state
        unsigned connectionToBrainEstabilshed(bool); // Check if connection is available
        bool processImage(int *, int); // Process image to brain

};

bool Eyes::checkEyeLid(bool EyeLidOpened) {
    if(EyeLidOpened)
        return true;
    else
        return false;
}

void Eyes::changeEyeLidState(bool EyeLidOpened) {
    EyeLidOpened = !(EyeLidOpened); // Reverse state of eye lid
    // Same like
    /*
    if(EyeLidOpened == true)
        EyeLidOpened = false;
    else
        EyeLidOpened = true;
    */
}

unsigned Eyes::connectionToBrainEstabilshed(bool conn) {
    if(conn) {
        bool success = processImage(image, 256); // Processing image
        if(success) {
            return 1; // Connection successful
        }
        else
            return 0; // Connection failed
    }

}

bool Eyes::processImage(int *pointer, int imgSize) {
    // body

}











#endif // EYES_HPP_INCLUDED
