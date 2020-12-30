# -*- mode: CMake; tab-width: 2; indent-tabs-mode: nil; -*-
cmake_minimum_required(VERSION 3.5)
project(UndeadHunter)

# Build options.
option(BUILD_CLIENT "Build the game client" ON)
option(BUILD_SERVER "Build the game server" ON)
option(BUILD_TESSFONT "Build tessfont tool" ON)

# Generate compile commands (compile_commands.json) for clang tooling etc.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(ZLIB REQUIRED)
find_package(Freetype REQUIRED)

if(BUILD_CLIENT)
  # Add OpenGL.
  find_package(OpenGL REQUIRED)
  #find_package(SDL2 REQUIRED)

  # Platform specific libraries.
  if(UNIX AND NOT APPLE)
    set(PLATFORM_LIBRARIES rt)
  endif()
endif()

# Add third party libraries (e.g. built from source).
add_subdirectory(third_party)

# Additional compiler flags.
if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  # Silence warnings from Clang.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-missing-exception-spec")
endif()

if(BUILD_CLIENT)
  # Client executable.
  set(CLIENT_SOURCES
      shared/crypto.cpp
      shared/geom.cpp
      shared/glemu.cpp
      shared/stream.cpp
      shared/tools.cpp
      shared/zip.cpp
      engine/aa.cpp
      engine/bih.cpp
      engine/blend.cpp
      engine/client.cpp
      engine/command.cpp
      engine/console.cpp
      engine/dynlight.cpp
      engine/grass.cpp
      engine/light.cpp
      engine/main.cpp
      engine/material.cpp
      engine/menus.cpp
      engine/movie.cpp
      engine/normal.cpp
      engine/octa.cpp
      engine/octaedit.cpp
      engine/octarender.cpp
      engine/physics.cpp
      engine/pvs.cpp
      engine/rendergl.cpp
      engine/renderlights.cpp
      engine/rendermodel.cpp
      engine/renderparticles.cpp
      engine/rendersky.cpp
      engine/rendertext.cpp
      engine/renderva.cpp
      engine/server.cpp
      engine/serverbrowser.cpp
      engine/shader.cpp
      engine/sound.cpp
      engine/stain.cpp
      engine/texture.cpp
      engine/ui.cpp
      engine/water.cpp
      engine/world.cpp
      engine/worldio.cpp
      uhgame/ai.cpp
      uhgame/client.cpp
      uhgame/entities.cpp
      uhgame/game.cpp
      uhgame/render.cpp
      uhgame/scoreboard.cpp
      uhgame/server.cpp
      uhgame/waypoint.cpp
      uhgame/weapon.cpp
      uhgame/gameclass.cpp
    )
  set(CLIENT_INCLUDES
      ${CMAKE_CURRENT_SOURCE_DIR}
      
      )
  set(CLIENT_LIBRARIES
      enet
      sdl2
      ${OPENGL_LIBRARIES}
      ${ZLIB_LIBRARIES}
      ${PLATFORM_LIBRARIES}
      )
  include_directories(${CLIENT_INCLUDES})
  add_executable(undeadhunter ${CLIENT_SOURCES})
  target_include_directories(undeadhunter PRIVATE ${CLIENT_INCLUDES})
  target_link_libraries(undeadhunter ${CLIENT_LIBRARIES})

  # UndeadHunter client launcher.
  if(UNIX)
    configure_file("scripts/runclient.sh.in" "${CMAKE_CURRENT_BINARY_DIR}/runclient.sh" @ONLY)
  endif()
endif()

if(BUILD_SERVER)
  # Server executable.
  set(SERVER_SOURCES
      shared/crypto.cpp
      shared/stream.cpp
      shared/tools.cpp
      engine/command.cpp
      engine/server.cpp
      engine/worldio.cpp
      uhgame/entities.cpp
      uhgame/gameclass.cpp
      uhgame/server.cpp
      )
  set(SERVER_INCLUDES
      ${CMAKE_CURRENT_SOURCE_DIR}
      )
  set(SERVER_LIBRARIES
      enet
      ${ZLIB_LIBRARIES}
      )
  add_executable(uh_server ${SERVER_SOURCES})
  target_compile_definitions(uh_server PRIVATE -DSTANDALONE)
  target_include_directories(uh_server PRIVATE ${SERVER_INCLUDES})
  target_link_libraries(uh_server ${SERVER_LIBRARIES})

  # Master executable.
  set(MASTER_SOURCES
      shared/crypto.cpp
      shared/stream.cpp
      shared/tools.cpp
      engine/command.cpp
      engine/master.cpp
      )
  set(MASTER_INCLUDES
      ${CMAKE_CURRENT_SOURCE_DIR}
      )
  set(MASTER_LIBRARIES
      enet
      ${ZLIB_LIBRARIES}
      )
  add_executable(uh_master ${MASTER_SOURCES})
  target_compile_definitions(uh_master PRIVATE -DSTANDALONE)
  target_include_directories(uh_master PRIVATE ${MASTER_INCLUDES})
  target_link_libraries(uh_master ${MASTER_LIBRARIES})
endif()

if(TESSFONT_BUILD)
set(TESSFONT_SOURCES shared/tessfont.c)
add_executable(tessfont ${TESSFONT_SOURCES})
target_link_libraries(tessfont ${FREETYPE_LIBRARIES} ${ZLIB_LIBRARIES} -lm)
target_include_directories(tessfont PRIVATE ${FREETYPE_INCLUDE_DIRS})
endif()
