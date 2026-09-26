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
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D2E758(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  iVar3 = fn_82CE5410();
  piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x10);
  if (piVar4 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24c) = 0;
  }
  else {
    *piVar4 = 0;
    piVar4[2] = -0x80000000;
    piVar4[1] = 0;
    piVar4[3] = 0;
    iVar3 = fn_82CE5410();
    if ((piVar4[2] & 0x3fffffffU) < 0x407) {
      uVar5 = (piVar4[2] & 0x3fffffffU) << 1;
      if (uVar5 < 0x408) {
        uVar5 = 0x407;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),piVar4,uVar5,0xc);
    }
    lVar6 = (ulonglong)(uint)piVar4[1] - 0x407;
    if (0 < lVar6) {
      puVar7 = (undefined4 *)(*piVar4 + 0x3050);
      do {
        iVar3 = fn_82CE5410();
        piVar1 = *(int **)(iVar3 + 0x10);
        puVar7[2] = 0;
        if ((puVar7[3] & 0x80000000) == 0) {
          (**(code **)(*piVar1 + 0x10))(piVar1,puVar7[1],puVar7[3] & 0x3fffffff,0xc);
        }
        puVar7[1] = 0;
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 3;
        *puVar7 = 0x80000000;
      } while (lVar6 != 0);
    }
    iVar3 = 0x407 - piVar4[1];
    puVar7 = (undefined4 *)(piVar4[1] * 0xc + *piVar4);
    if (0 < iVar3) {
      do {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0x80000000;
        }
        puVar7 = puVar7 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = 0;
    piVar4[1] = 0x407;
    do {
      iVar2 = iVar3 + *piVar4;
      iVar3 = iVar3 + 0xc;
      *(undefined4 *)(iVar2 + 4) = 0;
    } while (iVar3 < 0x3054);
    *(int **)(param_1 + 0x24c) = piVar4;
  }
  return;
}

