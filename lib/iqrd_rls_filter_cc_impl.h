/* -*- c++ -*- */
/*
 * Copyright 2018 gr-adapt author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_ADAPT_IQRD_RLS_FILTER_CC_IMPL_H
#define INCLUDED_ADAPT_IQRD_RLS_FILTER_CC_IMPL_H

#include "config.h"
#ifdef ARMADILLO_FOUND
#include <armadillo>
#endif
#include <adapt/iqrd_rls_filter_cc.h>
#include <gnuradio/filter/fir_filter.h>

namespace gr {
namespace adapt {

class iqrd_rls_filter_cc_impl : public iqrd_rls_filter_cc, filter::kernel::fir_filter_ccc {
    private:
    void init_internals();

#ifdef ARMADILLO_FOUND
    arma::cx_fvec d_taps;
    arma::cx_fvec d_new_taps;
    arma::cx_fmat d_U, d_dq2;
#else
    std::vector<gr_complex> d_new_taps;
    std::vector<std::vector<gr_complex>> d_U;
    std::vector<gr_complex> d_dq2;
#endif // ARMADILLO_FOUND
    bool d_updated;
    float d_delta, d_lambda;
    unsigned d_skip, d_i;
    bool d_adapt, d_reset;

    protected:
    gr_complex error(const gr_complex& desired, const gr_complex& out);

    public:
    iqrd_rls_filter_cc_impl(int num_taps,
                            float delta,
                            float lambda,
                            unsigned skip,
                            unsigned decimation,
                            bool adapt,
                            bool reset);
    ~iqrd_rls_filter_cc_impl() = default;

    const std::vector<gr_complex>& get_taps() override;
    void set_taps(const std::vector<gr_complex>& new_taps) override;
    float get_delta() const override;
    void set_delta(float delta) override;
    float get_lambda() const override;
    void set_lambda(float lambda) override;
    unsigned get_skip() const override;
    void set_skip(unsigned skip) override;
    bool get_adapt() const override;
    void set_adapt(bool adapt) override;
    bool get_reset() const override;
    void set_reset(bool reset) override;

    // Where all the action really happens
    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);
};

} // namespace adapt
} // namespace gr

#endif /* INCLUDED_ADAPT_IQRD_RLS_FILTER_CC_IMPL_H */
