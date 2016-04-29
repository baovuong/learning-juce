/*
  ==============================================================================

    SceneComponent.cpp
    Created: 19 Feb 2016 12:24:23am
    Author:  bvuong

  ==============================================================================
*/

#include "SceneComponent.h"

SceneComponent::SceneComponent ()
{
    addAndMakeVisible (floor);
    addAndMakeVisible (house);
}

SceneComponent::~SceneComponent ()
{
}

void SceneComponent::paint(Graphics& g)
{
    g.fillAll (Colours::lightblue);
}

void SceneComponent::resized ()
{
    floor.setBounds (10, 297, 500, 5);
    house.setBounds (300, 70, 200, 220);
}