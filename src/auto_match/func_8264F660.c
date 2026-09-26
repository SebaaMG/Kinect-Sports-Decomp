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
extern int fn_82645110();


void fn_8264F660(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar2 + 4) = 0x2208;
  *(undefined4 *)(uVar2 + 8) = 6;
  *(undefined4 *)(uVar2 + 0xc) = 0x12000;
  *(undefined4 *)(uVar2 + 0x10) = 0x20000;
  *(undefined4 *)(uVar2 + 0x14) = 0;
  uVar4 = (ulonglong)*(uint *)(param_2 + 0x94);
  if (uVar4 < 2) {
    uVar5 = *(int *)(param_2 + 0x1c) + param_3 * 0x20;
    *(undefined4 *)(uVar2 + 0x18) = 0x2325;
    piVar3 = (int *)(uVar2 + 0x1c);
    *piVar3 = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff);
  }
  else {
    *(undefined4 *)(uVar2 + 0x18) = 0xc0006100;
    piVar3 = (int *)(uVar2 + 0x1c);
    *piVar3 = 0;
    if (uVar4 != 0) {
      uVar2 = 0;
      piVar6 = (int *)(param_2 + 0x1c);
      do {
        iVar1 = *piVar6;
        piVar3[1] = -0x3fffa000;
        uVar5 = iVar1 + param_3 * 0x20;
        piVar3[2] = 3 << (uVar2 & 0x3f);
        piVar3[3] = -0x3ffed2ff;
        piVar3[4] = 0x40325;
        piVar3 = piVar3 + 5;
        *piVar3 = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff);
        *(int **)(param_1 + 0x30) = piVar3;
        if (*(int **)(param_1 + 0x38) < piVar3) {
          piVar3 = (int *)fn_82645110(param_1);
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 1;
        uVar2 = uVar2 + 2;
      } while (uVar4 != 0);
    }
    piVar3[1] = -0x3fffa000;
    piVar3[2] = *(int *)(param_1 + 0x3254);
    piVar3[3] = -0x3fff9f00;
    piVar3 = piVar3 + 4;
    *piVar3 = *(int *)(param_1 + 0x3258);
  }
  piVar3[1] = -0x3fffa500;
  piVar3[2] = 0x15;
  *(int **)(param_1 + 0x30) = piVar3 + 2;
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar4 | 8;
  *(ulonglong *)(param_1 + 0x10) = uVar4 | 0x200000000000008;
  *(ulonglong *)(param_1 + 0x10) = uVar4 | 0x300000000000008;
  return;
}

