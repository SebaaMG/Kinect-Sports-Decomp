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
extern int fn_8254F298();
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8254F208(undefined8 param_1,int *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int in_r0;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (ulonglong *)*param_2;
  uVar4 = 0x30;
  lVar6 = 0x20;
  iVar5 = 0x300;
  do {
    uVar3 = uVar4 & 0xffffffff;
    puVar2 = (undefined4 *)((int)&uStack_20 + in_r0 & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    uVar4 = uVar4 + 1;
    *(undefined4 *)((int)puVar1 + iVar5 + 0x784) = uStack_1c;
    *(undefined4 *)((int)puVar1 + iVar5 + 0x788) = uStack_18;
    *(undefined4 *)((int)puVar1 + iVar5 + 0x78c) = uStack_14;
    *(undefined4 *)((int)puVar1 + iVar5 + 0x780) = uStack_20;
    *puVar1 = 0x8000000000000000U >> (uVar3 >> 2 & 0x7f) | *puVar1;
    lVar6 = lVar6 + -1;
    iVar5 = iVar5 + 0x10;
  } while (lVar6 != 0);
  fn_8254F298(param_1,puVar1,1);
  return;
}

