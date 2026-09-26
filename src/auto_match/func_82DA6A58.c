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
extern unsigned int *auStack_60;
extern int fn_82CE3E48();
extern int fn_82CE3F80();
extern int fn_82CE3FE8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82DA7590();


void fn_82DA6A58(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 auStack_60 [96];
  
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar9 = (int *)(param_1 + 0x1c);
    do {
      iVar1 = *piVar9;
      uVar2 = *(uint *)(param_1 + 0x20);
      uVar8 = (ulonglong)uVar2;
      uVar3 = *(uint *)(param_1 + 0x24);
      *piVar9 = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0x80000000;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x90) = 0;
      iVar6 = fn_82CE5410();
      if ((*(uint *)(param_1 + 0x24) & 0x3fffffff) < 0x10) {
        uVar7 = (*(uint *)(param_1 + 0x24) & 0x3fffffff) << 1;
        if (uVar7 < 0x11) {
          uVar7 = 0x10;
        }
        fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),piVar9,uVar7,0x10);
      }
      if (1 < (int)uVar2) {
        fn_82DA7590(iVar1,0,uVar8 - 1,0xffffffff82da62c8);
      }
      if (0 < (int)uVar2) {
        puVar11 = (undefined4 *)(iVar1 + -0x10);
        uVar10 = uVar8;
        do {
          auStack_60[0] = 0;
          puVar5 = puVar11 + 5;
          puVar11 = puVar11 + 4;
          (**(code **)(*(int *)*puVar5 + 0xc))((int *)*puVar5,*puVar11,auStack_60);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      fn_82CE3F80();
      if (0 < (int)uVar2) {
        puVar11 = (undefined4 *)(iVar1 + -0x10);
        do {
          uVar4 = puVar11[5];
          puVar11 = puVar11 + 4;
          fn_82CE3E48(*puVar11);
          fn_82CE3E48(uVar4);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      fn_82CE3FE8();
      iVar6 = fn_82CE5410();
      if ((uVar3 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),iVar1,uVar3 & 0x3fffffff,0x10);
      }
    } while (*(int *)(param_1 + 0x20) != 0);
  }
  return;
}

