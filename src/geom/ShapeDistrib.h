//  Copyright (c) 2018 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#pragma once

#ifndef MUD_MODULES
#include <obj/Util/Dispatch.h>
#include <obj/Util/Global.h>
#include <math/Vec.h>
#endif
#include <geom/Generated/Forward.h>

#ifndef MUD_CPP_20
#include <vector>
#endif

namespace mud
{
	export_ class MUD_GEOM_EXPORT RandomShapePoint : public Dispatch<vec3>, public LazyGlobal<RandomShapePoint>
	{
	public:
		RandomShapePoint();
	};

	MUD_GEOM_EXPORT std::vector<vec3> distribute_shape(const Shape& shape, size_t count);
}
