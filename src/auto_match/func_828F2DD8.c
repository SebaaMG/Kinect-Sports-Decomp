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
extern unsigned int *auStack_4a0;
extern unsigned int *auStack_4c0;
extern unsigned int *auStack_550;
extern int fn_8291C788();
extern int fn_8291CAB8();
extern int fn_82920050();
extern int fn_82F691F0();
extern unsigned int iStack_500;
extern unsigned int iStack_504;
extern unsigned int iStack_548;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_53c;
extern unsigned int uStack_540;
extern unsigned int uStack_544;


undefined8
fn_828F2DD8(int param_1,ulonglong param_2,ulonglong param_3,uint param_4,uint param_5,uint param_6
             ,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uStack0000002c;
  uint uStack00000034;
  uint uStack0000003c;
  undefined4 uStack00000044;
  undefined1 *in_stack_0000007c;
  int in_stack_0000008c;
  int in_stack_00000094;
  undefined1 auStack_550 [8];
  int iStack_548;
  uint uStack_544;
  uint uStack_540;
  uint uStack_53c;
  int iStack_504;
  int iStack_500;
  undefined1 auStack_4c0 [32];
  undefined1 auStack_4a0 [1184];
  
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  fn_8291C788(auStack_550);
  if (((param_1 == 0) || ((param_2 & 0xffffffff) == 0)) || ((param_3 & 0xffffffff) == 0)) {
    fn_8291CAB8(auStack_550);
    return 0xffffffff8876086c;
  }
  if (in_stack_00000094 == 0) {
    uVar3 = 0xffffffff8876086c;
    goto LAB_828f2e68;
  }
  if ((in_stack_0000007c == (undefined1 *)0x0) && (in_stack_0000008c == -1)) {
    in_stack_0000007c = auStack_4c0;
  }
  uVar3 = fn_82920050(auStack_550,param_2,param_3,in_stack_0000007c,1);
  if ((int)uVar3 < 0) goto LAB_828f2e68;
  if (in_stack_0000008c == -1) {
    in_stack_0000008c = *(int *)(in_stack_0000007c + 0x14);
  }
  for (; iStack_504 != 0; iStack_504 = *(int *)(iStack_504 + 0x4c)) {
  }
  iVar1 = 1;
  if (in_stack_0000008c == 0x12) {
    if (iStack_500 != 0) {
      do {
        iStack_500 = *(int *)(iStack_500 + 0x50);
        iVar1 = iVar1 + 1;
      } while (iStack_500 != 0);
      if (iVar1 == 6) goto LAB_828f2f38;
    }
    uVar3 = 0xffffffff80004005;
  }
  else {
LAB_828f2f38:
    if ((param_4 == 0xfffffffe) || ((int)uStack_544 < 0)) {
      uStack0000002c = uStack_544;
    }
    else if ((param_4 == 0) || (param_4 == 0xffffffff)) {
      uStack0000002c = 1;
      uVar2 = 1;
      if (1 < uStack_544) {
        do {
          uStack0000002c = uVar2 << 1;
          uVar2 = uStack0000002c;
        } while (uStack0000002c < uStack_544);
      }
    }
    if ((param_5 == 0xfffffffe) || ((int)uStack_540 < 0)) {
      uStack00000034 = uStack_540;
    }
    else if ((param_5 == 0) || (param_5 == 0xffffffff)) {
      uStack00000034 = 1;
      uVar2 = 1;
      if (1 < uStack_540) {
        do {
          uStack00000034 = uVar2 << 1;
          uVar2 = uStack00000034;
        } while (uStack00000034 < uStack_540);
      }
    }
    if ((param_6 == 0xfffffffe) || ((int)uStack_53c < 0)) {
      uStack0000003c = uStack_53c;
    }
    else if ((param_6 == 0) || (param_6 == 0xffffffff)) {
      uStack0000003c = 1;
      uVar2 = 1;
      if (1 < uStack_53c) {
        do {
          uStack0000003c = uVar2 << 1;
          uVar2 = uStack0000003c;
        } while (uStack0000003c < uStack_53c);
      }
    }
    if (iStack_548 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_4a0,0xff,0x400);
    }
    uVar3 = 0xffffffff80004001;
  }
LAB_828f2e68:
  fn_8291CAB8(auStack_550);
  return uVar3;
}

