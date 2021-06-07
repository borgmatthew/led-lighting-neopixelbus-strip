#ifndef LIBRARIES_NEOPIXELBUSLEDSTRIP_H
#define LIBRARIES_NEOPIXELBUSLEDSTRIP_H

#include <LedStrip.h>
#include <NeoPixelBus.h>

class NeopixelBusLedStrip : public LedStrip {
public:
    NeopixelBusLedStrip(NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod>* strip);
    void setPixelColour(unsigned int offset, uint32_t colour);
    void update();
    void clear();

private:
    NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod>* _strip;
};

#endif //LIBRARIES_NEOPIXELBUSLEDSTRIP_H
