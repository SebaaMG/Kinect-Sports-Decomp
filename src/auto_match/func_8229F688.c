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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern int fn_82F64988();
extern int fn_82F64D08();
extern unsigned int uStack_38;
extern unsigned int uStack_60;


void fn_8229F688(undefined4 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uStack_60;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined1 auStack_30 [48];
  
  iVar1 = fn_82F64D08(param_2,param_1 + 0x27);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)((int)&uStack_60 + 4);
    lVar4 = 2;
    do {
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
      *puVar2 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    fn_82273CD8(auStack_50,3);
    uStack_60 = (longlong)(param_3 + 1);
    dStack_48 = (double)uStack_60;
    fn_82273CD8(auStack_40,5);
    uStack_38 = (undefined4)param_2;
    fn_82672C20(*param_1,0xffffffff821ab7f4,auStack_50,2);
    fn_82F64988(param_1 + 0x27,0x40,param_2);
    puVar3 = auStack_30;
    lVar4 = 1;
    do {
      puVar3 = puVar3 + -0x10;
      fn_82273C88(puVar3);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}

