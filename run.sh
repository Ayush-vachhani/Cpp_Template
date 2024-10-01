#!/bin/bash

# Set variables for the build directory and the executable name
BUILD_DIR="cmake-build-debug"

# Step 1: Check if the build directory exists
if [ ! -d "$BUILD_DIR" ]; then
  echo "Creating build directory..."
  mkdir -p "$BUILD_DIR"
fi

cd "$BUILD_DIR" || exit 1

echo "Running CMake..."
cmake .. || { echo "CMake configuration failed."; exit 1; }


echo "Building the project..."
cmake --build . --target CPP || { echo "Make failed. Check the output above for errors."; exit 1; }

./CPP

