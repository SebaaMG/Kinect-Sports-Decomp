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


int fn_82D2C0B8(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  int *piVar9;
  
  iVar1 = *param_2;
  if ((iVar1 != 0) && (piVar9 = *(int **)(param_1 + 0x24c), piVar9 != (int *)0x0)) {
    uVar7 = (ulonglong)(uint)param_2[1];
    uVar2 = piVar9[1];
    iVar3 = *(int *)((int)((uVar7 + 2 & 0xffffffff) << 2) + iVar1);
    iVar4 = *(int *)((int)(((-(ulonglong)(uVar7 != 2) & uVar7 + 1) + 2 & 0xffffffff) << 2) + iVar1);
    iVar6 = 0;
    trapWord(6,(ulonglong)uVar2,0);
    uVar5 = *(int *)(iVar3 + 0xc) * 0x3442a5 + *(int *)(iVar3 + 8) * 0x21528000 ^
            *(int *)(iVar4 + 0xc) * 0x1958e9 + *(int *)(iVar4 + 8) * -0x538b8000;
    piVar9 = (int *)((uVar5 - (uVar5 / uVar2) * uVar2) * 0xc + *piVar9);
    iVar1 = piVar9[1];
    if (0 < iVar1) {
      piVar9 = (int *)*piVar9;
      piVar8 = piVar9;
      do {
        if ((*piVar8 == iVar3) && (piVar8[1] == iVar4)) {
          if (iVar6 == -1) {
            return 0;
          }
          piVar9 = piVar9 + iVar6 * 3;
          if (piVar9 == (int *)0x0) {
            return 0;
          }
          return piVar9[2];
        }
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 3;
      } while (iVar6 < iVar1);
    }
  }
  return 0;
}

