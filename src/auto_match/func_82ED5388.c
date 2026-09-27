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
extern float lbl_8215F998;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82ED5388(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a4c);
  if (param_3 <= iVar1 / 3) {
    return;
  }
  *(undefined4 *)(param_1 + 0x1a68) = 0;
  if (param_3 <= iVar1 - (iVar1 >> 3)) {
    return;
  }
  *(int *)(param_1 + 0x1a58) = *(int *)(param_1 + 0x1a58) + 1;
  if (param_3 <= iVar1) {
    return;
  }
  if (*(int *)(param_1 + 0xaf0) == 0) {
    *(int *)(*(int *)(param_1 + 0x1a5c) + param_2 * 4) =
         (int)((double)(longlong)(param_3 - iVar1) * lbl_8215F998);
  }
  if (param_3 <= *(int *)(param_1 + 0x1a60)) {
    return;
  }
  *(int *)(param_1 + 0x1a60) = param_3;
  return;
}

