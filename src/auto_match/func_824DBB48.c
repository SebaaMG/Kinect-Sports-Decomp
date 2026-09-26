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
extern int fn_824DEFB0();
extern int fn_824E0978();
extern int fn_824E0B28();
extern int fn_824E0CE0();
extern int fn_8265CA20();
extern int fn_82670C10();
extern unsigned int lbl_82197048;


void fn_824DBB48(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x478) != 0) {
    do {
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x470) + 0xd0;
      *(int *)(param_1 + 0x470) = iVar1;
      if (iVar1 == *(int *)(param_1 + 0x46c)) {
        *(int *)(param_1 + 0x470) = *(int *)(param_1 + 0x468);
      }
    } while (uVar2 < *(uint *)(param_1 + 0x478));
  }
  if (*(int *)(param_1 + 0x468) != 0) {
    fn_8265CA20();
  }
  fn_82670C10(param_1 + 0x448);
  fn_82670C10(param_1 + 0x408);
  fn_82670C10(param_1 + 1000);
  fn_824E0978(param_1 + 0x3b8);
  *(undefined ***)(param_1 + 0x398) = &lbl_82197048;
  fn_824DEFB0(param_1 + 0x358);
  fn_824DEFB0(param_1 + 800);
  fn_824E0CE0(param_1 + 0x2c0);
  fn_824E0B28(param_1 + 0x280);
  fn_824DEFB0(param_1 + 0x248);
  fn_824DEFB0(param_1 + 0x210);
  fn_824DEFB0(param_1 + 0x1d8);
  fn_824DEFB0(param_1 + 0x1a0);
  fn_824E0978(param_1 + 0x164);
  *(undefined ***)(param_1 + 0x144) = &lbl_82197048;
  fn_824DEFB0(param_1 + 0x100);
  return;
}

