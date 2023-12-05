#include <boost/ut.hpp> 
#include "comm.hpp"

int main() {
    using namespace boost::ut;

    "Split Comm"_test = [] {
        const auto world = mppi::Comm();
        const auto rank = world.rank();
        const auto color = rank % 2;
        const auto splitted_world = mppi::Comm(color, world);
        const auto split_size = splitted_world.size();

        const auto half_of_world_floored = static_cast<mppi::rank_type>(world.size() / 2);
        expect(split_size == half_of_world_floored or split_size == half_of_world_floored + 1);


    };
}
