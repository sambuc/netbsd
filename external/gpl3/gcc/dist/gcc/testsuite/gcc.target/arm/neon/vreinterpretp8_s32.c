/* Test the `vreinterpretp8_s32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vreinterpretp8_s32 (void)
{
  poly8x8_t out_poly8x8_t;
  int32x2_t arg0_int32x2_t;

  out_poly8x8_t = vreinterpret_p8_s32 (arg0_int32x2_t);
}

/* { dg-final { cleanup-saved-temps } } */