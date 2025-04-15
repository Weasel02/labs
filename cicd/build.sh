#!/bin/bash
cd src
make
mkdir -p ../usr/bin
cp fibonacci ../usr/bin/
