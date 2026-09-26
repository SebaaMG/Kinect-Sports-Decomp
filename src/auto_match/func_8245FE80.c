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
extern int fn_82514888();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1318;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8245FE80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar3 = lbl_821CC160;
  lVar5 = 2;
  lbl_831D1318 = ((((U64)(lbl_831D1318)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(3)) & ((U64)0xFFFFFFFF)) << 0));
  piVar4 = (int *)(*(int *)(param_1 + 0x50) + 0x34);
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)((uint)(piVar4 + -9) & 0xfffffff0);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined4 *)(iVar1 + 0x30) = 0;
      *(undefined4 *)(iVar1 + 0x20) = uVar3;
      puVar2 = (undefined4 *)(iVar1 + 0x10U & 0xfffffff0);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
    }
    piVar4 = piVar4 + 0x10;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  fn_82514888(&uStack_20);
  return;
}

