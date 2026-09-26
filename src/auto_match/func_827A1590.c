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
extern int fn_827A0BD0();


ulonglong fn_827A1590(int param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  
  fn_827A0BD0();
  if ((((int *)(param_1 + 0x24) == (int *)0x0) || (*(uint *)(param_1 + 0x28) <= param_2)) ||
     (bVar2 = false, (int)param_2 < 0)) {
    bVar2 = true;
  }
  if (!bVar2) {
    piVar1 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x24));
    if (-1 < *piVar1) {
      return (ulonglong)(uint)piVar1[2];
    }
    if (((ulonglong)(uint)piVar1[2] & 0xffffff) != 0xffffff) {
      return (ulonglong)(uint)piVar1[2] & 0xffffff;
    }
  }
  return 0xffffffffffffffff;
}

