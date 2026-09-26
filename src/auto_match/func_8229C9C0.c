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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_8229C9C0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double dStack_88;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 auStack_40 [64];
  
  uStack_90 = 0;
  param_1[4] = 1;
  uStack_8c = 0;
  fn_82273CD8(&uStack_90,3);
  dStack_88 = (double)(longlong)param_2;
  fn_82672C20(*param_1,0xffffffff821aafc8,&uStack_90,1);
  fn_82273C88(&uStack_90);
  puVar1 = &uStack_8c;
  lVar3 = 4;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82273CD8(auStack_80,5);
  uStack_78 = param_3;
  fn_82273CD8(auStack_70,5);
  uStack_68 = param_4;
  fn_82273CD8(auStack_60,5);
  uStack_58 = param_5;
  fn_82273CD8(auStack_50,5);
  uStack_48 = param_6;
  fn_82672C20(*param_1,0xffffffff821aafdc,auStack_80,4);
  puVar2 = auStack_40;
  lVar3 = 3;
  do {
    puVar2 = puVar2 + -0x10;
    fn_82273C88(puVar2);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  return;
}

