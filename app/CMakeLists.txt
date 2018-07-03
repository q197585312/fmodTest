# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

find_library( # Sets the name of the path variable.
              log-lib
              log )

# add_library( fmod
#             SHARED
#             IMPORTED )
#set_target_properties( fmod
#                       PROPERTIES IMPORTED_LOCATION
#                        src/main/cpp/libfmod.so )
add_library( fmodL
            SHARED
            src/main/cpp/libfmodL.so )
#set_target_properties( fmodL
#                       PROPERTIES IMPORTED_LOCATION
#                      )
add_library( sound
            SHARED
             src/main/cpp/play_sound.cpp )

include_directories(src/main/cpp/inc)

target_link_libraries( # Specifies the target library.
                      sound

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )