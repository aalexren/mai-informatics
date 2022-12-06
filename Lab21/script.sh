#!/bin/bash

for param in $@
do
case $param in
--debug) echo "Debug mode is on..."; set -x; shift; break;; # debug on
-h) echo "./script.sh [--debug] <path to directory> <file size>"; exit;break;;
*) ;;
esac
done

if [ -n "$1" ]
then
path=$1
else
echo "Введите путь каталога, где надо заменить суффиксы файлов:"
read path
fi
while [ ! -d $path ]
do
echo "Директории $path не существует, попробуйте снова:"
read path
done

if [ -n "$2" ]
then
size=$2
else
echo "Введите размер, файлы с размером меньше которого будут переименованы:"
echo "(например: 1000c или 100k или 10M или 1G, по умолчанию поиск в байтах)"
read size
fi
while [[ ! "$size" =~ ^[1-9]{1}[0-9]*[ckMG]?$ ]]; do
    echo "Вы ввели не число, попробуйте снова:"
    read size
done

size_in="${size: -1}"
case $size_in in
    c|k|M|G) size=${size//[a-zA-Z]/};;
    *) size_in=c;;
esac

files=$(find $path -maxdepth 1 -size "-${size}${size_in}" -name "[^.]*" -type f)
for i in $files
do
    if [ ! -d $i ]
    then
        fl=$(basename $i); fl=${fl:0:1};
        name="${i%.*}.$fl"
        echo "$(du -sh $i) -> $name"
        mv -f $i $name
    fi
done

set +x # debug off
