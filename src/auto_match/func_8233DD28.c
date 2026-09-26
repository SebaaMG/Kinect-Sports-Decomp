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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82248CC8();
extern int fn_822CB0A0();
extern int fn_822CB140();
extern int fn_8233F2E0();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_828E9D28();
extern unsigned int iStack_28;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_5d;
extern unsigned int uStack_5e;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


void fn_8233DD28(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  char cVar6;
  longlong lVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    cVar6 = fn_8288B760();
    if ((cVar6 != '\0') && (*(int *)(iVar1 + 0x24) != 0)) {
      pcVar2 = *(code **)(*param_1 + 8);
      puVar3 = (undefined4 *)(iVar1 + 0x80U & 0xfffffff0);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      lVar5 = (*pcVar2)(param_1);
      fn_822CB140(lVar5 + 0x144,auStack_50);
      puVar3 = (undefined4 *)(iVar1 + 0x90U & 0xfffffff0);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      pcVar2 = *(code **)(*param_1 + 8);
      puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      lVar5 = (*pcVar2)(param_1);
      fn_822CB0A0(lVar5 + 0xf0,auStack_50);
      lVar5 = (**(code **)(*param_1 + 8))(param_1);
      puStack_30 = &uStack_60;
      uStack_60 = 0;
      iStack_28 = 0;
      uStack_5f = 0;
      uStack_5e = 0;
      uStack_5d = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_2c = 4;
      fn_828E9D28(auStack_40,&uStack_60,4);
      fn_8233F2E0(auStack_40,iVar1 + 0xe0);
      fn_82248CC8(lVar5 + 0x198,&uStack_60);
      if (iStack_28 != 0) {
        fn_8265CA20();
      }
    }
  }
  return;
}

