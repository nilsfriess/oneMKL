/*******************************************************************************
* Copyright Codeplay Software Ltd
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions
* and limitations under the License.
*
*
* SPDX-License-Identifier: Apache-2.0
*******************************************************************************/

#ifndef _ONEMKL_DFT_PORTFFT_HPP_
#define _ONEMKL_DFT_PORTFFT_HPP_

#if __has_include(<sycl/sycl.hpp>)
#include <sycl/sycl.hpp>
#else
#include <CL/sycl.hpp>
#endif

#include "oneapi/mkl/detail/export.hpp"
#include "oneapi/mkl/dft/detail/types_impl.hpp"

namespace oneapi::mkl::dft::portfft {

// We don't need the forward declarations of compute_xxxward templates (just need the create_commit template), but it doesn't hurt and keeps things simple.
#include "oneapi/mkl/dft/detail/dft_ct.hxx"

} // namespace oneapi::mkl::dft::portfft

#endif // _ONEMKL_DFT_PORTFFT_HPP_