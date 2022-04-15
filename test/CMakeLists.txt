project(editor_tests)

add_subdirectory(lib/googletest-release-1.11.0)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(run_editor_tests
        main.cpp)

target_link_libraries(run_editor_tests gtest gtest_main)
#target_link_libraries(run_editor_tests editor)

#add_executable(editor_tests main.cpp integration_tests.cpp)
#target_link_libraries(editor_tests TestLib Catch2::Catch2)

#IF(WIN32)
#    #add_executable(gametest main_windows.cpp)
#    target_link_libraries(${PROJECT_NAME} PUBLIC glfw3 glad)
#ELSEIF(APPLE)
#    # Dunno what to do
#ELSE()
#    #add_executable(gametest main_linux.cpp)
#    target_link_libraries(${PROJECT_NAME} PUBLIC glfw glad)
#ENDIF()
