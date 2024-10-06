#!/usr/bin/env bash

source_files=(add func_overloading hello hello2 namespaces one_true_number references strings)

for source_file in ${source_files[@]}; do
    clang++ -std=c++11 -stdlib=libc++ -o $source_file $source_file.cpp
done

if [ ! -d "build" ]; then
    mkdir build
fi

for source_file in ${source_files[@]}; do
    mv $source_file build/
done
