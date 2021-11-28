MONGO_C_VERSION=${MONGO_C_VERSION:-1.19.2}
MONGO_C_DRIVER_PATH=${MONGO_C_DRIVER_PATH:-"/Users/kevin.albertson/code/c-bootstrap/install/mongo-c-driver-$MONGO_C_VERSION/lib"}

echo "Running MONGO_C_VERSION=$MONGO_C_VERSION"
export DYLD_LIBRARY_PATH="$DYLD_LIBRARY_PATH:$MONGO_C_DRIVER_PATH"
export LD_LIBRARY_PATH="$DYLD_LIBRARY_PATH:$MONGO_C_DRIVER_PATH"
./cmake-build/workload_find.out $@