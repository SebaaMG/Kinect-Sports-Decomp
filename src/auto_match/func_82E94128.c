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
extern int fn_82F65E20();
extern unsigned int lbl_82015610;
extern unsigned int lbl_82015618;


void fn_82E94128(int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_82F65E20((double)(longlong)param_2 / (double)(longlong)param_3);
  dVar2 = (double)fn_82F65E20((double)(longlong)*(int *)(param_1 + 0x77d8) /
                               (double)(longlong)*(int *)(param_1 + 0x77cc));
  dVar1 = dVar1 / dVar2;
  if ((lbl_82015610 < dVar1) && (dVar1 < lbl_82015618)) {
    *(double *)(param_1 + 0x77e0) = dVar1;
    *(undefined4 *)(param_1 + 0x77f0) = 1;
    *(undefined4 *)(param_1 + 0x77a8) = 0;
  }
  return;
}

