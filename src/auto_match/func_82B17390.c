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


uint * fn_82B17390(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  
  puVar1 = *(uint **)(param_1 + 4);
  do {
    if (puVar1 == (uint *)0x0) {
      return (uint *)0x0;
    }
    if (puVar1[4] != 0) {
      uVar2 = *puVar1;
      if ((uVar2 & 0x40000000) == 0) {
        bVar3 = true;
        if ((uVar2 & 0xe000000) != 0) goto code_r0x82b173c0;
      }
      else {
code_r0x82b173c0:
        bVar3 = false;
      }
      if ((!bVar3) || (bVar3 = true, (uVar2 >> 0xd & 0xfff) != param_2 + 1U)) {
        bVar3 = false;
      }
      if (bVar3) {
        return puVar1;
      }
    }
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

