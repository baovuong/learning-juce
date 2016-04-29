/*
  ==============================================================================

    WallComponent.cpp
    Created: 19 Feb 2016 9:45:18am
    Author:  bvuong

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "WallComponent.h"

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (Graphics& g)
{
    g.fillCheckerBoard(getLocalBounds(), 30, 10, Colours::sandybrown, Colours::saddlebrown);
}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
