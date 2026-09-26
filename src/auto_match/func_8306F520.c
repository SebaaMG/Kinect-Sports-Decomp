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
extern int fn_83075D90();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E6C;


void fn_8306F520(undefined8 param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = 0;
  piVar1 = (int *)(param_2 + 0x160);
  dVar4 = (double)lbl_82186E6C;
  dVar5 = (double)lbl_82002AE0;
  do {
    dVar3 = dVar4;
    if (*piVar1 == 2) {
      dVar3 = dVar5;
    }
    fn_83075D90(dVar3,param_3,lVar2);
    lVar2 = lVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)lVar2 < 0x14);
  return;
}

