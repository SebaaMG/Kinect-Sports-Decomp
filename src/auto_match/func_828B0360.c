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
extern int fn_828D2E80();


undefined8 fn_828B0360(int param_1)

{
  bool bVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0;
  }
  switch(*(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc)) {
  default:
    bVar1 = false;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
    bVar1 = true;
  }
  if ((!bVar1) && (cVar2 = fn_828D2E80(), cVar2 == '\0')) {
    return 0;
  }
  return 1;
}

