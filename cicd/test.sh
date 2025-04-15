#!/bin/bash

FIB_BIN="../usr/bin/fibonacci"

if ! $FIB_BIN 10 | grep -q "34"; then
  echo "Test 1 Failed: Expected 34 for n=10"
  exit 1
fi

if $FIB_BIN "abc" 2>/dev/null; then
  echo "Test 2 Failed: Expected error for non-integer input"
  exit 1
fi

echo "All tests passed!"
exit 0
