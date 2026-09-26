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
extern int fn_82569B10();
extern int fn_8284DC60();
extern unsigned int lbl_821954EC;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_83296960;
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296BA4;
extern unsigned int lbl_83296BAC;
extern unsigned int lbl_83296BB0;
extern unsigned int lbl_83296BB4;
extern unsigned int lbl_83296BB8;
extern unsigned int lbl_83296BBC;


void fn_8256BC38(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  puVar1 = lbl_83296AE0;
  iVar3 = 0x68;
  dVar5 = (double)lbl_821954EC;
  do {
    lbl_83296AE0 = *(undefined **)(iVar3 + -0x7cd7f4d0);
    if (lbl_83296AE0 == (undefined *)0x0) {
      lbl_83296AE0 = &lbl_83296960;
    }
    else {
      lbl_83296BB0 = 1;
      lbl_83296BB4 = 1;
      lbl_83296BAC = 0;
      lbl_83296BB8 = 1;
      lbl_83296BBC = 1;
    }
    dVar4 = (double)fn_8284DC60((double)(float)((double)lbl_83296BA4 * dVar5),
                                      (double)(longlong)lbl_8326B434);
    iVar2 = fn_82569B10();
    *(float *)(iVar2 + iVar3) = (float)dVar4;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x70);
  if (puVar1 == (undefined *)0x0) {
    lbl_83296AE0 = &lbl_83296960;
  }
  else {
    lbl_83296BB0 = 1;
    lbl_83296BB4 = 1;
    lbl_83296BAC = 0;
    lbl_83296BB8 = 1;
    lbl_83296BBC = 1;
    lbl_83296AE0 = puVar1;
  }
  return;
}

