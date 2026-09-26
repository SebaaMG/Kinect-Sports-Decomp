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
extern int fn_82AD1590();


undefined8 fn_82AD15F0(int param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  
  cVar3 = fn_82AD1590();
  if (cVar3 == '\0') {
    uVar2 = *(uint *)(param_1 + 8) >> 7 & 0x7f;
    if (((uVar2 < 0x19) || (0x1c < uVar2)) && ((uVar2 < 0x43 || (0x47 < uVar2)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
  }
  return 1;
}

