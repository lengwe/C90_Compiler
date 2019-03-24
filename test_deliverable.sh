#!/bin/bash

MIPS_GCC="mips-linux-gnu-gcc"
QEMU="qemu-mips"
COMPILER="bin/c_compiler"
DRIVER_TESTS="test_deliverable/test_cases/"
ASSEMBLY="test_deliverable/assembly_file/"
OBJECT="test_deliverable/object_file/"

rm ${OBJECT}*.o
rm ${ASSEMBLY}*.s

echo ""
echo "================================================"
echo "Testing c_compiler:"
echo ""

PASSED=0
TOTAL=0

mkdir -p test_deliverable/assembly_file
mkdir -p test_deliverable/object_file

for i in ${DRIVER_TESTS}*_driver.c ; do
  let "TOTAL++"
  NAME=$(basename $i _driver.c)
  TEST=${DRIVER_TESTS}$NAME
  ASSEMBLY_FILE=${ASSEMBLY}$NAME
  OBJECT_FILE=${OBJECT}$NAME

  # run the compiler on the test program
  ${COMPILER} -S ${NAME}.c -o ${NAME}.s
  #${MIPS_GCC} -S ${TEST}.c -o ${ASSEMBLY_FILE}.s

  # use GCC to assemble the generated assembly program
  ${MIPS_GCC} -mfp32 -o ${OBJECT_FILE}.o -c ${ASSEMBLY_FILE}.s


  #use GCC to link the generated object file with the driver program
  ${MIPS_GCC} -mfp32 -static -o ${TEST} ${OBJECT_FILE}.o ${TEST}_driver.c

  #simulate the executable on MIPS
  ${QEMU} ${TEST}
  RESULT=$?
  if [[ ${RESULT} -ne 0 ]]; then
    echo "Testcase ${NAME} FAILED returned ${RESULT}, but expected 0."
    printf "\n"
    continue
  fi

  echo "${NAME}.c PASSED"
  let "PASSED++"

done

# rm ${DRIVER_TESTS}*.o
# rm ${DRIVER_TESTS}*.s


echo "================================================"
echo "####PASSED ${PASSED} out of ${TOTAL}####"
echo ""
