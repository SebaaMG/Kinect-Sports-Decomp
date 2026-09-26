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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int lbl_82195518;
extern unsigned int uStack_28;
extern unsigned int uStack_38;
extern unsigned int uStack_60;


void fn_822A0138(undefined8 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uStack_60;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  undefined1 auStack_20 [8];
  
  if (param_2[param_3 + 0xd] == 0) {
    param_2[param_3 + 0xd] = 1;
    puVar1 = (undefined4 *)((int)&uStack_60 + 4);
    lVar3 = 3;
    do {
      puVar1[3] = 0;
      puVar1 = puVar1 + 4;
      *puVar1 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    fn_82273CD8(auStack_50,3);
    uStack_60 = (longlong)(param_3 + 1);
    dStack_48 = (double)uStack_60;
    fn_82273CD8(auStack_40,3);
    uStack_38 = param_1;
    fn_82273CD8(auStack_30,3);
    uStack_28 = lbl_82195518;
    fn_82672C20(*param_2,0xffffffff821abaf0,auStack_50,3);
    puVar2 = auStack_20;
    lVar3 = 2;
    do {
      puVar2 = puVar2 + -0x10;
      fn_82273C88(puVar2);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}

