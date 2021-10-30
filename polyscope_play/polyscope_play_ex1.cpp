#include <iostream>
#include "polyscope/polyscope.h"
#include "polyscope/point_cloud.h"
// #include "polyscope/surface_mesh.h"

int main(int argc, char* argv[]) {
std::cout << "polyscope::state::initialized = " << polyscope::state::initialized << std::endl;

// Initialize polyscope
polyscope::init();

/*
const int nPoints = 20;
using Point = std::array<double, 3>;
std::vector<Point> points(nPoints);
*/

std::vector<glm::vec3> points;

// generate points
for (size_t i = 0; i < 3000; i++) {
  points.push_back(
      glm::vec3{polyscope::randomUnit() - .5, 
                polyscope::randomUnit() - .5, 
                polyscope::randomUnit() - .5});
}

// `points` is a Nx3 array-like container of points
polyscope::registerPointCloud("my points", points);

/*
// Register a surface mesh structure
// `meshVerts` is a Vx3 array-like container of vertex positions
// `meshFaces` is a Fx3 array-like container of face indices  
polyscope::registerSurfaceMesh("my mesh", meshVerts, meshFaces);

// Add a scalar and a vector function defined on the mesh
// `scalarQuantity` is a length V array-like container of values
// `vectorQuantity` is an Fx3 array-like container of vectors per face
polyscope::getSurfaceMesh("my mesh")->addVertexScalarQuantity("my_scalar", scalarQuantity);
polyscope::getSurfaceMesh("my mesh")->addFaceVectorQuantity("my_vector", vectorQuantity);
*/
// View the point cloud and mesh we just registered in the 3D UI
polyscope::show();

}
