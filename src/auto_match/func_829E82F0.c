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
extern unsigned int lbl_82057BCC;


ulonglong fn_829E82F0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = (uint *)&lbl_82057BCC;
  uVar1 = 0;
  uVar3 = 0;
  while( true ) {
    if (param_2 < *puVar2) {
      return uVar1;
    }
    if (param_3 < *puVar2) break;
    uVar4 = uVar3 + 1;
    puVar2 = puVar2 + 1;
    uVar1 = uVar3;
    uVar3 = uVar4;
    if (7 < (uVar4 & 0xffffffff)) {
      return 7;
    }
  }
  return uVar1;
}

