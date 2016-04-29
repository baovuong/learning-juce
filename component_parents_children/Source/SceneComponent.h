/*
  ==============================================================================

    SceneComponent.h
    Created: 19 Feb 2016 12:24:23am
    Author:  bvuong

  ==============================================================================
*/

#ifndef SCENECOMPONENT_H_INCLUDED
#define SCENECOMPONENT_H_INCLUDED

#include "FloorComponent.h"
#include "HouseComponent.h"

class SceneComponent : public Component
{
    public:
        SceneComponent();
        ~SceneComponent();
        void paint(Graphics&);
        void resized();
    private:
        FloorComponent floor;
        HouseComponent house;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(SceneComponent)
};



#endif  // SCENECOMPONENT_H_INCLUDED
