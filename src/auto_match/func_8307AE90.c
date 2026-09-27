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
extern unsigned int *auStack_a0;
extern int fn_8306EB40();
extern int fn_8307AC98();
extern int fn_8307D748();
extern unsigned int lbl_82002AE0;
extern float lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_8307AE90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  float fVar2;
  int in_r0;
  double dVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  float in_register_00010030;
  float in_register_00010034;
  float in_register_00010038;
  float in_vr3;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  undefined8 in_stack_00000058;
  int in_stack_00000094;
  undefined1 auStack_a0 [32];
  
  fn_8307D748(param_2,param_3,param_4,param_5,param_6,param_7,param_8,in_stack_00000058);
  fn_8307D748(param_2,param_3,param_4,param_5,param_6,param_7,param_8,in_stack_00000058);
  dVar3 = (double)fn_8306EB40(auStack_a0);
  altv207_13(in_vs32,in_vs43);
  pfVar1 = (float *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *pfVar1 = in_register_000103f0 - in_register_00010030;
  pfVar1[1] = in_register_000103f4 - in_register_00010034;
  pfVar1[2] = in_register_000103f8 - in_register_00010038;
  pfVar1[3] = in_vr63 - in_vr3;
  fn_8307AC98(param_1,in_stack_00000094);
  if ((double)lbl_821AAD20 <= dVar3) {
    if (dVar3 <= (double)lbl_82002AE0) {
      return;
    }
    fVar2 = (float)(dVar3 - (double)lbl_82002AE0) * lbl_82005344 +
            *(float *)(in_stack_00000094 + 0xc);
  }
  else {
    fVar2 = -(float)(dVar3 * (double)lbl_82005344 - (double)*(float *)(in_stack_00000094 + 0xc));
  }
  *(float *)(in_stack_00000094 + 0xc) = fVar2;
  return;
}

