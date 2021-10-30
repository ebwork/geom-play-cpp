add_executable(polyscope_play_ex1 
	polyscope_play_ex1.cpp 
)

target_link_libraries(polyscope_play_ex1
	polyscope
)


include_directories ( /usr/include/eigen3 )
include_directories ( /home/ebrisson/pkg/libigl/include )

add_executable(surface_mesh_ex1 
	surface_mesh_ex1.cpp 
)

target_link_libraries(surface_mesh_ex1
	polyscope
)




