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


char fn_828ACD28(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 == 0) {
    return '\0';
  }
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 1)) || (bVar2 = false, iVar1 == 4)) {
    bVar2 = true;
  }
  if (bVar2) {
    return '\x01';
  }
  if (iVar1 == 5) {
    return '\x02';
  }
  if ((iVar1 == 7) || (bVar2 = false, iVar1 == 6)) {
    bVar2 = true;
  }
  return !bVar2 + '\x03';
}

