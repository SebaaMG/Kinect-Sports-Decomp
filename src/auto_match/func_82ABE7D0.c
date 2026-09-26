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
extern int fn_82ABE190();


uint fn_82ABE7D0(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  
  uVar5 = 0;
  for (uVar1 = *(uint *)(param_2 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28)) {
    for (puVar2 = *(uint **)(uVar1 + 4); puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
      if ((((puVar2[4] != 0) && (uVar3 = *puVar2, (uVar3 & 0xe000000) != 0)) &&
          (cVar4 = fn_82ABE190(puVar2), cVar4 != '\0')) &&
         (uVar3 = uVar3 >> 0x11 & 0xff, uVar5 < uVar3)) {
        uVar5 = uVar3;
      }
    }
  }
  return uVar5;
}

