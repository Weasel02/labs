#!/bin/bash
# Тест на корректный ввод
if ! ./src/fibonacci 10 | grep -q "34"; then
  echo "Test 1 Failed: Expected 34 for n=10"
  exit 1
fi

# Тест на некорректный ввод
if ./src/fibonacci abc 2>/dev/null; then
  echo "Test 2 Failed: Expected error for non-integer input"
  exit 1
fi

echo "All tests passed!"
