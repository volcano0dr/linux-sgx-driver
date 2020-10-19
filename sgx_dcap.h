// This file is provided under a dual BSD/GPLv2 license.  When using or
// redistributing this file, you may do so under either license.
//
// GPL LICENSE SUMMARY
//
// Copyright(c) 2016-2018 Intel Corporation.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of version 2 of the GNU General Public License as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// Contact Information:
// Jarkko Sakkinen <jarkko.sakkinen@linux.intel.com>
// Intel Finland Oy - BIC 0357606-4 - Westendinkatu 7, 02160 Espoo
//
// BSD LICENSE
//
// Copyright(c) 2016-2018 Intel Corporation.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
//   * Redistributions of source code must retain the above copyright
//     notice, this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright
//     notice, this list of conditions and the following disclaimer in
//     the documentation and/or other materials provided with the
//     distribution.
//   * Neither the name of Intel Corporation nor the names of its
//     contributors may be used to endorse or promote products derived
//     from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Authors:
//

#ifndef __DCAP_H__
#define __DCAP_H__

#ifndef X86_FEATURE_SGX
    #define X86_FEATURE_SGX				(9 * 32 + 2)
#endif

#ifndef X86_FEATURE_SGX1
    #define X86_FEATURE_SGX1         ( 8*32+ 0) /* SGX1 leaf functions */
#endif

#ifndef X86_FEATURE_SGX2
    #define X86_FEATURE_SGX2         ( 8*32+ 1) /* SGX2 leaf functions */
#endif

#ifndef X86_FEATURE_SGX_LC
    #define X86_FEATURE_SGX_LC			(16*32+30) /* supports SGX launch configuration */
#endif

#ifndef FEAT_CTL_SGX_ENABLED
    #define FEAT_CTL_SGX_ENABLED                             (1<<18)
#endif

#ifndef FEAT_CTL_SGX_LC_ENABLED
    #define FEAT_CTL_SGX_LC_ENABLED                         (1<<17)
#endif

#endif