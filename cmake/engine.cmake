function(engine)
    set(EXE Engine)

    file(GLOB SRCS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
    set(INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include")

    set(COMPILER_FLAGS -Wall -Wextra -g)
    set(COMMON_LIBS glfw vulkan dl pthread X11 Xxf86vm Xrandr Xi)

    add_executable(${EXE} ${SRCS})
    target_include_directories(${EXE} PRIVATE ${INCLUDE})
    target_compile_options(${EXE} PRIVATE ${COMPILER_FLAGS})
    target_link_libraries(${EXE} PRIVATE ${COMMON_LIBS})
endfunction()
