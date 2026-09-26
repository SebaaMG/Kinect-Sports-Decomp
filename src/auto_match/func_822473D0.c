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
extern int fn_8289AB78();


void fn_822473D0(int *param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = '\x01';
  uVar3 = 0;
  do {
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      lVar1 = (**(code **)(*param_1 + 8))(param_1);
      cVar2 = fn_8289AB78(uVar3 + lVar1 + 0x294);
    }
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      lVar1 = (**(code **)(*param_1 + 8))(param_1);
      cVar2 = fn_8289AB78(uVar3 + lVar1 + 0x780);
    }
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      lVar1 = (**(code **)(*param_1 + 8))(param_1);
      cVar2 = fn_8289AB78(lVar1 + 0x240);
    }
  } while ((cVar2 != '\0') && (uVar3 = uVar3 + 0x54, (uVar3 & 0xffffffff) < 0x4ec));
  return;
}

