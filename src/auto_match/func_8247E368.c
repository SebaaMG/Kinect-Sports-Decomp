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
extern int fn_82230300();
extern int fn_8265CA20();


void fn_8247E368(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar4;
  longlong lVar3;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  while (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar4 = (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1;
      if (*(uint *)(param_1 + 8) <= uVar4) {
        uVar4 = uVar4 - *(uint *)(param_1 + 8);
      }
      iVar6 = *(int *)(uVar4 * 4 + *(int *)(param_1 + 4));
      puVar5 = *(undefined4 **)(iVar6 + 0x1c);
      if (puVar5 != (undefined4 *)0x0) {
        puVar1 = *(undefined4 **)(iVar6 + 0x20);
        for (; puVar5 != puVar1; puVar5 = puVar5 + 0x12) {
          (**(code **)*puVar5)(puVar5,0);
        }
        fn_8265CA20(*(undefined4 *)(iVar6 + 0x1c));
      }
      *(undefined4 *)(iVar6 + 0x1c) = 0;
      *(undefined4 *)(iVar6 + 0x20) = 0;
      *(undefined4 *)(iVar6 + 0x24) = 0;
      fn_82230300(iVar6,1,0);
      lVar3 = (ulonglong)*(uint *)(param_1 + 0x10) - 1;
      *(int *)(param_1 + 0x10) = (int)lVar3;
      if (lVar3 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
  }
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 != 0) {
    iVar7 = iVar6 << 2;
    do {
      iVar7 = iVar7 + -4;
      iVar6 = iVar6 + -1;
      iVar2 = *(int *)(*(int *)(param_1 + 4) + iVar7);
      if (iVar2 != 0) {
        fn_8265CA20(iVar2);
      }
    } while (iVar6 != 0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    fn_8265CA20();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

