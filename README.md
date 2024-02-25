
### The paths used by target_sources and target_include_directories are relative, not absolute. What file or folder are they relative to?
#### Answer: They are relative to the folder that contains the CML

### What are some differences between cmake and ninja?
#### Ninja is a build system that  generates a final executable that you can run. Cmake is a  meta-build system, it uses information from CML to build other build systems. 

### Why is it important to run cmake in its own directory?
#### Answer: Because the cmake generates a lot of random files which we don’t want to pollute the parent folder with, which contains the source code.


