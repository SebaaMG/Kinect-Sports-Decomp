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
extern unsigned int *auStack_50;
extern int fn_8267BED0();
extern int fn_8269D958();
extern int fn_8269D9C0();
extern int fn_8269EC08();
extern int fn_826A0F98();
extern unsigned int iStack_38;
extern unsigned int uStack_34;


void fn_826A15C8(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 auStack_50 [4];
  int *piStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  uint uStack_34;
  
  piStack_40 = (int *)*param_2;
  if ((piStack_40 == (int *)0x40) || (piStack_40 == (int *)0x80)) {
    puStack_3c = (undefined4 *)0x0;
    iStack_38 = 0xff;
    uStack_34 = ((((U64)(uStack_34)) & (~(((U64)0xFFFFFF) << 8))) | ((((U64)((((U64)(uStack_34) >> 8) & 0xFFFFFF) & 0xffff)) & ((U64)0xFFFFFF)) << 8));
    uStack_34 = (uint)(((U64)(uStack_34) >> 8) & 0xFFFFFF);
  }
  else {
    puStack_3c = (undefined4 *)param_2[1];
    iStack_38 = param_2[2];
    uStack_34 = param_2[3];
  }
  lVar4 = param_1 + 0x88;
  lVar1 = fn_8269D9C0(lVar4,&piStack_40);
  uVar2 = -(ulonglong)(lVar1 != 0) & lVar1 + 0x10U;
  if (uVar2 == 0) {
    auStack_50[0] = 0x143;
    puVar3 = (undefined4 *)fn_8267BED0(param_1,0xc,auStack_50);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    fn_8269D958(puVar3,param_3);
    piStack_40 = param_2;
    puStack_3c = puVar3;
    fn_826A0F98(lVar4,lVar4,&piStack_40);
    if (puVar3 != (undefined4 *)0x0) {
      fn_8269EC08(puVar3,1);
    }
  }
  else {
    fn_8269D958(uVar2,param_3);
  }
  return;
}

