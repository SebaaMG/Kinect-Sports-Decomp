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
extern unsigned int *auStack_5c;
extern int fn_82635C30();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82AA0958();
extern int fn_82AA0D90();
extern int fn_82AA0FC0();
extern unsigned int iStack_60;


longlong fn_82AA14F8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  int iStack_60;
  uint auStack_5c [23];
  
  iStack_60 = 0;
  auStack_5c[0] = 0;
  lVar2 = fn_8265C940(0x124c,0x24870000);
  if (lVar2 == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    fn_82AA0D90(lVar2,param_1,param_2,param_5,param_7,param_8 != 0);
    fn_82AA0958(param_3,param_4,0xffffffff82aa0130,lVar2,0,1);
    lVar3 = fn_82AA0FC0(lVar2,&iStack_60,auStack_5c);
    iVar1 = iStack_60;
    if (-1 < lVar3) {
      uVar4 = (ulonglong)auStack_5c[0] / 0x14;
      if ((int)uVar4 != 0) {
        puVar5 = (undefined2 *)(iStack_60 + 2);
        do {
          fn_82635C30(param_6,*puVar5,puVar5 + 1);
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 10;
        } while (uVar4 != 0);
      }
    }
    fn_8265C990(lVar2,0x24870000);
    if (iVar1 != 0) {
      fn_8265C990(iVar1,0x24870000);
    }
  }
  return lVar3;
}

