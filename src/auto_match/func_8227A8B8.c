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
extern int fn_8227A990();
extern int fn_8227AC58();


void fn_8227A8B8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = *(int *)(param_1 + 0xf0);
  iVar6 = 0;
  iVar4 = 0;
  if (0 < *(int *)(iVar7 + 0x44)) {
    iVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      iVar2 = iVar3 + *(int *)(iVar7 + 0x40);
      iVar3 = iVar3 + 0xf0;
      *(undefined4 *)(iVar2 + 0xe4) = 0x80000000;
    } while (iVar4 < *(int *)(iVar7 + 0x44));
  }
  iVar4 = 0;
  lVar8 = 0x20;
  do {
    iVar3 = iVar4 + *(int *)(iVar7 + 0x54);
    iVar4 = iVar4 + 0x14;
    *(undefined1 *)(iVar3 + 0x10) = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  for (puVar1 = (undefined4 *)*puVar5; puVar1 != puVar5; puVar1 = (undefined4 *)*puVar1) {
    fn_8227A990(param_1,puVar1[2]);
    puVar5 = *(undefined4 **)(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x98)) {
    iVar7 = param_1 + 0x28;
    do {
      fn_8227AC58(param_1,iVar7,iVar7 + 8);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x98));
  }
  return;
}

