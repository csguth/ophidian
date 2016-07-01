/*
 * Copyright 2016 Ophidian
Licensed to the Apache Software Foundation (ASF) under one
or more contributor license agreements.  See the NOTICE file
distributed with this work for additional information
regarding copyright ownership.  The ASF licenses this file
to you under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance
with the License.  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing,
software distributed under the License is distributed on an
"AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
KIND, either express or implied.  See the License for the
specific language governing permissions and limitations
under the License.
 */


#ifndef METHOD_OF_MEANS_AND_MEDIANS_H
#define METHOD_OF_MEANS_AND_MEDIANS_H

#include "clock_topology.h"
#include "../geometry/geometry.h"

namespace ophidian {
namespace clock_tree_synthesis {
class method_of_means_and_medians
{
public:
    using point = geometry::point<double>;

    method_of_means_and_medians();
    ~method_of_means_and_medians();

    void build_topology(std::vector<point>::iterator positions_begin, std::vector<point>::iterator positions_end, clock_topology * clock_topology);
};
}
}

#endif // METHOD_OF_MEANS_AND_MEDIANS_H