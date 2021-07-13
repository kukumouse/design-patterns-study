cmake_minimum_required(VERSION 3.16)
project(Staduy)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp Brigde/Messager.h Brigde/MessagerImp.h Brigde/PcMessagerBase.cpp Brigde/PcMessagerBase.h Brigde/MobileMessagerBase.cpp Brigde/MobileMessagerBase.h Brigde/MessagerLite.cpp Brigde/MessagerLite.h Brigde/MessagerPerfect.cpp Brigde/MessagerPerfect.h Factory/Factory.h Factory/ISplitter.h Factory/BinarySplitter.cpp Factory/BinarySplitter.h Factory/TextSplitter.cpp Factory/TextSplitter.h Factory/TextFactory.cpp Factory/TextFactory.h Factory/BinaryFactory.cpp Factory/BinaryFactory.h)
add_executable(Staduy ${SOURCE_FILES})

include_directories(E:/boost_1_75_0)

target_link_libraries(Staduy ${Boost_LIBRARIES} ws2_32)