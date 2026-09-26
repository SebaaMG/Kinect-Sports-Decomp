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
extern int fn_827A9810();


void fn_826A30B8(int param_1,int param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 0x34);
  uVar1 = *(uint *)(param_1 + 0x38);
  fn_827A9810(piVar7,(ulonglong)uVar1 + param_3);
  if (uVar1 != 0) {
    iVar3 = param_2 + (int)param_3;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x38) - 1;
    if (iVar3 <= (int)uVar6) {
      lVar4 = (uVar6 & 0x3fffffff) << 2;
      lVar5 = (uVar6 - param_3 & 0x3fffffff) << 2;
      do {
        uVar6 = uVar6 - 1;
        iVar2 = (int)lVar5;
        lVar5 = lVar5 + -4;
        *(undefined4 *)((int)lVar4 + *piVar7) = *(undefined4 *)(iVar2 + *piVar7);
        lVar4 = lVar4 + -4;
      } while (iVar3 <= (int)uVar6);
    }
  }
  if (0 < (int)param_3) {
    param_2 = param_2 << 2;
    do {
      *(undefined4 *)(param_2 + *piVar7) = 0;
      param_2 = param_2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

