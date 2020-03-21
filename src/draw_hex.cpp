#include <djf-3d-2/djf-3d.h>
#include "draw_hex.h"

namespace gj {

void draw_hex(
    const int x,
    const int y,
    djf_3d::Canvas& canvas
) noexcept {
    canvas.draw_line(x, y, x+12, y);
    canvas.draw_line(x, y, x-6, y+12);
    canvas.draw_line(x+12, y, x+18, y+12);
    canvas.draw_line(x-6, y+12, x, y+24);
    canvas.draw_line(x, y+24, x+12, y+24);
    canvas.draw_line(x+12, y+24, x+18, y+12);
}

} // end of namespace gj