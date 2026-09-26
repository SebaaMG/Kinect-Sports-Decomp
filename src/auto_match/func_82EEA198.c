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
extern int fn_82EE80A8();
extern int fn_82EE9CA8();
extern int fn_82EE9EA8();


undefined8 fn_82EEA198(int param_1,longlong param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x1010);
  lVar3 = fn_82EE80A8(iVar1);
  lVar3 = lVar3 - *(longlong *)(iVar1 + 0x28);
  RtlEnterCriticalSection(param_1);
  puVar4 = (undefined4 *)fn_82EE9CA8(param_1 + 0x82c);
  if (puVar4 == (undefined4 *)0x0) {
    uVar9 = 0xffffffff8007000e;
  }
  else {
    *puVar4 = param_3;
    (**(code **)(*param_3 + 4))(param_3);
    if (param_2 < 0) {
      param_2 = lVar3 - param_2;
    }
    else if (param_2 <= lVar3) {
      param_2 = lVar3;
    }
    uVar9 = 0;
    lVar3 = param_2 - *(longlong *)(param_1 + 0x820);
    if (param_2 <= *(longlong *)(param_1 + 0x820)) {
      lVar3 = 0;
    }
    uVar7 = 1;
    if (lVar3 < 0x2800) {
      uVar8 = lVar3 / 0x14 & 0xffffffff;
      if (uVar8 == 0) {
        uVar8 = 1;
      }
      uVar8 = *(uint *)(param_1 + 0x81c) + uVar8;
      if (0x1ff < (uVar8 & 0xffffffff)) {
        uVar8 = uVar8 - 0x200;
      }
      iVar1 = (int)((uVar8 + 7 & 0xffffffff) << 2);
      puVar4[2] = *(undefined4 *)(iVar1 + param_1);
      *(undefined4 **)(iVar1 + param_1) = puVar4;
    }
    else {
      puVar4[2] = 0;
      *(longlong *)(puVar4 + 4) = param_2;
      puVar4[3] = 0;
      puVar4[6] = 1;
      puVar2 = *(undefined4 **)(param_1 + 0x830);
      puVar5 = puVar4;
      if (puVar2 != (undefined4 *)0x0) {
        puVar5 = puVar2;
        puVar6 = puVar4;
        if (*(longlong *)(puVar2 + 4) < param_2) {
          puVar5 = puVar4;
          puVar6 = puVar2;
        }
        puVar5 = (undefined4 *)fn_82EE9EA8(param_1,puVar6,puVar5);
      }
      *(undefined4 **)(param_1 + 0x830) = puVar5;
    }
    *(int *)(param_1 + 0x828) = *(int *)(param_1 + 0x828) + 1;
    if (param_4 == (undefined8 *)0x0) {
      puVar4[7] = (int)uVar9;
    }
    else {
      iVar1 = ((int)(*(ulonglong *)(param_1 + 0x1008) % 0x1f5) + 0x20d) * 4;
      puVar4[10] = *(undefined4 *)(iVar1 + param_1);
      *(undefined4 **)(iVar1 + param_1) = puVar4;
      *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_1 + 0x1008);
      puVar4[7] = (int)uVar7;
      lVar3 = *(longlong *)(param_1 + 0x1008) + 1;
      *(longlong *)(param_1 + 0x1008) = lVar3;
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 0x1008) = uVar7;
      }
      *param_4 = *(undefined8 *)(puVar4 + 8);
    }
  }
  RtlLeaveCriticalSection(param_1);
  return uVar9;
}

