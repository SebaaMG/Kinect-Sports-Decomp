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
extern unsigned int *auStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_824B43C0(undefined8 param_1,int *param_2,longlong param_3,int *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined8 in_r0;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  uint uStack_60;
  uint uStack_5c;
  int aiStack_58 [2];
  undefined1 auStack_50 [80];
  
  (**(code **)*param_2)(param_2,&uStack_60,&uStack_5c);
  iVar2 = (int)in_r0;
  uVar3 = ((ulonglong)uStack_5c - param_3) + 1;
  uVar4 = (uint)uVar3;
  uVar5 = (ulonglong)uStack_60;
  if ((int)uStack_60 < (int)uVar4) {
    uVar5 = uVar3;
    uStack_60 = uVar4;
  }
  if ((uVar5 & 0xffffffff) <= (ulonglong)uStack_5c) {
    do {
      (**(code **)(*param_2 + 4))(param_2,uVar5,aiStack_58);
      puVar1 = (undefined4 *)(*(int *)(aiStack_58[0] + 0x40) + param_5 * 0x40 + 0x10U & 0xfffffff0);
      in_register_000104d0 = *puVar1;
      in_register_000104d4 = puVar1[1];
      in_register_000104d8 = puVar1[2];
      in_vr77 = puVar1[3];
      if ((uVar5 & 0xffffffff) != (ulonglong)uStack_60) {
        iVar2 = (**(code **)(*param_4 + 4))(auStack_50,param_4);
        puVar1 = (undefined4 *)((int)in_r0 + iVar2 & 0xfffffff0);
        in_register_000104d0 = *puVar1;
        in_register_000104d4 = puVar1[1];
        in_register_000104d8 = puVar1[2];
        in_vr77 = puVar1[3];
      }
      iVar2 = (int)in_r0;
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) <= (ulonglong)uStack_5c);
  }
  puVar1 = (undefined4 *)(iVar2 + (int)param_1 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  return param_1;
}

