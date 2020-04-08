/*          main.cpp file of guojia
    Copyright (C) 2019  Dante Falzone

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <string>
#include <vector>
#include <djf-3d-2/djf-3d.h>
#include "draw_hex.h"
#include "HexTypes.h"
#include "HexTile.h"

int main(void) noexcept {
    std::string title("Guojia - by Dante Falzone");

    djf_3d::Canvas canvas(title, 800, 600, 0);

    djf_3d::TextRenderer text_rend;

    canvas.set_draw_color(0, 255, 100, 0);

    text_rend.render_string(canvas, 10, 10,
        "Welcome to the game Guojia, by Dante Falzone!"
    );

    std::vector<gj::HexTile> hex_tiles;
    for (int y = 0; y < 20; y++) {
        for (int x = 0; x < 30; x++) {
            hex_tiles.push_back(
                gj::HexTile(x, y, gj::HexType::PLAINS)
            );
        }
    }

    for (auto& hex_tile : hex_tiles) {
        hex_tile.show_self(canvas);
    }

    canvas.refresh();

    while (!canvas.exit());

    return 0;
}