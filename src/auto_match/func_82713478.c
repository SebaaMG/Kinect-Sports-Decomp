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
extern unsigned int *auStack_60;
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826C35B8();
extern unsigned int lbl_8200F164;
extern unsigned int lbl_8200F168;
extern unsigned int lbl_8200F210;
extern unsigned int lbl_82013278;
extern unsigned int uStack_48;


undefined4 * fn_82713478(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  fn_826C35B8(param_1,param_2,0xffffffff82713238);
  ppuVar2 = &lbl_8200F164;
  *param_1 = &lbl_8200F210;
  param_1[4] = &lbl_82013278;
  iVar3 = 0;
  if (lbl_8200F164 != (undefined *)0x0) {
    iVar1 = 0;
    do {
      auStack_60[0] = 7;
      uStack_48 = (**(code **)((int)&lbl_8200F168 + iVar1))();
      auStack_50[0] = 3;
      fn_826A1CC8(param_1 + 4,param_2,*ppuVar2,auStack_50,auStack_60);
      fn_82696330(auStack_50);
      iVar3 = iVar3 + 1;
      iVar1 = iVar3 * 8;
      ppuVar2 = &lbl_8200F164 + iVar3 * 2;
    } while ((&lbl_8200F164)[iVar3 * 2] != (undefined *)0x0);
  }
  return param_1;
}

