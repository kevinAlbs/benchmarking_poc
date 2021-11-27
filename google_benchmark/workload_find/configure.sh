CMAKE=${CMAKE:-cmake}
if [ ! -d cmake-build ]; then
     mkdir cmake-build
fi

MONGO_C_DRIVER_PATH=${MONGO_C_DRIVER_PATH:-"/Users/kevin.albertson/code/c-bootstrap/install/mongo-c-driver-1.19.2/"}

echo "PATH IS"
echo $MONGO_C_DRIVER_PATH

pushd cmake-build
$CMAKE \
    -DCMAKE_PREFIX_PATH="../benchmark/build;$MONGO_C_DRIVER_PATH" \
    -DCMAKE_CXX_STANDARD=17 \
    ..
popd