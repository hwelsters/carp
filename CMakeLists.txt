cmake_minimum_required(VERSION 3.14)
project(carp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

add_executable(carp 
    src/main.cpp
)

target_include_directories(carp
	PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	PRIVATE
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
)

set(LIBS "")
add_compile_definitions(CARP_PLATFORM_SDL2)

if (NOT DEFINED CARP_SDL2_LIBS)
    include(FetchContent)
    set(FETCHCONTENT_QUIET FALSE)

    FetchContent_Declare(
        SDL2
        GIT_REPOSITORY https://github.com/libsdl-org/SDL
        GIT_TAG release-2.26.3 # grab latest stable release
        GIT_PROGRESS TRUE
    )
    FetchContent_MakeAvailable(SDL2)

    set(CARP_SDL2_LIBS SDL2main SDL2-static)
    set(CARP_SDL2_INCLUDE ${sdl2_SOURCE_DIRS}/include)
endif()

find_package(SDL2 REQUIRED)

set(LIBS ${LIBS} ${CARP_SDL2_LIBS})

target_include_directories(carp PRIVATE ${CARP_SDL2_INCLUDE})
target_link_libraries(carp PRIVATE ${LIBS})