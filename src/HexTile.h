#include <djf-3d-2/djf-3d.h>
#include "HexTypes.h"

#ifndef HEXTILE_H
#define HEXTILE_H

namespace gj {

class HexTile {

private:
    int column;
    int row;
    HexType hex_type;
    int city;
    int farm;
    int mine;

public:
    HexTile(int row, int column, HexType hex_type);
    ~HexTile(void);

    /**
     * The following methods are for establishing various
     * productive objects on a hex. They return 0 on success
     * and 1 on failure. The HexTile is responsible for
     * freeing these at the end of its life.
     */
    int establish_city(void);
    int establish_farm(void);
    int establish_mine(void);

    void show_self(djf_3d::Canvas& canvas);

    int get_x_pos(void);
    int get_y_pos(void);

};

} // end of namespace gj

#endif // HEXTILE_H