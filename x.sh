#!/bin/bash


rm -rf ./docs
hugo -c "./content_pub" -d "./docs"
mv ./docs/img/README.txt ./docs/README.md

#
# ==========================================
#

rm -rf ./docs_priv
hugo -c "./content_priv" -d "./docs_priv"
mv ./docs_priv/img/README.txt ./docs_priv/README.md

