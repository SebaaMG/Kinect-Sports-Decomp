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
extern int fn_827C2A78();
extern int fn_827C2C28();
extern int fn_827C2D70();


void fn_827C3500(int param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  
  iVar1 = *(int *)(param_1 + 0x188);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if ((*(char *)(param_1 + 0x49) == '\0') || (cVar2 = fn_827C2C28(), cVar2 == '\0')) {
      pcVar3 = fn_827C2A78;
    }
    else {
      pcVar3 = fn_827C2D70;
    }
    *(code **)(iVar1 + 0xc) = pcVar3;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}

