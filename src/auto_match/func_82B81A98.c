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
extern int fn_82AD17B0();


uint * fn_82B81A98(undefined8 param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_2 + 4);
  do {
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)fn_82AD17B0();
      *puVar2 = ((param_3 & 7) << 0x14 | param_5 & 0xff) << 5 | *puVar2 & 0xf1ffe000 |
                param_4 & 0x1f;
      return puVar2;
    }
    if (puVar2[4] != 0) {
      uVar1 = *puVar2;
      if (((((uVar1 >> 0x19 & 7) != 0) && ((uVar1 & 0x1f) == param_4)) &&
          ((uVar1 >> 0x19 & 7) == param_3)) && ((uVar1 >> 5 & 0xff) == param_5)) {
        return puVar2;
      }
    }
    puVar2 = (uint *)puVar2[2];
  } while( true );
}

