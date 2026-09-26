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
extern unsigned int *__imp__KeDebugMonitorData;
extern int fn_82F68CC0();
extern int fn_82F6E8D4();
extern unsigned int iStack_4c;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_82A2ABE0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar6;
  undefined8 uVar5;
  ulonglong uVar7;
  longlong lVar8;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint *puStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  uVar4 = ZEXT48(&stack0x00000000);
  puVar1 = (undefined4 *)(uVar4 - 0xb0);
  *puVar1 = register0x0000000c;
  uStack_48 = (undefined4)param_2;
  uVar7 = (param_3 + 3U & 0xffffffff) >> 2;
  uStack_58 = (undefined4)param_3;
  lVar8 = uVar7 + 3;
  uStack_44 = (undefined4)uVar7;
  puStack_50 = &uStack_60;
  iStack_4c = 3;
  iVar3 = (int)lVar8;
  uStack_60 = iVar3 * 0x1000000 | 0x62;
  uStack_40 = 0;
  uStack_5c = param_1;
  if (*__imp__KeDebugMonitorData == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(*__imp__KeDebugMonitorData + 0x18))(0x5e,uVar4 - 0x50);
  }
  if (iVar6 < 1) {
    if (-1 < iVar6) {
      uVar7 = -(lVar8 * 4 & 0xfffffffcU) & 0xfffffff0;
      fn_82F6E8D4();
      lVar8 = (uVar4 - 0xb0) + uVar7;
      puVar2 = (undefined4 *)lVar8;
      *puVar2 = *puVar1;
      puVar2[0x14] = uStack_60;
      puVar2[0x15] = uStack_5c;
      puVar2[0x16] = uStack_58;
      fn_82F68CC0(lVar8 + 0x5c,param_2,param_3);
      if (*__imp__KeDebugMonitorData != 0) {
        puStack_50 = puVar2 + 0x14;
        iStack_4c = iVar3;
        uVar5 = (**(code **)(*__imp__KeDebugMonitorData + 0x18))(0x43,uVar4 - 0x50);
        return uVar5;
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

