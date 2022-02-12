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

#ifndef INCLUDED_ETTUS_RFNOC_ADDCOMPLEXMULT_IMPL_H
#define INCLUDED_ETTUS_RFNOC_ADDCOMPLEXMULT_IMPL_H

#include <ettus/rfnoc_addcomplexmult.h>
#include <uhd/rfnoc/addcomplexmult_block_control.hpp>

namespace gr {
namespace ettus {

class rfnoc_addcomplexmult_impl : public rfnoc_addcomplexmult
{
public:
    rfnoc_addcomplexmult_impl(::uhd::rfnoc::noc_block_base::sptr block_ref);
    ~rfnoc_addcomplexmult_impl();

private:
    ::uhd::rfnoc::addcomplexmult_block_control::sptr addcomplexmult_ref;
};

} // namespace ettus
} // namespace gr

#endif /* INCLUDED_ETTUS_RFNOC_ADDCOMPLEXMULT_IMPL_H */
