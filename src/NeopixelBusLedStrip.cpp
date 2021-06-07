#include "NeopixelBusLedStrip.h"

NeopixelBusLedStrip::NeopixelBusLedStrip(NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod>* strip) {
    _strip = strip;
}

void NeopixelBusLedStrip::setPixelColour(unsigned int offset, uint32_t colour) {
    _strip -> SetPixelColor(offset, RgbColor((uint8_t) ((colour >> 16) & 0xFF), (uint8_t) ((colour >> 8) & 0xFF), (uint8_t) (colour & 0xFF)));
}

void NeopixelBusLedStrip::update() {
    _strip -> Show();
}

void NeopixelBusLedStrip::clear() {
    _strip -> ClearTo(RgbColor(0, 0, 0));
    update();
}