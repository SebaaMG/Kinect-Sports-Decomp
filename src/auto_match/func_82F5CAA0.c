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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_2c;
extern unsigned int fStack_8;
extern unsigned int lbl_8207F514;


undefined8 fn_82F5CAA0(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_30 [4];
  float fStack_2c;
  undefined1 auStack_20 [4];
  float fStack_1c;
  float fStack_18;
  undefined1 auStack_10 [8];
  float fStack_8;
  
  iVar2 = param_2 + 0x90;
  if (param_3 != 0) {
    iVar2 = param_2 + 0xd0;
  }
  puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
  uVar11 = *puVar1;
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  iVar2 = param_2 + 0x70;
  puVar1 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  if (param_3 != 0) {
    iVar2 = param_2 + 0xb0;
  }
  puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  if (param_3 == 0) {
    param_2 = param_2 + 0x60;
  }
  else {
    param_2 = param_2 + 0xa0;
  }
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  if ((fStack_8 <= fStack_18 + lbl_8207F514) && (fStack_1c <= fStack_2c)) {
    return 1;
  }
  return 0;
}

