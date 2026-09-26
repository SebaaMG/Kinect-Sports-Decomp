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
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822D54A8();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_822D4B10(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [72];
  
  iStack_50 = 0;
  uVar1 = fn_8265C9E0(0x94);
  if ((uVar1 & 0xffffffff) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = fn_822D54A8(uVar1,param_2,param_5,param_3,param_2,&iStack_50,param_4);
  }
  iStack_4c = (int)lVar2;
  iStack_50 = iStack_4c + 0xc;
  uVar3 = fn_822C7578(lVar2 + 0x4c,(ulonglong)*param_7 + 4);
  fn_82230218(uVar3,param_6,0,0xffffffffffffffff);
  iVar4 = fn_82365BD8(auStack_48,param_7);
  fn_82376640(lVar2 + 0x3c,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_1,&iStack_50);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return;
}

