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
extern int fn_82897620();
extern int fn_82897B18();
extern int fn_82897BB0();
extern int fn_82897BD0();
extern int fn_82897BF0();


void fn_828996C8(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar7 = 0;
  puVar6 = (undefined4 *)(iVar5 + 0x10);
  lVar8 = 4;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
    *(undefined1 *)(iVar5 + 0x34 + iVar7) = 1;
    iVar7 = iVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  fn_82897BF0(uVar1);
  for (uVar3 = fn_82897BB0(uVar1); (uVar3 & 0xffffffff) != 0; uVar3 = fn_82897BD0(uVar3)) {
    uVar4 = fn_82897B18(uVar3);
    iVar5 = fn_82897620(*(undefined4 *)(param_1 + 0x1c),uVar4);
    piVar2 = *(int **)(iVar5 + 0x20);
    if (param_2 == -1) {
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (**(code **)(*piVar2 + 4))();
      }
      *(undefined4 *)(iVar5 + 0xc) = 3;
      *(undefined4 *)(iVar5 + 0x10) = 3;
      *(undefined4 *)(iVar5 + 0x14) = 3;
      *(undefined4 *)(iVar5 + 0x18) = 3;
    }
    else {
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (**(code **)(**(int **)(iVar5 + 0x20) + 4))();
      }
      *(undefined4 *)((param_2 + 3) * 4 + iVar5) = 3;
    }
  }
  return;
}

