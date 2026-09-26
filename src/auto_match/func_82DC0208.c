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
extern int fn_82DBD940();
extern unsigned int lbl_821AAD20;


void fn_82DC0208(undefined4 *param_1,int *param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 uVar9;
  undefined4 in_vr0;
  undefined4 uVar10;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010040;
  undefined4 in_register_00010044;
  undefined4 in_register_00010048;
  undefined4 in_vr4;
  undefined4 in_register_00010060;
  undefined4 in_register_00010064;
  undefined4 in_register_00010068;
  undefined4 in_vr6;
  undefined4 in_register_00010080;
  undefined4 in_register_00010084;
  undefined4 in_register_00010088;
  undefined4 in_vr8;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  if ((int)param_3 != 0) {
    puVar1 = (undefined1 *)param_1[5];
    if (puVar1 == (undefined1 *)param_1[3]) {
      *puVar1 = 1;
      *(undefined4 *)(puVar1 + 8) = lbl_821AAD20;
      puVar2 = (undefined4 *)((uint)(puVar1 + in_r0 + 0x30) & 0xfffffff0);
      *puVar2 = in_register_000100c0;
      puVar2[1] = in_register_000100c4;
      puVar2[2] = in_register_000100c8;
      puVar2[3] = in_vr12;
      puVar2 = (undefined4 *)((uint)(puVar1 + in_r0 + 0x10) & 0xfffffff0);
      in_register_000100b0 = *puVar2;
      in_register_000100b4 = puVar2[1];
      in_register_000100b8 = puVar2[2];
      in_vr11 = puVar2[3];
      puVar2 = (undefined4 *)((uint)(puVar1 + in_r0 + 0x10) & 0xfffffff0);
      *puVar2 = in_register_000100a0;
      puVar2[1] = in_register_000100a4;
      puVar2[2] = in_register_000100a8;
      puVar2[3] = in_vr10;
      puVar2 = (undefined4 *)((uint)(puVar1 + in_r0 + 0x20) & 0xfffffff0);
      in_register_00010090 = *puVar2;
      in_register_00010094 = puVar2[1];
      in_register_00010098 = puVar2[2];
      in_vr9 = puVar2[3];
      puVar2 = (undefined4 *)((uint)(puVar1 + in_r0 + 0x20) & 0xfffffff0);
      *puVar2 = in_register_00010080;
      puVar2[1] = in_register_00010084;
      puVar2[2] = in_register_00010088;
      puVar2[3] = in_vr8;
      puVar2 = (undefined4 *)((uint)(puVar1 + in_r0 + 0x40) & 0xfffffff0);
      *puVar2 = in_register_00010060;
      puVar2[1] = in_register_00010064;
      puVar2[2] = in_register_00010068;
      puVar2[3] = in_vr6;
      puVar2 = (undefined4 *)((uint)(puVar1 + in_r0 + 0x50) & 0xfffffff0);
      *puVar2 = in_register_00010000;
      puVar2[1] = in_ACC;
      puVar2[2] = in_register_00010008;
      puVar2[3] = in_vr0;
      puVar2 = (undefined4 *)((uint)(puVar1 + 0x60) & 0xfffffff0);
      *puVar2 = in_register_00010000;
      puVar2[1] = in_ACC;
      puVar2[2] = in_register_00010008;
      puVar2[3] = in_vr0;
      puVar2 = (undefined4 *)((uint)(puVar1 + 0x70) & 0xfffffff0);
      *puVar2 = in_register_00010000;
      puVar2[1] = in_ACC;
      puVar2[2] = in_register_00010008;
      puVar2[3] = in_vr0;
      param_1[5] = puVar1 + 0x80;
      iVar6 = param_1[6];
      puVar2 = (undefined4 *)(in_r0 + iVar6 + 0x10 & 0xfffffff0);
      *puVar2 = in_register_00010040;
      puVar2[1] = in_register_00010044;
      puVar2[2] = in_register_00010048;
      puVar2[3] = in_vr4;
      puVar2 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
      *puVar2 = in_register_00010020;
      puVar2[1] = in_register_00010024;
      puVar2[2] = in_register_00010028;
      puVar2[3] = in_vr2;
    }
    if ((param_3 & 0xffffffff) != 0) {
      iVar6 = 0;
      piVar5 = param_2 + -1;
      uVar8 = param_3;
      do {
        piVar5 = piVar5 + 1;
        iVar7 = iVar6 - param_1[3];
        iVar6 = iVar6 + 0x80;
        *(int *)(*piVar5 + 0xa4) = iVar7 + param_1[5];
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar6 = param_1[5];
    iVar7 = (*(uint *)(*param_2 + 0xa4) >> 2 & 0x3fffffe0) + param_1[6];
    uVar4 = fn_82DBD940(*param_1,param_2,param_3,0xe0,iVar6);
    param_1[5] = uVar4;
    if ((param_3 & 0xffffffff) != 0) {
      iVar6 = iVar6 + 0x50;
      do {
        puVar2 = (undefined4 *)(iVar6 - 0x10U & 0xfffffff0);
        uVar4 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
        uVar4 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(iVar7 + 0x10U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        iVar7 = iVar7 + 0x20;
        puVar2 = (undefined4 *)(iVar6 - 0x10U & 0xfffffff0);
        *puVar2 = in_register_000100b0;
        puVar2[1] = in_register_000100b4;
        puVar2[2] = in_register_000100b8;
        puVar2[3] = in_vr11;
        puVar2 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
        *puVar2 = in_register_00010090;
        puVar2[1] = in_register_00010094;
        puVar2[2] = in_register_00010098;
        puVar2[3] = in_vr9;
        iVar6 = iVar6 + 0x80;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    *(undefined1 *)param_1[5] = 3;
  }
  return;
}

