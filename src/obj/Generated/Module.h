
#pragma once

#if !defined MUD_MODULES || defined MUD_OBJ_LIB
#include <obj/System/System.h>
#endif

#ifndef MUD_MODULES
#endif
        
#include <obj/Generated/Forward.h>
#include <obj/Generated/Types.h>

#include <obj/Any.h>
#include <obj/Array.h>
#include <obj/Cls.h>
#include <obj/Complex.h>
#include <obj/Config.h>
#include <obj/Cpp20.h>
#include <obj/EnumArray.h>
#include <obj/Generic.h>
#include <obj/Indexer.h>
#include <obj/Limits.h>
#include <obj/NonCopy.h>
#include <obj/Pragma.h>
#include <obj/Proto.h>
#include <obj/Ref.h>
#include <obj/Strung.h>
#include <obj/Type.h>
#include <obj/TypeOf.h>
#include <obj/Types.h>
#include <obj/TypeUtils.h>
#include <obj/Unique.h>
#include <obj/Var.h>
#include <obj/Vector.h>
#include <obj/Graph/Node.h>
#include <obj/Graph/Node.inl.h>
#include <obj/Iterable/Iterable.h>
#include <obj/Iterable/Reverse.h>
#include <obj/Iterable/Sequence.h>
#include <obj/Memory/ObjectPool.h>
#include <obj/Memory/Pool.h>
#include <obj/Memory/VecPool.h>
#include <obj/Reflect/Class.h>
#include <obj/Reflect/Convert.h>
#include <obj/Reflect/Enum.h>
#include <obj/Reflect/Injector.h>
#include <obj/Reflect/Member.h>
#include <obj/Reflect/Meta.h>
#include <obj/Reflect/MetaDecl.h>
#include <obj/Reflect/Method.h>
#include <obj/Reflect/Sequence.h>
#include <obj/String/String.h>
#include <obj/String/StringConvert.h>
#include <obj/System/File.h>
#include <obj/System/System.h>
#include <obj/Util/Dispatch.h>
#include <obj/Util/DispatchDecl.h>
#include <obj/Util/DoubleDispatch.h>
#include <obj/Util/Global.h>
#include <obj/Util/LocklessQueue.h>
#include <obj/Util/Timer.h>
#include <obj/Util/Updatable.h>

#include <obj/Generated/Convert.h>

namespace mud
{
	export_ class MUD_OBJ_EXPORT mudobj : public Module
	{
	private:
		mudobj();

	public:
		static mudobj& m() { static mudobj instance; return instance; }
	};
}

#ifdef MUD_OBJ_MODULE
extern "C"
MUD_OBJ_EXPORT Module& getModule();
#endif
