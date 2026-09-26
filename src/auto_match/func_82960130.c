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
extern unsigned int *auStack_48;
extern int fn_8295D318();
extern int fn_82963318();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


/* WARNING: Removing unreachable block (ram,0x8295f9b8) */
/* WARNING: Removing unreachable block (ram,0x8295f9c0) */
/* WARNING: Removing unreachable block (ram,0x8295f9c8) */
/* WARNING: Removing unreachable block (ram,0x8295f9d4) */
/* WARNING: Removing unreachable block (ram,0x8295f9e0) */
/* WARNING: Removing unreachable block (ram,0x8295f9ec) */
/* WARNING: Removing unreachable block (ram,0x8295fa1c) */
/* WARNING: Removing unreachable block (ram,0x8295fa04) */
/* WARNING: Removing unreachable block (ram,0x8295fa18) */
/* WARNING: Removing unreachable block (ram,0x8295fa20) */

void fn_82960130(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [18];
  
  puVar1 = *(uint **)(param_1 + 0x104);
  uVar2 = *puVar1;
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  fn_82963318(puVar1,0,&uStack_50);
  fn_82963318(*(undefined4 *)(param_1 + 0x104),1,&uStack_4c);
  fn_82963318(*(undefined4 *)(param_1 + 0x104),2,auStack_48);
  fn_8295D318(param_1,0x5b,uVar4,uVar3,uStack_50,uStack_4c,auStack_48[0],uVar2 & 0xfffff);
  return;
}

