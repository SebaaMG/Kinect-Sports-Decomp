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
extern unsigned int lbl_821CA460;
extern unsigned int uStack_c;


double fn_825B99F8(double param_1,ushort *param_2)

{
  ushort uVar1;
  uint uStack_c;
  
  uVar1 = *param_2;
  uStack_c = (uint)(longlong)
                   ((float)(param_1 / (double)*(float *)(param_2 + 2)) *
                   ((float)(longlong)(int)(uint)uVar1 - lbl_821CA460));
  if (uVar1 <= uStack_c) {
    uStack_c = uVar1 - 1;
  }
  return (double)*(float *)(uStack_c * 4 + *(int *)(param_2 + 4));
}

