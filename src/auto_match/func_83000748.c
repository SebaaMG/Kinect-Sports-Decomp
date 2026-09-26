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
extern int fn_83008D30();


void fn_83000748(int param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  if ((param_4 & 0xff) == 0) {
    bVar1 = *(int *)(param_1 + 0xc) == (int)param_2;
  }
  if (!bVar1) {
    cVar2 = '\0';
    if (((param_3 & 0xff) == 0) && (*(int *)(param_1 + 0x14) != 0)) {
      cVar2 = fn_83008D30(*(int *)(param_1 + 0x14),param_2);
      param_3 = 1;
    }
    if ((cVar2 == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
      if ((*(byte *)(param_1 + 0x3d) & 0x20) != 0) {
        param_4 = 1;
      }
      fn_83000748(*(int *)(param_1 + 0x10),param_2,param_3,param_4);
    }
  }
  return;
}

