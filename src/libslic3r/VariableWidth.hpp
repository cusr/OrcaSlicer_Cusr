#ifndef slic3r_VariableWidth_hpp_
#define slic3r_VariableWidth_hpp_

#include "Polygon.hpp"
#include "ExtrusionEntity.hpp"
#include "Flow.hpp"

namespace Slic3r {
// BEGIN MODS SU: cherrypick BBS(0efa2db823)
    ExtrusionMultiPath thick_polyline_to_multi_path(const ThickPolyline& thick_polyline, ExtrusionRole role, const Flow& flow, const float tolerance, const float merge_tolerance, int overhang);
// END MODS SU
    void variable_width(const ThickPolylines& polylines, ExtrusionRole role, const Flow& flow, std::vector<ExtrusionEntity*>& out);
}

#endif
