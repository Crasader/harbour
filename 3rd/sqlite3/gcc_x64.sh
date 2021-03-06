#!/bin/bash

source ../../make_envars.sh

LIB_NAME=sqlite3
LIB_SRC=sqlite-autoconf-3300100
PREFIX=$ROOT_3RD/$LIB_NAME

echo "===  lib_src: $LIB_SRC ==== prefix: === $PREFIX ====================="

cd $LIB_SRC

[ -f config.log ] && rm config.log

CFLAGS="-I$ROOT_3RD/libxml2/include/libxml2 -I$ROOT_3RD/libxslt/include -I$ROOT_3RD/uuid/include -I$ROOT_3RD/openssl/include" 
CFLAGS+="-I$ROOT_3RD/zlib/include"

CPPFLAGS="$CFLAGS"

#autoconf -f
#autoreconf -i

#sh ./autogen.sh
rm -f aclocal.m4 
aclocal && libtoolize --force && autoreconf
automake --add-missing

sh ./configure \
  CFLAGS="$CFLAGS" \
  CPPFLAGS="$CPPFLAGS" \
  --prefix=$PREFIX

make clean install

# PATCH: don't change source repos
git checkout -f .

cd ..

