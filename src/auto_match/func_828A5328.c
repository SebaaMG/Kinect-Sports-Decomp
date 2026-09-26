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
extern int fn_825089A0();
extern int fn_828864C0();
extern int fn_828864E8();
extern int fn_8288A350();
extern int fn_828A1660();
extern int fn_828A17A0();
extern int fn_828A4660();
extern int fn_828B2BF8();
extern int fn_828B2C98();
extern int fn_828C19A8();
extern int fn_828D0788();
extern int fn_828EA790();
extern int fn_828EFF68();
extern unsigned int lbl_82023FE4;
extern unsigned int lbl_83213EFC;
extern unsigned int *lbl_83213F04;
extern unsigned int lbl_83213F8C;
extern unsigned int lbl_83213FC8;
extern unsigned int lbl_83213FD8;
extern unsigned int lbl_83213FDC;


void fn_828A5328(void)

{
  int *piVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  int *apiStack_30 [6];
  
  piVar1 = (int *)fn_825089A0();
  dVar4 = (double)(**(code **)(*piVar1 + 8))();
  if ((lbl_83213FDC & 1) == 0) {
    lbl_83213FDC = lbl_83213FDC | 1;
    lbl_83213FD8 = (float)dVar4;
    dVar3 = dVar4;
  }
  else {
    dVar3 = (double)lbl_83213FD8;
  }
  dVar4 = (double)(float)(dVar4 - dVar3);
  if ((double)lbl_82023FE4 <= dVar4) {
    fn_828EFF68();
    fn_828864C0();
    fn_828B2BF8();
    fn_828B2C98();
    fn_8288A350(lbl_83213EFC);
    apiStack_30[0] = (int *)*lbl_83213F04;
    if (apiStack_30[0] != lbl_83213F04) {
      do {
        fn_828A4660(dVar4,apiStack_30[0][4]);
        fn_828EA790(apiStack_30);
      } while (apiStack_30[0] != lbl_83213F04);
    }
    if (lbl_83213F8C == 0) {
      fn_828A1660();
    }
    fn_828C19A8();
    uVar2 = (ulonglong)lbl_83213FC8;
    if (uVar2 == 0) {
      uVar2 = fn_828A17A0();
    }
    fn_828D0788(uVar2);
    fn_828864E8();
    piVar1 = (int *)fn_825089A0();
    dVar4 = (double)(**(code **)(*piVar1 + 8))();
    lbl_83213FD8 = (float)dVar4;
  }
  return;
}

