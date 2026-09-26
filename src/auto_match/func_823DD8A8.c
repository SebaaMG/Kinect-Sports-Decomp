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
extern int fn_823DDB00();
extern int fn_8249ABC0();


void fn_823DD8A8(int param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  fn_823DDB00();
  lVar4 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 8);
  lVar7 = ZEXT48(piVar1) + 0x8db4;
  do {
    lVar6 = lVar7 + -4;
    uVar3 = 0;
    lVar7 = lVar7 + 0x1c;
    uVar5 = (ulonglong)*(uint *)(*piVar1 + (int)lVar4);
    do {
      iVar2 = fn_822ABA88(*(undefined4 *)(((int *)uVar5)[4] * 4 + *(int *)uVar5));
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iVar2 + 0x200) = 1;
      lVar6 = lVar6 + 4;
      *(undefined4 *)lVar6 = 0xffffffff;
    } while ((uVar3 & 0xffffffff) < 7);
    lVar4 = lVar4 + 4;
  } while ((int)lVar4 < 8);
  iVar2 = fn_8249ABC0();
  *(undefined4 *)(iVar2 + 0x114) = 0xffffffff;
  return;
}

