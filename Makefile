# build x64

build_architecture = x64
build_entry = build/$(build_architecture)
build_objects = $(build_entry)/objects

src_entry = src

target = SnowPlan_exe

cc = g++
cflags = -std=c++14

srces = $(src_entry)/Plan.cc $(src_entry)/PlanNode.cc $(src_entry)/main.cc
objects = $(build_objects)/Plan.o $(build_objects)/PlanNode.o $(build_objects)/main.o

all : $(build_entry)/$(target)

$(build_entry)/$(target) : $(objects)
	$(cc) $(cflags) -o $@ $^

clean:
	rm $(build_entry)/*.o $(target)