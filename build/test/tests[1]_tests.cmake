add_test([=[CombinationSensorTest.expect_fail]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=CombinationSensorTest.expect_fail]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[CombinationSensorTest.expect_fail]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[EncoderSensorTest.when_instantiated_expected_angleToBeZero]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=EncoderSensorTest.when_instantiated_expected_angleToBeZero]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[EncoderSensorTest.when_instantiated_expected_angleToBeZero]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[EncoderSensorTest.when_encoderReadingIncreasesByOneDeg_expect_OneDeg]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=EncoderSensorTest.when_encoderReadingIncreasesByOneDeg_expect_OneDeg]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[EncoderSensorTest.when_encoderReadingIncreasesByOneDeg_expect_OneDeg]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[EncoderSensorTest.when_initialEncoderTickIsZero_and_nextEncoderTickIsUint16Max_expect_negativeAngle]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=EncoderSensorTest.when_initialEncoderTickIsZero_and_nextEncoderTickIsUint16Max_expect_negativeAngle]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[EncoderSensorTest.when_initialEncoderTickIsZero_and_nextEncoderTickIsUint16Max_expect_negativeAngle]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[EncoderSensorTest.when_resetIsCalled_expect_angleToBeSetToTheGivenValue]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=EncoderSensorTest.when_resetIsCalled_expect_angleToBeSetToTheGivenValue]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[EncoderSensorTest.when_resetIsCalled_expect_angleToBeSetToTheGivenValue]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[PotentiometerSensorTest.when_sensorReads2p5V_expect_0deg]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=PotentiometerSensorTest.when_sensorReads2p5V_expect_0deg]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[PotentiometerSensorTest.when_sensorReads2p5V_expect_0deg]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[PotentiometerSensorTest.when_sensorReads5p0V_expect_90deg]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=PotentiometerSensorTest.when_sensorReads5p0V_expect_90deg]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[PotentiometerSensorTest.when_sensorReads5p0V_expect_90deg]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[PotentiometerSensorTest.when_sensorReads0p0V_expect_n90deg]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=PotentiometerSensorTest.when_sensorReads0p0V_expect_n90deg]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[PotentiometerSensorTest.when_sensorReads0p0V_expect_n90deg]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[PotentiometerSensorTest.when_sensorReadsNaN_expect_nullopt]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=PotentiometerSensorTest.when_sensorReadsNaN_expect_nullopt]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[PotentiometerSensorTest.when_sensorReadsNaN_expect_nullopt]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[PotentiometerSensorTest.when_sensorReadsInf_expect_nullopt]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=PotentiometerSensorTest.when_sensorReadsInf_expect_nullopt]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[PotentiometerSensorTest.when_sensorReadsInf_expect_nullopt]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[PotentiometerSensorTest.when_sensorReportsLargerThanMax_expect_max]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=PotentiometerSensorTest.when_sensorReportsLargerThanMax_expect_max]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[PotentiometerSensorTest.when_sensorReportsLargerThanMax_expect_max]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[PotentiometerSensorTest.when_sensorReportsSmallerThanMin_expect_min]=]  C:/TillerProject/build/test/tests.exe [==[--gtest_filter=PotentiometerSensorTest.when_sensorReportsSmallerThanMin_expect_min]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[PotentiometerSensorTest.when_sensorReportsSmallerThanMin_expect_min]=]  PROPERTIES WORKING_DIRECTORY C:/TillerProject/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  tests_TESTS CombinationSensorTest.expect_fail EncoderSensorTest.when_instantiated_expected_angleToBeZero EncoderSensorTest.when_encoderReadingIncreasesByOneDeg_expect_OneDeg EncoderSensorTest.when_initialEncoderTickIsZero_and_nextEncoderTickIsUint16Max_expect_negativeAngle EncoderSensorTest.when_resetIsCalled_expect_angleToBeSetToTheGivenValue PotentiometerSensorTest.when_sensorReads2p5V_expect_0deg PotentiometerSensorTest.when_sensorReads5p0V_expect_90deg PotentiometerSensorTest.when_sensorReads0p0V_expect_n90deg PotentiometerSensorTest.when_sensorReadsNaN_expect_nullopt PotentiometerSensorTest.when_sensorReadsInf_expect_nullopt PotentiometerSensorTest.when_sensorReportsLargerThanMax_expect_max PotentiometerSensorTest.when_sensorReportsSmallerThanMin_expect_min)
