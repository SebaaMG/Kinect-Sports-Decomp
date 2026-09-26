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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8266F600();
extern int fn_82672C20();
extern unsigned int uStack_70;


void fn_824731D8(int param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uStack_70;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [8];
  undefined1 *puStack_48;
  undefined1 auStack_40 [40];
  
  fn_8266F600(*(undefined4 *)(param_1 + 0xf44),param_3,auStack_40,0x20);
  puVar1 = (undefined4 *)((int)&uStack_70 + 4);
  lVar3 = 2;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82273CD8(auStack_60,3);
  uStack_70 = param_2 + 1U & 0xffffffff;
  dStack_58 = (double)uStack_70;
  fn_82273CD8(auStack_50,4);
  puStack_48 = auStack_40;
  fn_82672C20(*(undefined4 *)(param_1 + 0xf44),0xffffffff831c6b10,auStack_60,2);
  puVar2 = auStack_40;
  lVar3 = 1;
  do {
    puVar2 = puVar2 + -0x10;
    fn_82273C88(puVar2);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  return;
}

