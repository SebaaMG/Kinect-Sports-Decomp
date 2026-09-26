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
extern unsigned int *auStack_2c;
extern int fn_8295D318();
extern int fn_82963318();
extern unsigned int uStack_30;


void fn_8295E0D8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  puVar1 = *(uint **)(param_1 + 0x104);
  uVar2 = *puVar1;
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  fn_82963318(puVar1,0,&uStack_30);
  fn_82963318(*(undefined4 *)(param_1 + 0x104),1,auStack_2c);
  fn_8295D318(param_1,0x10042,uVar4,uVar3,auStack_2c[0],uStack_30,0,uVar2 & 0xfffff);
  return;
}

