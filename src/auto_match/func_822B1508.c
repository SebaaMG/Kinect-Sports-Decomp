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
extern int fn_8236A928();
extern int fn_8236BA88();


void fn_822B1508(int param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar8 = ZEXT48(piVar1);
  uVar7 = 0;
  uVar4 = 0;
  uVar6 = (ulonglong)*(uint *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar6 != 0) {
    uVar5 = (ulonglong)*(uint *)(piVar1[4] * 4 + *piVar1);
    do {
      uVar3 = fn_822ABA88(uVar5);
      iVar2 = *(int *)(*(int *)((int)uVar3 + 0x110) + 0x1c);
      if (iVar2 == 0x14) {
        uVar7 = uVar3;
      }
      if (iVar2 == 0x12) {
        uVar7 = uVar3;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff));
    if ((uVar7 & 0xffffffff) != 0) {
      fn_8236A928(*(undefined4 *)(param_1 + 0x10),uVar7,2);
      return;
    }
  }
  fn_8236BA88(uVar8);
  return;
}

