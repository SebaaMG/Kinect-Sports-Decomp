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
extern int fn_82813498();
extern int fn_8281F720();
extern unsigned int lbl_8320A4D4;


bool fn_82813A78(int param_1)

{
  ulonglong uVar1;
  double dVar2;
  
  uVar1 = (ulonglong)lbl_8320A4D4;
  if (uVar1 == 0) {
    uVar1 = fn_82813498();
  }
  dVar2 = (double)fn_8281F720(uVar1,1);
  return dVar2 < (double)*(float *)(param_1 + 0x10);
}

