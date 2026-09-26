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
extern int fn_8225F160();
extern int fn_8225F3C0();
extern int fn_8249ABC0();
extern int fn_8249B598();
extern unsigned int lbl_821CC160;


double fn_8248A9A8(int param_1)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  double dVar4;
  
  dVar4 = (double)lbl_821CC160;
  fn_8225F160();
  iVar1 = fn_8225F3C0();
  if (iVar1 == 1) {
    iVar1 = fn_8249ABC0();
    iVar1 = fn_8249B598(iVar1,*(undefined4 *)(iVar1 + 0x20));
    dVar4 = (double)*(float *)((iVar1 + 0xdc) * 4 + param_1);
  }
  else {
    pfVar2 = (float *)(param_1 + 0x36c);
    lVar3 = 2;
    do {
      pfVar2 = pfVar2 + 1;
      dVar4 = (double)(float)((double)*pfVar2 + dVar4);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return dVar4;
}

