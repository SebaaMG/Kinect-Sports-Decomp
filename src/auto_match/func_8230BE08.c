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
extern int fn_822ABA88();


ulonglong fn_8230BE08(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar6 = (ulonglong)*(uint *)(iVar1 + 0x9a0);
  piVar2 = *(int **)(((uint)LZCOUNT(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c)) >> 3 & 4) +
                    **(int **)(iVar1 + 8));
  uVar3 = *(uint *)(piVar2[4] * 4 + *piVar2);
  uVar8 = (ulonglong)uVar3;
  piVar2 = *(int **)(*(int *)(uVar3 + 0x10) * 4 + *(int *)(iVar1 + 0x20));
  if ((((piVar2[1] - *piVar2 >> 2 == 0) || (*(int *)(iVar1 + 0x58) != 3)) ||
      (*(int *)(iVar1 + 0xfa4) != 0)) ||
     ((uVar6 == 0 && (uVar6 = (ulonglong)*(uint *)(iVar1 + 0x9a4), uVar6 == 0)))) {
    uVar7 = (ulonglong)*(uint *)(uVar3 + 8);
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        uVar4 = fn_822ABA88(uVar8);
        iVar1 = *(int *)(*(int *)((int)uVar4 + 0x110) + 0x1c);
        if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0x1d)) {
          uVar6 = uVar4;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
    }
  }
  return uVar6;
}

