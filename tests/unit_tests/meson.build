
unit_tests_srcs = [
  'iterator/input_iterator_tests.cpp',
  'meta/sequence/empty_tests.cpp',
  'meta/sequence/push_back_tests.cpp',
  'meta/sequence/push_front_tests.cpp',
  'meta/sequence/size_tests.cpp',
  'main.cpp'
]

subproject('unittest-cpp', default_options: 'warning_level=0')
unittest_dep = dependency('unittest-cpp')
unit_tests_inc_dir = include_directories('.')
unit_tests_exec = executable(
    'dis_unit_tests',
    unit_tests_srcs,
    include_directories: unit_tests_inc_dir,
    dependencies: [unittest_dep, dis_dep],
    override_options: ['cpp_std=c++20', 'warning_level=3'],
)

test('dis-unit-tests', unit_tests_exec, suite: 'dis')
