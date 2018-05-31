#!/bin/bash


rm -rf ./docs
hugo -c "./content_pub" -d "./docs"

mkdir -p docs/user9/img

#
#   Find all names beginning in cover_
#   Copy them to 2 different directories:
#       1.  ./docs/img
#       2.  ./docs/user9/docs/img
#
#   This works around some link-generation bugs in hugo
#
find content_pub -name cover_* -exec cp {} ./docs/img        \;
find content_pub -name cover_* -exec cp {} ./docs/user9/img  \;

cp ./docs/assets/img/README.txt ./docs/README.md

#
# ==========================================
#

rm -rf ./docs_priv
hugo -c "./content_priv" -d "./docs_priv"

mkdir -p docs_priv/user9/img

#
find content_priv -name cover_* -exec cp {} ./docs_priv/img            \;
find content_priv -name cover_* -exec cp {} ./docs_priv/user9/img \;

cp ./docs_priv/assets/img/README.txt ./docs_priv/README.md

