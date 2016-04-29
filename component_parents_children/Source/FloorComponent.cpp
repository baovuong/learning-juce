/*
  ==============================================================================

    FloorComponent.cpp
    Created: 19 Feb 2016 9:47:04am
    Author:  bvuong

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "FloorComponent.h"

//==============================================================================
FloorComponent::FloorComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

FloorComponent::~FloorComponent()
{
}

void FloorComponent::paint (Graphics& g)
{
    g.setColour (Colours::green);
    g.drawLine (0, getHeight() / 2,  getWidth(), getHeight() / 2, 5);
}

void FloorComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
