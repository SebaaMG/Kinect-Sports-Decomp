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
extern unsigned int *auStack_80;
extern unsigned int lbl_8214183C;
extern unsigned int uStack_88;
extern unsigned int uStack_9a;


void fn_82D9BC00(int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined **ppuStack_a0;
  undefined2 uStack_9a;
  undefined8 uStack_88;
  undefined1 auStack_80 [128];
  
  puVar2 = &uStack_88;
  lVar7 = 10;
  puVar3 = (undefined8 *)(*(int *)(*(int *)(param_1 + 8) + 0x78) + -8);
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uStack_9a = 1;
  iVar5 = 0;
  ppuStack_a0 = &lbl_8214183C;
  if (0 < *(int *)(param_1 + 0x164)) {
    iVar6 = 0;
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x160) + iVar6);
      piVar1 = (int *)*puVar4;
      (**(code **)(*piVar1 + 0x20))(piVar1,param_1 + 0x10,puVar4[1],auStack_80,&ppuStack_a0);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x164));
  }
  return;
}

