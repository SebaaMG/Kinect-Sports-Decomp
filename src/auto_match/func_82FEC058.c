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
extern int fn_8301E4B8();
extern unsigned int lbl_832643D4;


void fn_82FEC058(double param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = lbl_832643D4;
  *(float *)(lbl_832643D4 + 0x14) = (float)((double)*(float *)(lbl_832643D4 + 0x14) + param_1);
  dVar2 = (double)fn_8301E4B8();
  *(float *)(iVar1 + 4) = (float)dVar2;
  return;
}

