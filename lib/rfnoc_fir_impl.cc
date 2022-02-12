/* -*- c++ -*- */
/*
 * Copyright 2020 Ettus Research, A National Instruments Brand.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "rfnoc_fir_impl.h"
#include <gnuradio/io_signature.h>

namespace gr {
namespace ettus {

rfnoc_fir::sptr rfnoc_fir::make(rfnoc_graph::sptr graph,
                                const ::uhd::device_addr_t& block_args,
                                const int device_select,
                                const int instance)
{
    return gnuradio::get_initial_sptr(new rfnoc_fir_impl(
        rfnoc_block::make_block_ref(graph, block_args, "FIR", device_select, instance)));
}


rfnoc_fir_impl::rfnoc_fir_impl(::uhd::rfnoc::noc_block_base::sptr block_ref)
    : rfnoc_block(block_ref), fir_ref(get_block_ref<::uhd::rfnoc::fir_filter_block_control>())
{
}

rfnoc_fir_impl::~rfnoc_fir_impl() {}

/******************************************************************************
 * rfnoc_fir API
 *****************************************************************************/
void rfnoc_fir_impl::set_coefficients(const std::vector<int16_t> &coeffs)
{
    return fir_ref->set_coefficients(coeffs);
}

} /* namespace ettus */
} /* namespace gr */
