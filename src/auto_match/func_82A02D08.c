typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_82F6A52C();
extern int fn_82F6A578();


void fn_82A02D08(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  ulonglong uVar3;
  double dVar4;
  undefined1 in_vs35 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_000103c0;
  undefined4 in_register_000103c4;
  undefined4 in_register_000103c8;
  undefined4 in_vr60;
  undefined4 in_register_000103d0;
  undefined4 in_register_000103d4;
  undefined4 in_register_000103d8;
  undefined4 in_vr61;
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  dVar4 = (double)fn_82F6A52C();
  altv207_13(in_vs35,in_vs43);
  puVar1 = (undefined4 *)((int)&fStack_90 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  puVar1 = (undefined4 *)((int)&fStack_70 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  puVar1 = (undefined4 *)((int)&fStack_d0 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  puVar1 = (undefined4 *)((int)&fStack_70 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  altv207_13(in_vs35,in_vs42);
  altv207_13(in_vs35,in_vs41);
  altv207_13(in_vs35,in_vs40);
  puVar1 = (undefined4 *)((int)&fStack_80 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  puVar1 = (undefined4 *)((int)&fStack_c0 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000103e0;
  puVar1[1] = in_register_000103e4;
  puVar1[2] = in_register_000103e8;
  puVar1[3] = in_vr62;
  uVar3 = 0;
  puVar1 = (undefined4 *)((int)&fStack_b0 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000103d0;
  puVar1[1] = in_register_000103d4;
  puVar1[2] = in_register_000103d8;
  puVar1[3] = in_vr61;
  puVar1 = (undefined4 *)((int)&fStack_a0 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000103c0;
  puVar1[1] = in_register_000103c4;
  puVar1[2] = in_register_000103c8;
  puVar1[3] = in_vr60;
  fVar2 = (fStack_7c * fStack_bc + fStack_80 * fStack_c0 + fStack_78 * fStack_b8 + fStack_b4) /
          SQRT(fStack_bc * fStack_bc + fStack_c0 * fStack_c0 + fStack_b8 * fStack_b8);
  if (dVar4 <= (double)((fStack_8c * fStack_cc + fStack_90 * fStack_d0 + fStack_88 * fStack_c8 +
                        fStack_c4) /
                       SQRT(fStack_cc * fStack_cc + fStack_d0 * fStack_d0 + fStack_c8 * fStack_c8)))
  {
    if ((double)fVar2 < dVar4) {
      uVar3 = 8;
    }
  }
  else {
    uVar3 = 4;
  }
  if (dVar4 <= (double)((fStack_6c * fStack_ac + fStack_70 * fStack_b0 + fStack_68 * fStack_a8 +
                        fStack_a4) /
                       SQRT(fStack_ac * fStack_ac + fStack_b0 * fStack_b0 + fStack_a8 * fStack_a8)))
  {
    if ((double)((fStack_6c * fStack_9c + fStack_70 * fStack_a0 + fStack_68 * fStack_98 + fStack_94)
                / SQRT(fStack_9c * fStack_9c + fStack_a0 * fStack_a0 + fStack_98 * fStack_98)) <
        dVar4) {
      uVar3 = uVar3 | 1;
    }
  }
  else {
    uVar3 = uVar3 | 2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar2;
  }
  fn_82F6A578(uVar3);
  return;
}

