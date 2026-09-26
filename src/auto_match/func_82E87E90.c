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
extern int fn_82BA02A8();
extern int fn_82E871A0();
extern int fn_82F65E20();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;


void fn_82E87E90(int param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  double dVar4;
  
  if ((*(int *)(param_1 + 0x6f98) != 0) && (*(int *)(param_1 + 0x75c8) != 0)) {
    piVar2 = (int *)(param_1 + 0x72e4);
    lVar1 = 0x49;
    uVar3 = lbl_82002C40;
    dVar4 = lbl_82005710;
    do {
      if ((double)(longlong)*piVar2 / (double)(longlong)*(int *)(param_1 + 0x75c8) != dVar4) {
        fn_82F65E20();
        fn_82F65E20(uVar3);
      }
      lVar1 = lVar1 + -1;
      piVar2 = piVar2 + 1;
    } while (lVar1 != 0);
  }
  fn_82E871A0(param_1);
  fn_82BA02A8(param_1 + 0x7688);
  fn_82BA02A8(param_1 + 0x7664);
  return;
}

