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
extern unsigned int *auStack_30;
extern int fn_82F68CC0();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;


undefined8
fn_82EF2B08(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  uint auStack_30 [12];
  
  uVar4 = param_1 & 0xffffffff;
  uVar2 = 0;
  uVar5 = param_1;
  while ((iVar1 = (int)uVar5, uStack00000020 = param_3, uStack00000028 = param_4,
         uStack00000030 = param_5, uVar4 != 0 &&
         ((ulonglong)*(uint *)(iVar1 + 4) <= (param_2 & 0xffffffff)))) {
    if ((param_2 & 0xffffffff) < (ulonglong)(*(uint *)(iVar1 + 4) + 0x14)) goto LAB_82ef2bb4;
    uVar4 = (ulonglong)*(uint *)(iVar1 + 0x208);
    uVar2 = uVar5;
    uVar5 = uVar4;
  }
  auStack_30[0] = 0;
  if ((param_1 & 0xffffffff) == 0) {
    uVar3 = 0xffffffff8000ffff;
  }
  else {
    uVar3 = (**(code **)*(undefined4 *)param_1)(param_1,auStack_30);
    if (-1 < (int)uVar3) {
      *(int *)(auStack_30[0] + 4) = (int)((param_2 & 0xffffffff) / 0x14) * 0x14;
      if ((uVar2 & 0xffffffff) != 0) {
        *(uint *)((int)uVar2 + 0x208) = auStack_30[0];
      }
      *(int *)(auStack_30[0] + 0x208) = iVar1;
      uVar5 = (ulonglong)auStack_30[0];
LAB_82ef2bb4:
      param_2 = param_2 - *(uint *)((int)uVar5 + 4);
      iVar1 = (int)((param_2 & 0xffffffff) >> 3) + (int)uVar5;
      *(byte *)(iVar1 + 0x24) =
           *(byte *)(((uint)param_2 & 7) + 0x8318a75c) | *(byte *)(iVar1 + 0x24);
      fn_82F68CC0(param_2 * 0x18 + uVar5 + 0x28,&stack0x00000020,0x18);
      uVar3 = 0;
    }
  }
  return uVar3;
}

