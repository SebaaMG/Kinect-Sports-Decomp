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
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_82015BE0;
extern unsigned int lbl_821AAD20;


undefined8 fn_82DE51D8(double param_1,float *param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float fVar6;
  int in_r0;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  if (param_1 <= (double)lbl_821AAD20) {
    return 1;
  }
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar1 = (float)(param_1 * (double)lbl_82015BE0);
  puVar5 = (undefined4 *)((int)param_4 + in_r0 + 0x20 & 0xfffffff0);
  *puVar5 = in_register_00010000;
  puVar5[1] = in_ACC;
  puVar5[2] = in_register_00010008;
  puVar5[3] = in_vr0;
  puVar5 = (undefined4 *)((uint)(param_4 + 0xc) & 0xfffffff0);
  *puVar5 = in_register_00010000;
  puVar5[1] = in_ACC;
  puVar5[2] = in_register_00010008;
  puVar5[3] = in_vr0;
  puVar5 = (undefined4 *)((uint)(param_4 + 0x10) & 0xfffffff0);
  *puVar5 = in_register_00010000;
  puVar5[1] = in_ACC;
  puVar5[2] = in_register_00010008;
  puVar5[3] = in_vr0;
  fVar6 = lbl_82002AE0;
  param_4[8] = lbl_82002AE0;
  param_4[0xd] = fVar6;
  param_4[0x12] = fVar6;
  fVar6 = lbl_82015BD4;
  param_4[0x12] = (fVar2 * fVar2 + fVar3 * fVar3) * fVar1;
  param_4[8] = (fVar3 * fVar3 + fVar4 * fVar4) * fVar1;
  param_4[0xd] = (fVar2 * fVar2 + fVar4 * fVar4) * fVar1;
  puVar5 = (undefined4 *)((int)param_4 + in_r0 + 0x10 & 0xfffffff0);
  *puVar5 = in_register_000100c0;
  puVar5[1] = in_register_000100c4;
  puVar5[2] = in_register_000100c8;
  puVar5[3] = in_vr12;
  *param_4 = fVar4 * fVar3 * fVar2 * fVar6;
  param_4[1] = (float)param_1;
  return 0;
}

