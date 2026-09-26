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
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_8268C210();
extern int fn_826C6368();
extern int fn_82768968();
extern int fn_8276DE20();
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_827544C0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar5;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [18];
  
  uStack_50 = 0x105;
  iVar5 = fn_8267BED0(param_1,0x40,&uStack_50);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8276DE20();
  }
  uStack_4c = 2;
  uVar4 = fn_8267BED0(param_1,0x2c,&uStack_4c);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82768968(uVar4,uVar3,0);
  }
  auStack_48[0] = 0x146;
  puVar6 = (undefined4 *)fn_8267BED0(param_1,0x1c,auStack_48);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 1;
    fn_8268C210(puVar6 + 3);
    puVar6[4] = lbl_82002AE0;
    if ((uVar4 & 0xffffffff) != 0) {
      fn_8267C4C8(uVar4);
    }
    puVar6[5] = (int)uVar4;
    puVar6[6] = 0;
  }
  puVar1 = *(uint **)(param_1 + 0x18);
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (uint)((ulonglong)uVar2 - 1);
    if ((ulonglong)uVar2 - 1 == 0) {
      fn_826C6368(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  *(undefined4 **)(param_1 + 0x18) = puVar6;
  if ((uVar4 & 0xffffffff) != 0) {
    fn_82687270(uVar4);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar3);
  }
  return;
}

