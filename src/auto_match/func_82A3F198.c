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
extern int fn_82A3BE50();
extern int fn_82A3F4C8();


bool fn_82A3F198(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar1 = fn_82A3BE50(param_1,3);
    *(undefined1 *)(param_1 + 0xe34 + iVar4) = uVar1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if (*(char *)(param_1 + 0x2eb7) == '\0') {
    cVar2 = fn_82A3F4C8(param_1,param_1 + 0xe34,param_1 + 0xdb4);
    bVar3 = cVar2 != '\0';
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

