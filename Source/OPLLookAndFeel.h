/*
  ==============================================================================

    OPLLookAndFeel.h
    Created: 10 Oct 2016 9:38:20pm
    Author:  bruce

  ==============================================================================
*/

#ifndef OPLLOOKANDFEEL_H_INCLUDED
#define OPLLOOKANDFEEL_H_INCLUDED

#include "JuceHeader.h"

class OPLLookAndFeel : public LookAndFeel_V3
{
private:
	Image toggleOff;
	Image toggleOn;
	Rectangle<float> toggleRect;

public:
	OPLLookAndFeel();

	void drawTickBox(Graphics &g,
		Component &c,
		float 	x,
		float 	y,
		float 	w,
		float 	h,
		bool 	ticked,
		bool 	isEnabled,
		bool 	isMouseOverButton,
		bool 	isButtonDown
	);

};




#endif  // OPLLOOKANDFEEL_H_INCLUDED
