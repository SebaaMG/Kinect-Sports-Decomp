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
extern int fn_82B19D78();


void fn_82B20438(undefined8 param_1,int param_2,undefined8 param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  
  *param_4 = *param_4 | 0x10000000;
  puVar1 = *(uint **)(param_2 + 4);
  do {
    if (puVar1 == (uint *)0x0) {
      return;
    }
    uVar2 = puVar1[4];
    if (uVar2 != 0) {
      if ((*puVar1 & 0x40000000) == 0) {
LAB_82b2048c:
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if ((*puVar1 & 0xe000000) != 0) goto LAB_82b2048c;
      }
      if ((bVar3) && ((*(uint *)(uVar2 + 8) & 0x3f80) == 0x3b00)) {
        fn_82B19D78(param_1,uVar2,param_3,param_4);
      }
    }
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

