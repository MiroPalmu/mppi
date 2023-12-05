#include "mpi.h"
#include "comm.hpp"

namespace mppi { 

    Comm::Comm() : comm_(MPI_COMM_WORLD) {};

    Comm::Comm(color_type const color, Comm const & comm_to_be_split = Comm()) {
        MPI_Comm_split(&comm_to_be_split.comm_, color, 0, &comm_);
    };
    
    Comm::rank() const {
        int rank;
        MPI_Comm_rank(comm_, &rank);
        return rank;
    };

    Comm::size() const {
        int size;
        MPI_Comm_size(comm_, &size);
        return size;
    }
    

