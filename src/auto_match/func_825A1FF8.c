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
extern unsigned int *auStack_90;
extern int fn_8253C430();
extern int fn_8255E2B0();
extern int fn_826009D8();
extern int fn_82CE6528();
extern int fn_82D80A40();
extern int fn_82D93168();
extern V16 vectorSubtractFloatingPoint();


void fn_825A1FF8(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 auStack_90 [144];
  
  piVar1 = *(int **)(param_1 + 0x7b0);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x7b8) != 0)) {
    lVar5 = (ulonglong)*(uint *)(*piVar1 + 4) - 1;
    if (-1 < lVar5) {
      lVar4 = lVar5 * 0x90;
      do {
        uVar2 = piVar1[1];
        iVar3 = *(int *)((int)lVar4 + uVar2);
        fn_82D80A40(*(undefined4 *)(iVar3 + 8));
        fn_82D93168(iVar3 + 0xe0);
        fn_82CE6528(auStack_90,lVar4 + (ulonglong)uVar2 + 0x50);
        lVar5 = lVar5 + -1;
        lVar4 = lVar4 + -0x90;
      } while (-1 < lVar5);
    }
    fn_826009D8(*(undefined4 *)(param_1 + 0x7b8));
    if (*(int *)(param_1 + 0x7bc) != 0) {
      fn_8255E2B0(param_1,*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x7b0) + 8) + 0x100));
      vectorSubtractFloatingPoint(in_vs32,in_vs33);
      fn_8253C430(param_1);
    }
  }
  return;
}

