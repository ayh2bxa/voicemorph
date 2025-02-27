/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include <cmath>

//==============================================================================
/**
*/
using namespace juce;
using namespace std;

class VoicemorphAudioProcessorEditor  : public juce::AudioProcessorEditor, public juce::Slider::Listener
{
public:
    VoicemorphAudioProcessorEditor (VoicemorphAudioProcessor&);
    ~VoicemorphAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    void sliderValueChanged(juce::Slider *slider) override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    VoicemorphAudioProcessor& audioProcessor;
    juce::Slider gainSlider;
    juce::Label gainLabel;
    juce::Slider pitchSlider;
    juce::Label pitchLabel;
    juce::Slider lpcSlider;
    juce::Label lpcLabel;
    juce::Slider exLenSlider;
    juce::Label exLenLabel;
    Slider inputGainSlider;
    Label inputGainLabel;
    Slider outputGainSlider;
    Label outputGainLabel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VoicemorphAudioProcessorEditor)
};
