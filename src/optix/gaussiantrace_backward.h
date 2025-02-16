#pragma once

#include "auxiliary.h"
#include <optix.h>

namespace gtracer {

struct Gaussiantrace_backward {
	struct Params {
		const glm::vec3* ray_origins;
		const glm::vec3* ray_directions;
		const int* gs_idxs;
		const glm::vec3* means3D;
		const float* opacity;
		const glm::mat3x3* SinvR;
		const glm::vec3* shs;
		const glm::vec3* normal;
		const glm::vec3* pred_normal;
		const glm::vec3* colors;
		const float* depths;
		const float* alpha;
		const glm::vec3* rendered_normal;
		const glm::vec3* rendered_pred_normal;
		glm::vec3* grad_rays_d;
		glm::vec3* grad_means3D;
		float* grad_opacity;
		glm::mat3x3* grad_SinvR;
		glm::vec3* grad_shs;
		glm::vec3* grad_normal;
		glm::vec3* grad_pred_normal;
		const glm::vec3* grad_colors;
		const float* grad_depths;
		const float* grad_alpha;
		const glm::vec3* grad_rendered_normal;
		const glm::vec3* grad_rendered_pred_normal;
		float alpha_min;
		float transmittance_min;
		int deg;
		int max_coeffs;
		OptixTraversableHandle handle;
	};

	struct RayGenData {};
	struct MissData {};
	struct HitGroupData {};
};

}
