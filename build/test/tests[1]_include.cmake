if(EXISTS "C:/TillerProject/build/test/tests[1]_tests.cmake")
  include("C:/TillerProject/build/test/tests[1]_tests.cmake")
else()
  add_test(tests_NOT_BUILT tests_NOT_BUILT)
endif()
