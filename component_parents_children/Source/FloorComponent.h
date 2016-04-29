/*
  ==============================================================================

    FloorComponent.h
    Created: 19 Feb 2016 9:47:04am
    Author:  bvuong

  ==============================================================================
*/

#ifndef FLOORCOMPONENT_H_INCLUDED
#define FLOORCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class FloorComponent    : public Component
{
public:
    FloorComponent();
    ~FloorComponent();

    void paint (Graphics&);
    void resized();

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FloorComponent)
};


#endif  // FLOORCOMPONENT_H_INCLUDED
