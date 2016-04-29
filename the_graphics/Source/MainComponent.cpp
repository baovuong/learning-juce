/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
    setSize (600, 400);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xff001F36));
    
    Font mainComponentFont ("Times New Roman", 20.0f, Font::italic);
    //g.setFont (Font (20.3455f));
    g.setFont (mainComponentFont);
    g.setColour (Colours::white);
    g.drawText ("Hello World!", 20, 40, 200, 40, true);
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
