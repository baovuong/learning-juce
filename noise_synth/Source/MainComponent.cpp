/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent   : public AudioAppComponent, public Slider::Listener
{
public:
    //==============================================================================
    MainContentComponent()
    {
        levelSlider.setRange(0.0, 0.25);
        levelSlider.setTextBoxStyle(Slider::TextBoxRight, false, 100, 20);
        levelSlider.addListener(this);
        levelLabel.setText("Noise Level", dontSendNotification);

        addAndMakeVisible(levelSlider);
        addAndMakeVisible(levelLabel);
        setSize (600, 100);

        // specify the number of input and output channels that we want to open
        setAudioChannels (0, 2);
    }

    ~MainContentComponent()
    {
        shutdownAudio();
    }

    void sliderValueChanged(Slider* slider) override
    {
        if (slider == &levelSlider)
        {
            level = slider->getValue();
            levelScale = level * 2.0f;
        }
    }

    //==============================================================================
    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override
    {
        // This function will be called when the audio device is started, or when
        // its settings (i.e. sample rate, block size, etc) are changed.

        // You can use this function to initialise any resources you might need,
        // but be careful - it will be called on the audio thread, not the GUI thread.

        // For more details, see the help for AudioProcessor::prepareToPlay()
        String message;
        message << "preparing to play audio..." << newLine;
        message << " samplesPerBlockExpected = " << samplesPerBlockExpected << newLine;
        message << " sampleRate" << sampleRate << newLine;
        Logger::getCurrentLogger()->writeToLog(message);
    }

    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) override
    {
        // Your audio-processing code goes here!

        // For more details, see the help for AudioProcessor::getNextAudioBlock()

        // Right now we are not producing any data, in which case we need to clear the buffer
        // (to prevent the output of random noise)
        //bufferToFill.clearActiveBufferRegion();
        //const float level = levelSlider.getValue();
        //const float levelScale  = level * 2.0f;
        for (int channel = 0; channel < bufferToFill.buffer->getNumChannels(); ++channel)
        {
            float* const buffer = bufferToFill.buffer->getWritePointer(channel, bufferToFill.startSample);

            for (int sample = 0; sample < bufferToFill.numSamples; ++sample)
            {
                buffer[sample] = random.nextFloat() * levelScale - level;
            }
        }
    }

    void releaseResources() override
    {
        // This will be called when the audio device stops, or when it is being
        // restarted due to a setting change.

        // For more details, see the help for AudioProcessor::releaseResources()
        Logger::getCurrentLogger()->writeToLog("Releasing audio resources");
    }

    //==============================================================================
    void paint (Graphics& g) override
    {
        // (Our component is opaque, so we must completely fill the background with a solid colour)
        //g.fillAll (Colours::black);


        // You can add your drawing code here!
    }

    void resized() override
    {
        // This is called when the MainContentComponent is resized.
        // If you add any child components, this is where you should
        // update their positions.
        levelLabel.setBounds(10, 10, 90, 20);
        levelSlider.setBounds(100, 10, getWidth() - 110, 20);
    }


private:
    //==============================================================================

    // Your private member variables go here...
    Random random;
    float level;
    float levelScale;

    // gui stuff
    Slider levelSlider;
    Label levelLabel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


// (This function is called by the app startup code to create our main component)
Component* createMainContentComponent()     { return new MainContentComponent(); }


#endif  // MAINCOMPONENT_H_INCLUDED
