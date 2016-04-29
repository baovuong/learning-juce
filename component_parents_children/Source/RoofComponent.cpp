/*
  ==============================================================================

    RoofComponent.cpp
    Created: 19 Feb 2016 9:54:28am
    Author:  bvuong

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "RoofComponent.h"

//==============================================================================
RoofComponent::RoofComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

RoofComponent::~RoofComponent()
{
}

void RoofComponent::paint (Graphics& g)
{
    g.setColour (Colours::red);
    Path roof;
    roof.addTriangle (0, getHeight(), getWidth(), getHeight(), getWidth() / 2, 0);
    g.fillPath (roof);
}

void RoofComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
