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
extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;
extern unsigned int lbl_83231DC0;
extern unsigned int lbl_83231E10;


void fn_82C31658(void)

{
  int iVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  iVar1 = -5;
  pfVar2 = (float *)0x83231d70;
  uVar5 = lbl_82015618;
  do {
    dVar3 = (double)fn_82F655D8(uVar5,(double)(longlong)iVar1);
    *pfVar2 = (float)dVar3;
    pfVar2 = pfVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)pfVar2 < -0x7cdce240);
  pfVar2 = (float *)&lbl_83231DC0;
  iVar1 = 0;
  dVar3 = (double)lbl_82005718;
  do {
    dVar4 = (double)fn_82F655D8(uVar5,(double)(float)((double)(longlong)iVar1 * dVar3));
    *pfVar2 = (float)dVar4;
    pfVar2 = pfVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)pfVar2 < -0x7cdce1f0);
  lbl_83231E10 = 1;
  return;
}

