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


int fn_8236C288(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  puVar1 = *(uint **)(param_1 + 8);
  if (puVar1 != (uint *)0x0) {
    lVar6 = 0;
    iVar3 = (int)(puVar1[1] - *puVar1) >> 2;
    if (0 < iVar3) {
      uVar7 = (ulonglong)*puVar1;
      do {
        uVar5 = 0;
        uVar2 = *(uint *)(((int *)*(int *)uVar7)[4] * 4 + *(int *)*(int *)uVar7);
        uVar9 = (ulonglong)uVar2;
        uVar8 = (ulonglong)*(uint *)(uVar2 + 8);
        if (uVar8 != 0) {
          do {
            iVar4 = fn_822ABA88(uVar9);
            if (*(int *)(*(int *)(iVar4 + 0x110) + 0x18) == param_2) {
              return iVar4;
            }
            uVar5 = uVar5 + 1;
          } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
        }
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 + 4;
      } while ((int)lVar6 < iVar3);
    }
  }
  return 0;
}

