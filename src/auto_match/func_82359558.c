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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822ABA88();


int fn_82359558(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  
  if (param_2 != 0) {
    puVar1 = *(uint **)(param_1 + 8);
    uVar8 = ZEXT48(puVar1);
    iVar9 = 0;
    if ((puVar1[1] - *puVar1 & 0xfffffffc) != 0) {
      uVar5 = (ulonglong)*puVar1;
      do {
        uVar4 = 0;
        uVar2 = *(uint *)(((int *)*(int *)uVar5)[4] * 4 + *(int *)*(int *)uVar5);
        uVar7 = (ulonglong)uVar2;
        uVar6 = (ulonglong)*(uint *)(uVar2 + 8);
        if (uVar6 != 0) {
          do {
            iVar3 = fn_822ABA88(uVar7);
            if ((*(int *)(iVar3 + 0x24) != 0) && (*(int *)(iVar3 + 0x24) == param_2)) {
              return iVar3;
            }
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff));
        }
        iVar9 = iVar9 + 1;
        uVar5 = uVar5 + 4;
      } while (iVar9 < ((int *)uVar8)[1] - *(int *)uVar8 >> 2);
    }
  }
  return 0;
}

