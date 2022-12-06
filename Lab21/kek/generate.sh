#!/bin/bash

##
##  Создает файлы со случайными именами и заранее зашитыми расширениями.
##  После создания и файлов меняется время модификации.
##  Время выставляется на N дней в прошлое от текущего момента.
##  Файлы создаются в текущей директории.
##  Как использовать:
##      $ ls -la
##      4 -rwxr-xr-x 1 w495 w495 2345 фев 16 20:22 past-files.sh
##      $ ./past-files.sh 100000
##      $ ls -la
##         4 -rwxr-xr-x 1 w495 w495    2345 фев 16 20:22 past-files.sh
##      1084 -rw-rw-r-- 1 w495 w495 1109828 май  3  1740 test-Cuth.avi
##      1084 -rw-rw-r-- 1 w495 w495 1109869 май  3  1740 test-dsfp.swf
##      1084 -rw-rw-r-- 1 w495 w495 1109766 май  3  1740 test-ESVN.mkv
##      1084 -rw-rw-r-- 1 w495 w495 1109746 май  3  1740 test-GIpE.mov
##      1084 -rw-rw-r-- 1 w495 w495 1109816 май  3  1740 test-ksiR.mp4
##      1084 -rw-rw-r-- 1 w495 w495 1109844 май  3  1740 test-lRil.3gp
##      1084 -rw-rw-r-- 1 w495 w495 1109738 май  3  1740 test-PXPa.vob
##      1084 -rw-rw-r-- 1 w495 w495 1109873 май  3  1740 test-sYPo.wmv
##      1084 -rw-rw-r-- 1 w495 w495 1109682 май  3  1740 test-xDyz.flv
##

##
## Список суффиксов для новых файлов.
##
SUFFIXES="3gp avi flv mkv mov mp4 swf vob wmv";

##
## Количество дней.
##
N=$1;

##
## Регулярное выражение, для проверки,
## является ли веденное количество дней числом.
## http://ru.wikibooks.org/wiki/Регулярные_выражения
##
NUMBER_REGEXP='^[0-9]+$';

##
## Проверка что были введены дни,
## и они являются числом.
## Если нет, то устанавливаем значение по умолчанию.
##
if ! [[ $N =~ ${NUMBER_REGEXP} ]] ; then
    N="4";
fi;

DAYS_AGO=$(date "+%Y-%m-%d" -d "${N} day ago");

for SUFFIX in $SUFFIXES ; do
    ##
    ## Генерируем один случайный мегабайт
    ##
    RANDON_BYTES=$( cat /dev/urandom | dd bs=256kB count=17 2> /dev/null);
    ##
    ## На основании этого же мегабайта, мы соорудим случайное имя файла.
    ##
    RANDON_NAME=$(echo ${RANDON_BYTES} | tr -dc 'A-Za-z' | fold -w 4 | head -n 1 )

    if [ -z "${RANDON_NAME}" ]; then
        ##
        ## Если выделить случайную строку нам не удалось,
        ## то давайте подставлять наносекунды.
        ## `date +%N` как раз их и вернет.
        ##
        RANDON_NAME=$(date +%N);
    fi;
    FILENAME="${RANDON_NAME}.${SUFFIX}"

    ##
    ## Записываем случайные байты в файл со случайным именем.
    ##
    dd if=/dev/urandom of="${FILENAME}" bs=1024 count=$(( RANDOM + 1024 ))
    #echo "${RANDON_BYTES}" > "${FILENAME}"

    ##
    ## Выставляем файлу дату в прошлом.
    ##
    touch -d "${DAYS_AGO}" "${FILENAME}"
done;
