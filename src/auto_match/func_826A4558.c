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
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826C35B8();
extern unsigned int lbl_82006D90;
extern unsigned int lbl_82006D94;
extern unsigned int lbl_82006EE0;
extern unsigned int lbl_82013278;
extern unsigned int uStack_38;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_826A4558(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  fn_826C35B8(param_1,param_2,0xffffffff826a3b48);
  *param_1 = &lbl_82006EE0;
  param_1[4] = &lbl_82013278;
  iVar3 = 0;
  if (lbl_82006D90 != 0) {
    iVar2 = 0;
    iVar1 = lbl_82006D90;
    do {
      auStack_50[0] = 3;
      auStack_40[0] = 4;
      uStack_38 = *(undefined4 *)(&lbl_82006D94 + iVar2);
      fn_826A1CC8(param_1 + 4,param_2,iVar1,auStack_40,auStack_50);
      fn_82696330(auStack_40);
      iVar3 = iVar3 + 1;
      iVar2 = iVar3 * 8;
      iVar1 = *(int *)(&lbl_82006D90 + iVar2);
    } while (iVar1 != 0);
  }
  return param_1;
}

