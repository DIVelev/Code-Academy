cmake_minimum_required(VERSION 3.5.1)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake_helpers/helpers_c.cmake)

project(counter_strike)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
     
#generate project binary
add_executable(
    ${PROJECT_NAME}
        ${INC_DIR}/Defines.h
        ${INC_DIR}/BattleField.h
        ${INC_DIR}/Player.h
        ${INC_DIR}/Pistol.h
        ${INC_DIR}/Ammo.h
        ${INC_DIR}/pistolAttack.h
        ${INC_DIR}/takeDamage.h
        
        ${SRC_DIR}/main.c
        ${SRC_DIR}/BattleField.c
        ${SRC_DIR}/Ammo.c
        ${SRC_DIR}/PlayerTurn.c
        ${SRC_DIR}/pistolAttack.c
        ${SRC_DIR}/takeDamage.c
)

target_include_directories(
    ${PROJECT_NAME} 
        PRIVATE 
            ${INC_DIR}
)  

set_target_c_standard(${PROJECT_NAME} 11)
enable_target_c_warnings(${PROJECT_NAME})
