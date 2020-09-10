#  Cookiecutter C++ package

Pure C++ package with Cookiecutter.


## Package with
* fmt - 6.0.0
* spdlog - 1.4.2
* gtest - 1.8.1


## Directory
```
{{cookiecutter.project_slug}}/
├── CMakeLists.txt
├── conanfile.txt
├── include
│   └── {{cookiecutter.project_slug}}
│       └── function.h
├── LICENSE
├── README.md
├── src
│   ├── {{cookiecutter.project_slug}}
│   │   └── function.cpp
│   └── main.cpp
└── test
    └── test.cpp
```

---
## Dependency

* python3
* pip
* cookiecutter - https://github.com/cookiecutter/cookiecutter
* conan - https://github.com/conan-io/conan
* cmake
* spdlog - https://github.com/gabime/spdlog
* gtest - https://github.com/google/googletest


## Install

```bash
$ sudo apt install cmake
$ sudo apt install python3.8  # Any python3.x
$ sudo apt install python3-pip

$ pip3 install cookiecutter --user
$ pip3 install conan --user

$ echo "export PATH=$PATH:$HOME/.local/bin" >> $HOME/.bashrc
$ echo "export PYTHONPATH=$PYTHONPATH:$HOME/.local/python3.8/site-packages" >> $HOME/.bashrc  # Check your python3 path
```


## Quick start

```bash
# Project create
$ cookiecutter https://github.com/ppd0523/cookiecutter-cpp.git

# Build
$ cd cookiecutter-cpp
$ mkdir build && cd build
$ conan install .. --build=fmt --build=spdlog --build=gtest
$ cmake .. && make

# Execute
$ ./bin/main
$ ./bin/test
```

### Trouble Shooting
