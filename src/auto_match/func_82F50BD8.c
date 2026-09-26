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
extern int fn_82BA02A8();
extern int fn_82F4EC58();
extern int fn_82F50AB0();
extern int fn_82F526B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821657C0;
extern unsigned int lbl_821657D0;
extern unsigned int lbl_821657D4;
extern unsigned int lbl_821657D8;
extern unsigned int lbl_821657DC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82F50BD8(int param_1)

{
  undefined4 *puVar1;
  int in_r0;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  fn_82BA02A8(param_1 + 0xce0);
  uVar2 = fn_82F526B8(0x1920);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82F4EC58(uVar2,param_1);
  }
  *(undefined4 *)(param_1 + 0xcf0) = uVar3;
  puVar1 = (undefined4 *)((uint)(&lbl_821657C0 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(undefined4 *)(param_1 + 0xcec) = lbl_82002AE0;
  puVar1 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  fn_82F50AB0(param_1);
  uVar5 = lbl_821657DC;
  uVar4 = lbl_821657D8;
  uVar3 = lbl_821657D4;
  puVar1 = (undefined4 *)(param_1 + 0xcd0U & 0xfffffff0);
  *puVar1 = lbl_821657D0;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  return param_1;
}

