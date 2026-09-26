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
extern int fn_82CE07E8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_83214564;
extern unsigned int lbl_83214568;


void fn_828EFF68(void)

{
  int *piVar1;
  byte bVar2;
  double dVar3;
  
  piVar1 = (int *)fn_825089A0();
  dVar3 = (double)(**(code **)(*piVar1 + 8))();
  if (lbl_82002C5C < (float)(dVar3 - (double)lbl_83214564)) {
    lbl_83214564 = (float)dVar3;
    bVar2 = fn_82CE07E8();
    lbl_83214568 = bVar2 & 1;
  }
  return;
}

