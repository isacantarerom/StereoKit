#pragma once

#include "../stereokit.h"

namespace sk {

struct mesh_collision_t {
	vec3*    pts;
	plane_t* planes;
};

struct bone_weight_t {
	uint16_t bone_id[4];
	uint8_t  weight [4];
};

const mesh_collision_t* mesh_get_collision_data(mesh_t mesh);
void                    mesh_calculate_normals (      vert_t *verts, int32_t vert_count, const vind_t *inds, int32_t ind_count);
bounds_t                mesh_calculate_bounds  (const vert_t *verts, int32_t vert_count);
void                    mesh_set_skin_inv      (mesh_t mesh, const bone_weight_t* bone_weights, uint32_t bone_weight_count, const matrix* bone_resting_transforms_inverted, int32_t bone_count);

} // namespace sk