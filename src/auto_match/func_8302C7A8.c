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
extern int fn_8300CC40();
extern int fn_8300CD40();


bool fn_8302C7A8(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  
  if ((*(byte *)(param_1 + 0x11e) & 0xc) == 0) {
    if (*(short *)(param_1 + 0x11c) == 0) {
      bVar2 = true;
    }
    else {
      cVar1 = fn_8300CD40(param_2,param_3);
      bVar2 = cVar1 == '\0';
    }
  }
  else {
    cVar1 = fn_8300CC40(param_2,param_3);
    if ((cVar1 == '\0') && (cVar1 = fn_8300CD40(param_2,param_3), cVar1 == '\0')) {
      return true;
    }
    bVar2 = false;
  }
  return bVar2;
}

