project(
    'dis',
    'cpp',
    version: '0.1',
    license: 'BSL-1.0',
    default_options: ['cpp_std=c++20', 'warning_level=3'],
)

inc_dir = include_directories('include')
dis_dep = declare_dependency(include_directories: inc_dir)

subdir('tests')
