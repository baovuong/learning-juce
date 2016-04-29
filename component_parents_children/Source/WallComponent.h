/*
  ==============================================================================

    WallComponent.h
    Created: 19 Feb 2016 9:45:18am
    Author:  bvuong

  ==============================================================================
*/

#ifndef WALLCOMPONENT_H_INCLUDED
#define WALLCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class WallComponent    : public Component
{
public:
    WallComponent();
    ~WallComponent();

    void paint (Graphics&);
    void resized();

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WallComponent)
};


#endif  // WALLCOMPONENT_H_INCLUDED
