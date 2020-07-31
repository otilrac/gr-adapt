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
/* BINDTOOL_HEADER_FILE(rls_filter_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(bbdd0a77d6a05e48cf9525f8e780cfe7)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <adapt/rls_filter_cc.h>
// pydoc.h is automatically generated in the build directory
#include <rls_filter_cc_pydoc.h>

void bind_rls_filter_cc(py::module& m)
{

    using rls_filter_cc    = ::gr::adapt::rls_filter_cc;


    py::class_<rls_filter_cc, gr::sync_decimator,
        std::shared_ptr<rls_filter_cc>>(m, "rls_filter_cc", D(rls_filter_cc))

        .def(py::init(&rls_filter_cc::make),
           py::arg("first_input"),
           py::arg("num_taps"),
           py::arg("delta"),
           py::arg("_lambda"),
           py::arg("skip"),
           py::arg("decimation"),
           py::arg("adapt"),
           py::arg("reset"),
           D(rls_filter_cc,make)
        )
        




        .def("set_taps",&rls_filter_cc::set_taps,
            py::arg("taps"),
            D(rls_filter_cc,set_taps)
        )


        .def("get_taps",&rls_filter_cc::get_taps,
            D(rls_filter_cc,get_taps)
        )


        .def("get_delta",&rls_filter_cc::get_delta,
            D(rls_filter_cc,get_delta)
        )


        .def("set_delta",&rls_filter_cc::set_delta,
            py::arg("delta"),
            D(rls_filter_cc,set_delta)
        )


        .def("get_lambda",&rls_filter_cc::get_lambda,
            D(rls_filter_cc,get_lambda)
        )


        .def("set_lambda",&rls_filter_cc::set_lambda,
            py::arg("_lambda"),
            D(rls_filter_cc,set_lambda)
        )


        .def("get_skip",&rls_filter_cc::get_skip,
            D(rls_filter_cc,get_skip)
        )


        .def("set_skip",&rls_filter_cc::set_skip,
            py::arg("skip"),
            D(rls_filter_cc,set_skip)
        )


        .def("get_adapt",&rls_filter_cc::get_adapt,
            D(rls_filter_cc,get_adapt)
        )


        .def("set_adapt",&rls_filter_cc::set_adapt,
            py::arg("adapt"),
            D(rls_filter_cc,set_adapt)
        )


        .def("get_reset",&rls_filter_cc::get_reset,
            D(rls_filter_cc,get_reset)
        )


        .def("set_reset",&rls_filter_cc::set_reset,
            py::arg("reset"),
            D(rls_filter_cc,set_reset)
        )

        ;




}







