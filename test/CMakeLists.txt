add_executable(test_bank_account test_bank_account.cpp)

target_link_libraries(test_bank_account PRIVATE bank_account)
target_link_libraries(test_bank_account 
	                   PUBLIC 
			   /usr/lib/libgtest.a
			   /usr/lib/libgtest_main.a
		   )

enable_testing()
include(CTest)
include(GoogleTest)

gtest_discover_tests(test_bank_account)
