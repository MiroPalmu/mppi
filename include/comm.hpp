#include "mpi.h"

namespace mppi {

using rank_type = int;
using color_type = int;

/**
 *  Represents MPI communicator.
 */


class Comm {
    MPI_Comm comm_;

    // Forward declaration for implementation

   public:
    Comm();
    Comm(const color_type color, Comm const & comm = Comm());

    
    rank_type rank() const;
    rank_type size() const;
};
}  // namespace mppi
