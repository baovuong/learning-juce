/*
  ==============================================================================

    HouseComponent.h
    Created: 19 Feb 2016 9:49:13am
    Author:  bvuong

  ==============================================================================
*/

#ifndef HOUSECOMPONENT_H_INCLUDED
#define HOUSECOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

#include "WallComponent.h"
#include "RoofComponent.h"

//==============================================================================
/*
*/
class HouseComponent    : public Component
{
public:
    HouseComponent();
    ~HouseComponent();

    void paint (Graphics&);
    void resized();

private:
    WallComponent wall;
    RoofComponent roof;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HouseComponent)
};


#endif  // HOUSECOMPONENT_H_INCLUDED
