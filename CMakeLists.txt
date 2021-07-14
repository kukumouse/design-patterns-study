cmake_minimum_required(VERSION 3.16)
project(Staduy)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp Brigde/Messager.h Brigde/MessagerImp.h Brigde/PcMessagerBase.cpp Brigde/PcMessagerBase.h Brigde/MobileMessagerBase.cpp Brigde/MobileMessagerBase.h Brigde/MessagerLite.cpp Brigde/MessagerLite.h Brigde/MessagerPerfect.cpp Brigde/MessagerPerfect.h Factory/Factory.h Factory/ISplitter.h Factory/BinarySplitter.cpp Factory/BinarySplitter.h Factory/TextSplitter.cpp Factory/TextSplitter.h Factory/TextFactory.cpp Factory/TextFactory.h Factory/BinaryFactory.cpp Factory/BinaryFactory.h AbstractFactory/IDBFactory.h AbstractFactory/IDBConnection.h AbstractFactory/IDBCommand.h AbstractFactory/IDBExcute.h AbstractFactory/SqlDBFactory.cpp AbstractFactory/SqlDBFactory.h AbstractFactory/SqlCommand.cpp AbstractFactory/SqlCommand.h AbstractFactory/SqlExcute.cpp AbstractFactory/SqlExcute.h AbstractFactory/SqlConnection.cpp AbstractFactory/SqlConnection.h AbstractFactory/MysqlConnection.cpp AbstractFactory/MysqlConnection.h AbstractFactory/MysqlCommand.cpp AbstractFactory/MysqlCommand.h AbstractFactory/MysqlExcute.cpp AbstractFactory/MysqlExcute.h AbstractFactory/MysqlDBFactory.cpp AbstractFactory/MysqlDBFactory.h)
add_executable(Staduy ${SOURCE_FILES})

include_directories(E:/boost_1_75_0)

target_link_libraries(Staduy ${Boost_LIBRARIES} ws2_32)