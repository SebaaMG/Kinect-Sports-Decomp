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
extern int fn_82AC6560();


void fn_82AD17B0(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)fn_82AC6560(param_1,0x14,0x1a);
  puVar3[3] = param_2;
  *puVar3 = *puVar3 & 0xf1ffe01f | 0x2001c80;
  puVar1 = *(uint **)(param_2 + 4);
  puVar3[2] = (uint)puVar1;
  *(uint **)(param_2 + 4) = puVar3;
  *puVar3 = (*(uint *)(param_2 + 8) & 0x1c000) << 0xb | *puVar3 & 0xf1ffffff;
  do {
    if (puVar1 == (uint *)0x0) {
LAB_82ad1840:
      if ((*(uint *)(param_2 + 8) & 1) != 0) {
        *puVar3 = *puVar3 & 0xffffffe0 | 1;
      }
      return;
    }
    uVar2 = *puVar1;
    if ((uVar2 & 0xe000000) != 0) {
      if ((uVar2 >> 0x1e & 1) != 0) {
        *puVar3 = *puVar3 & 0xfe001fff | uVar2 & 0x1ffe000 | 0x40000000;
      }
      goto LAB_82ad1840;
    }
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

