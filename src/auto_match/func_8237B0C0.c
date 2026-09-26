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
extern unsigned int *auStack_10;
extern unsigned int fStack_8;
extern unsigned int lbl_821CC160;


undefined8 fn_8237B0C0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_10 [8];
  float fStack_8;
  
  fVar4 = lbl_821CC160;
  iVar1 = *(int *)(param_1 + 0x2168);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      puVar2 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      if (fVar4 <= fStack_8) goto LAB_8237b11c;
    }
    if (iVar1 != 2) {
      return 0;
    }
    puVar2 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    if (fVar4 <= fStack_8) {
      return 0;
    }
  }
LAB_8237b11c:
  if ((*(int *)(param_1 + 0xc0) != 0) && (*(int *)(param_1 + 0x216c) != 0)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return 1;
}

