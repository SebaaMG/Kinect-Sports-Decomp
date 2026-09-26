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
extern int fn_82397F30();
extern int fn_82397F88();


byte fn_8239D000(int param_1)

{
  int iVar2;
  longlong lVar1;
  byte bVar3;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar2 = fn_82397F88(param_1);
    if (iVar2 == 0) {
      lVar1 = fn_82397F30(param_1);
      bVar3 = -(lVar1 == 0) & 3;
    }
    else {
      bVar3 = 1;
    }
  }
  else {
    bVar3 = 2;
  }
  return bVar3;
}

