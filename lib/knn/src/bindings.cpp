#include <torch/extension.h>
#include "knn.h"  // This should declare `void knn(...)`

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
    m.def("knn", &knn, "KNN brute force (CUDA or CPU)");
}