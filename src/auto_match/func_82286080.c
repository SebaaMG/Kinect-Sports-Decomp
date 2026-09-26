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
extern int fn_823AB470();
extern int fn_828EA610();


bool fn_82286080(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  
  bVar2 = true;
  if (param_1 != 0) {
    iVar3 = fn_823AB470();
    bVar1 = true;
    if (iVar3 == 2) goto LAB_822860b8;
  }
  bVar1 = false;
LAB_822860b8:
  if (((bVar1) || (cVar4 = fn_828EA610(param_1), cVar4 != '\0')) ||
     (*(char *)(param_1 + 0xd8) != '\0')) {
    bVar2 = false;
  }
  return !bVar2;
}

