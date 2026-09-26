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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_82145200;
extern unsigned int lbl_821AAD20;


undefined8
fn_82DE5138(double param_1,double param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_r0;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  fVar1 = lbl_820162A0;
  if (((double)lbl_821AAD20 < param_2) && ((double)lbl_821AAD20 < param_1)) {
    puVar2 = (undefined4 *)((int)param_5 + in_r0 + 0x20 & 0xfffffff0);
    *puVar2 = in_register_00010000;
    puVar2[1] = in_ACC;
    puVar2[2] = in_register_00010008;
    puVar2[3] = in_vr0;
    puVar2 = (undefined4 *)((uint)(param_5 + 0xc) & 0xfffffff0);
    *puVar2 = in_register_00010000;
    puVar2[1] = in_ACC;
    puVar2[2] = in_register_00010008;
    puVar2[3] = in_vr0;
    puVar2 = (undefined4 *)((uint)(param_5 + 0x10) & 0xfffffff0);
    *puVar2 = in_register_00010000;
    puVar2[1] = in_ACC;
    puVar2[2] = in_register_00010008;
    puVar2[3] = in_vr0;
    fVar3 = lbl_82002AE0;
    param_5[8] = lbl_82002AE0;
    param_5[0xd] = fVar3;
    param_5[0x12] = fVar3;
    fVar3 = lbl_82145200;
    fVar1 = (float)((double)(float)(param_1 * param_1) * param_2) * fVar1;
    param_5[8] = fVar1;
    param_5[0xd] = fVar1;
    param_5[0x12] = fVar1;
    puVar2 = (undefined4 *)((int)param_5 + in_r0 + 0x10 & 0xfffffff0);
    *puVar2 = in_register_000100c0;
    puVar2[1] = in_register_000100c4;
    puVar2[2] = in_register_000100c8;
    puVar2[3] = in_vr12;
    *param_5 = (float)((double)(float)(param_1 * param_1) * param_1) * fVar3;
    param_5[1] = (float)param_2;
    return 0;
  }
  return 1;
}

