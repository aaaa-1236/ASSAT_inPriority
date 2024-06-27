/* /////////////////////////////////////////////////////////////////////////
 * File:        platformstl/filesystem/memory_mapped_file.hpp
 *
 * Purpose:     Platform header for the memory_mapped_file components.
 *
 * Created:     20th March 2005
 * Updated:     10th August 2009
 *
 * Home:        http://stlsoft.org/
 *
 * Copyright (c) 2005-2009, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the names of
 *   any contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


#ifndef PLATFORMSTL_INCL_PLATFORMSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE
#define PLATFORMSTL_INCL_PLATFORMSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE

/* File version */
#ifndef STLSOFT_DOCUMENTATION_SKIP_SECTION
# define PLATFORMSTL_VER_PLATFORMSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE_MAJOR    2
# define PLATFORMSTL_VER_PLATFORMSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE_MINOR    1
# define PLATFORMSTL_VER_PLATFORMSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE_REVISION 1
# define PLATFORMSTL_VER_PLATFORMSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE_EDIT     19
#endif /* !STLSOFT_DOCUMENTATION_SKIP_SECTION */

/** \file platformstl/filesystem/memory_mapped_file.hpp
 *
 * \brief [C++ only] Definition of the platformstl::memory_mapped_file type
 *   (\ref group__library__filesystem "File System" Library).
 *
 * When compiling on UNIX platforms, the platformstl::memory_mapped_file
 * type resolves to the unixstl::memory_mapped_file class. On Windows
 * platforms it resolves to the winstl::memory_mapped_file class. It is
 * not defined for other platforms.
 */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#ifndef PLATFORMSTL_INCL_PLATFORMSTL_HPP_PLATFORMSTL
# include <platformstl/platformstl.hpp>
#endif /* !PLATFORMSTL_INCL_PLATFORMSTL_HPP_PLATFORMSTL */

#if defined(PLATFORMSTL_OS_IS_UNIX)
# ifndef UNIXSTL_INCL_UNIXSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE
#  include <unixstl/filesystem/memory_mapped_file.hpp>
# endif /* !UNIXSTL_INCL_UNIXSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE */
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
# ifndef WINSTL_INCL_WINSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE
#  include <winstl/filesystem/memory_mapped_file.hpp>
# endif /* !WINSTL_INCL_WINSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE */
#else /* ? operating system */
# error Operating system not discriminated
#endif /* operating system */

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#if defined(_STLSOFT_NO_NAMESPACE) || \
    defined(STLSOFT_DOCUMENTATION_SKIP_SECTION)
/* There is no stlsoft namespace, so must define ::platformstl */
namespace platformstl
{
#else
/* Define stlsoft::platformstl_project */

namespace stlsoft
{

namespace platformstl_project
{
#endif /* _STLSOFT_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#if defined(STLSOFT_DOCUMENTATION_SKIP_SECTION)

    /** \brief A facade for the platform's memory mapped file API.
     *
     * \ingroup group__library__filesystem
     *
     * The class is not actually defined in the
     * \link ::platformstl platformstl\endlink namespace. Rather, it
     * resolves to the appropriate type for the given platform, relying on
     * \ref section__principle__conformance__intersecting_conformance "Intersecting Conformance"
     * of the resolved platform-specific types.
     *
     * When compiling on UNIX platforms, the platformstl::memory_mapped_file
     * type resolves to the unixstl::memory_mapped_file class. On Windows
     * platforms it resolves to the winstl::memory_mapped_file class. It
     * is not defined for other platforms.
     */
    class memory_mapped_file
    {};

#elif defined(PLATFORMSTL_OS_IS_UNIX)

# ifdef _UNIXSTL_NO_NAMESPACE
    using ::memory_mapped_file;
# else /* ? _UNIXSTL_NO_NAMESPACE */
    using ::unixstl::memory_mapped_file;
# endif /* _UNIXSTL_NO_NAMESPACE */

#elif defined(PLATFORMSTL_OS_IS_WINDOWS)

# ifdef _WINSTL_NO_NAMESPACE
    using ::memory_mapped_file;
# else /* ? _WINSTL_NO_NAMESPACE */
    using ::winstl::memory_mapped_file;
# endif /* _WINSTL_NO_NAMESPACE */

#else /* ? operating system */
# error Operating system not discriminated
#endif /* operating system */

/* ////////////////////////////////////////////////////////////////////// */

#if defined(_STLSOFT_NO_NAMESPACE) || \
    defined(STLSOFT_DOCUMENTATION_SKIP_SECTION)
} // namespace platformstl
#else
} // namespace platformstl_project
} // namespace stlsoft
#endif /* _STLSOFT_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !PLATFORMSTL_INCL_PLATFORMSTL_FILESYSTEM_HPP_MEMORY_MAPPED_FILE */

/* ///////////////////////////// end of file //////////////////////////// */
