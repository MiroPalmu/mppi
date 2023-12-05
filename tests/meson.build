add_test_setup('single_threaded', is_default : true)
add_test_setup('mpi_n')

# Dictionary of test names and in which test suite/setup they belong
tests_with_suites = {
  'test_unit_test' : ['single_threaded'],
  'test_comm' : ['mpi_n']
    #'test_mpi',
    #'comm_test'
}


test_names_and_exes = {}

# Create single threaded test executables:
foreach test_name : tests_with_suites.keys()
    test_names_and_exes += {test_name :
        executable(
            test_name,
            files(test_name + '.cpp'),
            include_directories: project_include_directories,
            dependencies: project_dependencies
        )
    }

endforeach

# Run single threaded tests
foreach test_name, test_exe : test_names_and_exes
    test(
        test_name,
        test_exe,
        suite: tests_with_suites[test_name]
    )
endforeach
