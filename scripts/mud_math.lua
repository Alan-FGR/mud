-- mud library
-- mud math module

function mud_math(as_project)
    mud_module(as_project, "mud", "math", MUD_SRC_DIR, "math", { "obj", "srlz" })
    
    includedirs {
        path.join(MUD_3RDPARTY_DIR, "glm"),
        path.join(MUD_3RDPARTY_DIR, "json11"),
    }
end
