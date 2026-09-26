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
extern unsigned int *auStack_50;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_54;


void fn_82F5A730(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uStack_54;
  undefined4 auStack_50 [20];
  
  lVar5 = 0x14;
  puVar3 = auStack_50;
  piVar4 = (int *)(param_3 * 0x1c0 + param_2 + 400);
  do {
    iVar1 = *piVar4;
    if (iVar1 == 2) {
      *puVar3 = lbl_82002AE0;
    }
    else if (iVar1 == 1) {
      *puVar3 = lbl_82002C5C;
    }
    else if (iVar1 == 0) {
      *puVar3 = lbl_821AAD20;
    }
    *(undefined4 *)((param_4 - (int)auStack_50) + (int)puVar3) = lbl_82002AE0;
    piVar4 = piVar4 + 1;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar3 = &uStack_54;
  puVar2 = (undefined4 *)(param_4 + -4);
  lVar5 = 0x14;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

