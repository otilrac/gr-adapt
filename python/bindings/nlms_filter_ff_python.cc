/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(nlms_filter_ff.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(d0c5db08aa0929c17aeec92868fbf84a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <adapt/nlms_filter_ff.h>
// pydoc.h is automatically generated in the build directory
#include <nlms_filter_ff_pydoc.h>

void bind_nlms_filter_ff(py::module& m)
{

    using nlms_filter_ff    = ::gr::adapt::nlms_filter_ff;


    py::class_<nlms_filter_ff, gr::sync_decimator,
        std::shared_ptr<nlms_filter_ff>>(m, "nlms_filter_ff", D(nlms_filter_ff))

        .def(py::init(&nlms_filter_ff::make),
           py::arg("first_input"),
           py::arg("num_taps"),
           py::arg("mu"),
           py::arg("skip"),
           py::arg("decimation"),
           py::arg("adapt"),
           py::arg("bypass"),
           py::arg("reset"),
           D(nlms_filter_ff,make)
        )
        




        .def("set_taps",&nlms_filter_ff::set_taps,
            py::arg("taps"),
            D(nlms_filter_ff,set_taps)
        )


        .def("get_taps",&nlms_filter_ff::get_taps,
            D(nlms_filter_ff,get_taps)
        )


        .def("get_mu",&nlms_filter_ff::get_mu,
            D(nlms_filter_ff,get_mu)
        )


        .def("set_mu",&nlms_filter_ff::set_mu,
            py::arg("mu"),
            D(nlms_filter_ff,set_mu)
        )


        .def("get_skip",&nlms_filter_ff::get_skip,
            D(nlms_filter_ff,get_skip)
        )


        .def("set_skip",&nlms_filter_ff::set_skip,
            py::arg("skip"),
            D(nlms_filter_ff,set_skip)
        )


        .def("get_adapt",&nlms_filter_ff::get_adapt,
            D(nlms_filter_ff,get_adapt)
        )


        .def("set_adapt",&nlms_filter_ff::set_adapt,
            py::arg("adapt"),
            D(nlms_filter_ff,set_adapt)
        )


        .def("get_bypass",&nlms_filter_ff::get_bypass,
            D(nlms_filter_ff,get_bypass)
        )


        .def("set_bypass",&nlms_filter_ff::set_bypass,
            py::arg("bypass"),
            D(nlms_filter_ff,set_bypass)
        )


        .def("get_reset",&nlms_filter_ff::get_reset,
            D(nlms_filter_ff,get_reset)
        )


        .def("set_reset",&nlms_filter_ff::set_reset,
            py::arg("reset"),
            D(nlms_filter_ff,set_reset)
        )

        ;




}







