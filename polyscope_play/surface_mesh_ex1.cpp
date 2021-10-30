#include <iostream>
#include <Eigen/Dense>
#include <igl/readOBJ.h>
#include "polyscope/polyscope.h"
#include "polyscope/surface_mesh.h"

int main(int argc, char* argv[]) {
    std::string filename = argv[1];

	// Initialize polyscope
	polyscope::init();

	// Read the mesh
	Eigen::MatrixXd meshV;
	Eigen::MatrixXi meshF;
	igl::readOBJ(filename, meshV, meshF);

	// Register the mesh with Polyscope
	polyscope::registerSurfaceMesh("input mesh", meshV, meshF);

	// Show the GUI
	polyscope::show();
}

