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
extern int fn_82F68918();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int uStack_51;


void fn_827B5460(undefined8 param_1,double param_2,double param_3)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 uStack_51;
  
  iVar1 = fn_82F6A548();
  uVar2 = 0;
  dVar3 = (double)(lbl_82002AE0 /
                  (float)((double)(float)(param_2 + param_3) * (double)lbl_82005344 + extraout_f1));
  dVar7 = (double)(float)(dVar3 * extraout_f1);
  dVar6 = (double)(float)(dVar3 * param_2);
  dVar3 = (double)(float)(dVar3 * param_3);
  do {
    dVar5 = (double)uVar2;
    dVar4 = (double)fn_82F68918((double)(float)(dVar5 * dVar7));
    uStack_51 = (undefined1)(longlong)dVar4;
    *(undefined1 *)(uVar2 + iVar1) = uStack_51;
    dVar4 = (double)fn_82F68918((double)(float)(dVar5 * dVar6));
    uStack_51 = (undefined1)(longlong)dVar4;
    *(undefined1 *)(iVar1 + 0x100 + uVar2) = uStack_51;
    dVar4 = (double)fn_82F68918((double)(float)(dVar5 * dVar3));
    uStack_51 = (undefined1)(longlong)dVar4;
    *(undefined1 *)(iVar1 + 0x200 + uVar2) = uStack_51;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  fn_82F6A594(iVar1);
  return;
}

