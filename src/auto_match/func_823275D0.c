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
extern int fn_82327098();
extern int fn_8288B760();


void fn_823275D0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  char cVar7;
  longlong lVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_30 [24];
  
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    cVar7 = fn_8288B760();
    if (cVar7 == '\0') {
      fn_822CA5B0(param_1);
    }
    else {
      pcVar2 = *(code **)(*param_1 + 8);
      puVar4 = (undefined4 *)(iVar1 + 0x80U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar10;
      lVar6 = (*pcVar2)();
      fn_822CB140(lVar6 + 0x144,auStack_30);
      puVar4 = (undefined4 *)(iVar1 + 0x90U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      pcVar2 = *(code **)(*param_1 + 8);
      puVar5 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar10;
      lVar6 = (*pcVar2)(param_1);
      fn_822CB0A0(lVar6 + 0xf0,auStack_30);
      iVar3 = *(int *)(iVar1 + 0x720);
      uVar8 = *(undefined4 *)(iVar1 + 0x5c0);
      lVar6 = (**(code **)(*param_1 + 8))(param_1);
      fn_82327098(lVar6 + 0x448,uVar8,iVar3 != 0);
    }
  }
  return;
}

