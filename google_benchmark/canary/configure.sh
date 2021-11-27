CMAKE=${CMAKE:-cmake}
if [ ! -d cmake-build ]; then
     mkdir cmake-build
fi
pushd cmake-build
$CMAKE \
    -DCMAKE_PREFIX_PATH=../benchmark/build \
    -DCMAKE_CXX_STANDARD=17 \
    ..
popd