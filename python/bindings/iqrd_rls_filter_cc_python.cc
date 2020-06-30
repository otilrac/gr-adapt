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
/* BINDTOOL_HEADER_FILE(iqrd_rls_filter_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(837174f71209ba42937bdf6c6de9363e)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <adapt/iqrd_rls_filter_cc.h>
// pydoc.h is automatically generated in the build directory
#include <iqrd_rls_filter_cc_pydoc.h>

void bind_iqrd_rls_filter_cc(py::module& m)
{

    using iqrd_rls_filter_cc    = ::gr::adapt::iqrd_rls_filter_cc;


    py::class_<iqrd_rls_filter_cc, gr::sync_decimator,
        std::shared_ptr<iqrd_rls_filter_cc>>(m, "iqrd_rls_filter_cc", D(iqrd_rls_filter_cc))

        .def(py::init(&iqrd_rls_filter_cc::make),
           py::arg("num_taps"),
           py::arg("delta"),
           py::arg("_lambda"),
           py::arg("skip"),
           py::arg("decimation"),
           py::arg("adapt"),
           py::arg("reset"),
           D(iqrd_rls_filter_cc,make)
        )
        




        .def("set_taps",&iqrd_rls_filter_cc::set_taps,
            py::arg("taps"),
            D(iqrd_rls_filter_cc,set_taps)
        )


        .def("get_taps",&iqrd_rls_filter_cc::get_taps,
            D(iqrd_rls_filter_cc,get_taps)
        )


        .def("get_delta",&iqrd_rls_filter_cc::get_delta,
            D(iqrd_rls_filter_cc,get_delta)
        )


        .def("set_delta",&iqrd_rls_filter_cc::set_delta,
            py::arg("delta"),
            D(iqrd_rls_filter_cc,set_delta)
        )


        .def("get_lambda",&iqrd_rls_filter_cc::get_lambda,
            D(iqrd_rls_filter_cc,get_lambda)
        )


        .def("set_lambda",&iqrd_rls_filter_cc::set_lambda,
            py::arg("_lambda"),
            D(iqrd_rls_filter_cc,set_lambda)
        )


        .def("get_skip",&iqrd_rls_filter_cc::get_skip,
            D(iqrd_rls_filter_cc,get_skip)
        )


        .def("set_skip",&iqrd_rls_filter_cc::set_skip,
            py::arg("skip"),
            D(iqrd_rls_filter_cc,set_skip)
        )


        .def("get_adapt",&iqrd_rls_filter_cc::get_adapt,
            D(iqrd_rls_filter_cc,get_adapt)
        )


        .def("set_adapt",&iqrd_rls_filter_cc::set_adapt,
            py::arg("adapt"),
            D(iqrd_rls_filter_cc,set_adapt)
        )


        .def("get_reset",&iqrd_rls_filter_cc::get_reset,
            D(iqrd_rls_filter_cc,get_reset)
        )


        .def("set_reset",&iqrd_rls_filter_cc::set_reset,
            py::arg("reset"),
            D(iqrd_rls_filter_cc,set_reset)
        )

        ;




}







