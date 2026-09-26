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


uint fn_82ABAB58(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0x10;
  do {
    uVar1 = param_1 >> (uVar5 & 0x3f);
    uVar2 = uVar1 & 3;
    if ((uVar1 & 3) == 0) {
LAB_82abab9c:
      iVar6 = 0;
    }
    else if (uVar2 == 1) {
      iVar6 = 1;
    }
    else if (uVar2 < 3) {
      iVar6 = 2;
    }
    else {
      if (uVar2 != 3) goto LAB_82abab9c;
      iVar6 = 3;
    }
    uVar5 = uVar5 + 2;
    uVar3 = iVar6 << (uVar4 & 0x3f) | uVar3;
    uVar4 = uVar4 + 4;
    if (0x17 < uVar5) {
      return uVar3;
    }
  } while( true );
}

