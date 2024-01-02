//
// Created by Charlito33 on 26/12/2023.
// Copyright (c) 2023 Charlito33. All rights reserved.
//

#ifndef SURFACE_HPP
#define SURFACE_HPP

#include <cstdint>

#include "LovyanGFX.hpp"

namespace graphics
{
    class Surface
    {
        friend void renderSurface(const Surface *surface);

    private:
        lgfx::LGFX_Sprite m_sprite;

    public:
        Surface(uint16_t width, uint16_t height);

        [[nodiscard]] uint16_t getWidth() const;
        [[nodiscard]] uint16_t getHeight() const;

        void clear();

        void setColor(uint8_t r, uint8_t g, uint8_t b);

        void fillRect(uint16_t x, uint16_t y, uint16_t w, uint16_t h);
        void drawRect(uint16_t x, uint16_t y, uint16_t w, uint16_t h);
    };
} // graphics

#endif //SURFACE_HPP
