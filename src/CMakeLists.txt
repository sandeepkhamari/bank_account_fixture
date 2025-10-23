add_library(bank_account STATIC bank_account.cpp)
target_include_directories(bank_account PUBLIC ${CMAKE_SOURCE_DIR}/include/)

add_executable(bankAc main.cpp)
target_link_libraries(bankAc PUBLIC bank_account)

