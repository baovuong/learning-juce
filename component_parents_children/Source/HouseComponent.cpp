/*
  ==============================================================================

    HouseComponent.cpp
    Created: 19 Feb 2016 9:49:13am
    Author:  bvuong

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "HouseComponent.h"

//==============================================================================
HouseComponent::HouseComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible (wall);
    addAndMakeVisible (roof);
}

HouseComponent::~HouseComponent()
{
}

void HouseComponent::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (Colours::white);   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::lightblue);
    g.setFont (14.0f);
    g.drawText ("HouseComponent", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void HouseComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    const int separation = jlimit (2, 10, getHeight() / 20);
    
    roof.setBounds (0, 0, getWidth(), getHeight() * 0.2 - separation / 2);
    wall.setBounds (0, getHeight() * 0.20 + separation / 2, getWidth(), getHeight() * 0.8 - separation);
}
