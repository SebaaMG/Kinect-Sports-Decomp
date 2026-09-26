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
extern int fn_8268ACE8();
extern int fn_8268B508();
extern int fn_8268BEA8();
extern int fn_826BCF78();
extern int fn_8278CF00();
extern int fn_82F66570();


void fn_8278D128(int param_1,undefined2 *param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined2 *puVar6;
  
  if (param_3 == 0xffffffff) {
    param_3 = thunk_FUN_82f64ce0(param_2);
  }
  if ((*(ushort *)(param_1 + 0x2a) >> 0xb & 1) != 0) {
    uVar2 = fn_8268ACE8((uint *)(param_1 + 8));
    if (uVar2 == param_3) {
      uVar2 = 0;
      puVar6 = param_2;
      if (param_3 != 0) {
        do {
          uVar1 = *puVar6;
          iVar3 = fn_826BCF78(*(undefined1 *)
                                     ((*(uint *)(param_1 + 8) & 0xfffffffc) + uVar2 + 8));
          iVar4 = fn_826BCF78(uVar1);
          if (iVar3 != iVar4) goto LAB_8278d1d0;
          uVar2 = uVar2 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar2 < param_3);
      }
    }
    else {
LAB_8278d1d0:
      fn_8278CF00(param_1);
    }
  }
  fn_8268BEA8(param_1 + 8);
  fn_8268B508(param_1 + 8,param_2,param_3);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 4;
  iVar3 = fn_82F66570(((ulonglong)*(uint *)(param_1 + 8) & 0xfffffffc) + 8,0x2c);
  if (iVar3 == 0) {
    uVar5 = *(ushort *)(param_1 + 0x2a) | 0x1000;
  }
  else {
    uVar5 = *(ushort *)(param_1 + 0x2a) & 0xefff;
  }
  *(ushort *)(param_1 + 0x2a) = uVar5;
  return;
}

