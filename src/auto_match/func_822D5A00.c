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
extern int fn_822CA5B0();
extern int fn_822CB0A0();
extern int fn_822CB140();
extern int fn_822D5F28();
extern int fn_8288B760();
extern int fn_828AAF70();


void fn_822D5A00(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  char cVar8;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_30 [48];
  
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    cVar8 = fn_8288B760();
    pcVar2 = *(code **)(*param_1 + 8);
    if (cVar8 == '\0') {
      iVar6 = (*pcVar2)(param_1);
      uVar7 = (**(code **)(*(int *)(iVar6 + 0x240) + 0x3c))();
      *(uint *)(iVar1 + 0x2a4) = uVar7 & 0xff;
      iVar6 = (**(code **)(*param_1 + 8))(param_1);
      uVar7 = (**(code **)(*(int *)(iVar6 + 0x294) + 0x3c))();
      *(uint *)(iVar1 + 0x2f8) = uVar7 & 0xff;
      fn_822CA5B0(param_1);
    }
    else {
      puVar3 = (undefined4 *)(iVar1 + 0x80U & 0xfffffff0);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      lVar5 = (*pcVar2)(param_1);
      fn_822CB140(lVar5 + 0x144,auStack_30);
      puVar3 = (undefined4 *)(iVar1 + 0x90U & 0xfffffff0);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      pcVar2 = *(code **)(*param_1 + 8);
      puVar4 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      lVar5 = (*pcVar2)(param_1);
      fn_822CB0A0(lVar5 + 0xf0,auStack_30);
      iVar6 = *(int *)(iVar1 + 0x2a4);
      lVar5 = (**(code **)(*param_1 + 8))(param_1);
      fn_828AAF70(lVar5 + 0x240,iVar6 != 0);
      iVar1 = *(int *)(iVar1 + 0x2f8);
      lVar5 = (**(code **)(*param_1 + 8))(param_1);
      fn_828AAF70(lVar5 + 0x294,iVar1 != 0);
    }
  }
  fn_822D5F28(param_1);
  return;
}

