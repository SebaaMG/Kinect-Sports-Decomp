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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int iStack_58;
extern unsigned int stack0x00000000;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern V16 loadVectorLeftIndexed128();


undefined8 fn_824A8870(undefined8 param_1,int param_2,int *param_3,int param_4)

{
  float *pfVar1;
  undefined8 in_r0;
  ulonglong uVar2;
  ulonglong uVar3;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float in_register_000104d0;
  float in_register_000104d4;
  float in_register_000104d8;
  float in_vr77;
  uint uStack_60;
  uint uStack_5c;
  int iStack_58;
  
  uVar2 = ZEXT48(&stack0x00000000);
  (**(code **)*param_3)(param_3,uVar2 - 0x5c,uVar2 - 0x60);
  uVar3 = (ulonglong)uStack_5c;
  if ((int)*(uint *)(param_2 + 0x4c) <= (int)(uStack_60 - uStack_5c)) {
    uVar3 = (ulonglong)uStack_60 - (ulonglong)*(uint *)(param_2 + 0x4c);
  }
  if ((uVar3 & 0xffffffff) < ((ulonglong)uStack_60 + 1 & 0xffffffff)) {
    do {
      (**(code **)(*param_3 + 4))(param_3,uVar3,uVar2 - 0x58);
      uVar3 = uVar3 + 1;
      pfVar1 = (float *)(*(int *)(iStack_58 + 0x40) + param_4 * 0x40 + 0x10U & 0xfffffff0);
      in_register_00010000 = *pfVar1;
      in_ACC = pfVar1[1];
      in_register_00010008 = pfVar1[2];
      in_vr0 = pfVar1[3];
      in_register_000104d0 = in_register_000104d0 + in_register_00010000;
      in_register_000104d4 = in_register_000104d4 + in_ACC;
      in_register_000104d8 = in_register_000104d8 + in_register_00010008;
      in_vr77 = in_vr77 + in_vr0;
    } while ((uVar3 & 0xffffffff) < ((ulonglong)uStack_60 + 1 & 0xffffffff));
  }
  loadVectorLeftIndexed128(in_r0,uVar2 - 0x58);
  pfVar1 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  *pfVar1 = in_register_000104d0 * in_register_00010000;
  pfVar1[1] = in_register_000104d4 * in_ACC;
  pfVar1[2] = in_register_000104d8 * in_register_00010008;
  pfVar1[3] = in_vr77 * in_vr0;
  return param_1;
}

