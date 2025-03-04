/* SPDX-FileCopyrightText: 2023 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup freestyle
 */

#pragma once

#include "../BPy_UnaryFunction0D.h"

///////////////////////////////////////////////////////////////////////////////////////////

extern PyTypeObject UnaryFunction0DUnsigned_Type;

#define BPy_UnaryFunction0DUnsigned_Check(v) \
  (PyObject_IsInstance((PyObject *)v, (PyObject *)&UnaryFunction0DUnsigned_Type))

/*---------------------------Python BPy_UnaryFunction0DUnsigned structure definition----------*/
typedef struct {
  BPy_UnaryFunction0D py_uf0D;
  Freestyle::UnaryFunction0D<uint> *uf0D_unsigned;
} BPy_UnaryFunction0DUnsigned;

/*---------------------------Python BPy_UnaryFunction0DUnsigned visible prototypes-----------*/
int UnaryFunction0DUnsigned_Init(PyObject *module);

///////////////////////////////////////////////////////////////////////////////////////////
