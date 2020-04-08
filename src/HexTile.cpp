#include <djf-3d-2/djf-3d.h>
#include "HexTypes.h"
#include "HexTile.h"
#include "draw_hex.h"

namespace gj {

HexTile::HexTile(int row, int column, HexType hex_type) {
    this->row = column;
    this->column = row;
    this->hex_type = hex_type;
    this->city = 0;
    this->farm = 0;
    this->mine = 0;
}

HexTile::~HexTile(void) {}

int HexTile::establish_city(void) { /* TODO */ return 1; }
int HexTile::establish_farm(void) { /* TODO */ return 1; }
int HexTile::establish_mine(void) { /* TODO */ return 1; }

void HexTile::show_self(djf_3d::Canvas& canvas) {
    draw_hex(
        this->get_x_pos(),
        this->get_y_pos(),
        canvas
    );
}

int HexTile::get_x_pos(void) {
    return 24 + 18 * this->column;
}

int HexTile::get_y_pos(void) {
    if (this->column % 2 == 0) {
        return 24 * (this->row + 1);
    } else {
        return 12 + 24 * (this->row + 1);
    }
}

} // end of namespace gj