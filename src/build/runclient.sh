#!/bin/bash

DATA_DIR=/home/serserar/projects/cpp/undeadhunter/src/../data
BIN_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

pushd ${DATA_DIR} >/dev/null
${BIN_DIR}/undeadhunter $@
popd >/dev/null

