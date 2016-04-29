/*
  ==============================================================================

    RoofComponent.h
    Created: 19 Feb 2016 9:54:28am
    Author:  bvuong

  ==============================================================================
*/

#ifndef ROOFCOMPONENT_H_INCLUDED
#define ROOFCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class RoofComponent    : public Component
{
public:
    RoofComponent();
    ~RoofComponent();

    void paint (Graphics&);
    void resized();

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RoofComponent)
};


#endif  // ROOFCOMPONENT_H_INCLUDED
