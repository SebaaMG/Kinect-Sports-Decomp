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
extern int fn_826038C8();
extern int fn_82603968();
extern int fn_82603A18();
extern int fn_82D89BD8();


void fn_825A7178(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_1 + 0x4e0);
  puVar3 = (undefined4 *)(param_1 + 0x5d0U & 0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (undefined4 *)(iVar1 + 0x70U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  uVar5 = *(undefined4 *)(param_1 + 0x5e8);
  uVar6 = *(undefined4 *)(param_1 + 0x5e4);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(param_1 + 0x5e0);
  *(undefined4 *)(iVar1 + 0x84) = uVar6;
  *(undefined4 *)(iVar1 + 0x88) = uVar5;
  uVar5 = *(undefined4 *)(param_1 + 0x5f4);
  uVar6 = *(undefined4 *)(param_1 + 0x5f0);
  *(undefined4 *)(iVar1 + 0xf0) = *(undefined4 *)(param_1 + 0x5ec);
  *(undefined4 *)(iVar1 + 0xf4) = uVar6;
  *(undefined4 *)(iVar1 + 0xf8) = uVar5;
  if (*(int *)(param_1 + 0x594) != 0) {
    if (*(int *)(param_1 + 0x590) != 0) {
      fn_82603968(iVar1);
      goto LAB_825a7278;
    }
    if (*(int *)(param_1 + 0x594) != 0) {
      fn_82603A18(iVar1);
      goto LAB_825a7278;
    }
  }
  if (*(int *)(param_1 + 0x590) != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
    puVar3 = (undefined4 *)(param_1 + 0x5a0U & 0xfffffff0);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    fn_82D89BD8(iVar2);
    puVar3 = (undefined4 *)(iVar1 + 0x20U & 0xfffffff0);
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar3 = (undefined4 *)(iVar2 + 0x1b0U & 0xfffffff0);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    *(undefined4 *)(iVar1 + 0x108) = 0;
    puVar3 = (undefined4 *)(iVar1 + 0x60U & 0xfffffff0);
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    *(undefined4 *)(iVar1 + 0x110) = 0;
    *(undefined4 *)(iVar1 + 0x10c) = 1;
    fn_826038C8(iVar1);
  }
LAB_825a7278:
  *(undefined4 *)(param_1 + 0x588) = 1;
  *(undefined4 *)(param_1 + 0x580) = 0;
  return;
}

