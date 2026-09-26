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
extern unsigned int *auStack_130;
extern unsigned int *auStack_148;
extern unsigned int *auStack_150;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82AA8998();
extern int fn_82AA89B8();
extern int fn_82AA8A98();
extern int fn_82AA8B50();
extern int fn_82AA8BD0();
extern int fn_82D7E470();
extern unsigned int iStack_10c;
extern unsigned int iStack_11c;
extern unsigned int uStack_d6;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;


undefined8
fn_82A999C8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
             uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 auStack_150 [2];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [8];
  short sStack_128;
  int iStack_11c;
  int iStack_10c;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ushort uStack_d6;
  short sStack_d4;
  undefined1 *puStack_48;
  
  puStack_48 = auStack_148;
  iVar1 = fn_82AA8998(param_1,param_2,auStack_130);
  if ((((iVar1 != 0) || (iVar1 = fn_82AA89B8(auStack_130), iVar1 != 0)) ||
      (sStack_128 != 0x19a)) || (iStack_11c != 1)) {
    return 0xffffffff80004005;
  }
  if (iStack_10c != 0) {
    iVar1 = fn_8265C940(iStack_10c,0x24870000);
    if (iVar1 == 0) {
      return 0xffffffff8007000e;
    }
    iVar2 = fn_82AA8A98(auStack_130,iVar1);
    if (iVar2 != 0) {
      return 0xffffffff80004005;
    }
    *(undefined1 *)(iVar1 + iStack_10c + -1) = 0;
    fn_8265C990(iVar1,0x24870000);
  }
  auStack_150[0] = 0;
  iVar1 = fn_82AA8B50(auStack_130,auStack_150);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  iVar1 = fn_82AA8BD0(auStack_130,0);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  iVar1 = fn_82D7E470(auStack_130);
  if (iVar1 != 0) {
    return 0xffffffff80004005;
  }
  *param_3 = uStack_e4;
  *param_4 = uStack_e8;
  if (sStack_d4 == 1) {
    if (uStack_d6 < 9) {
      uVar3 = 0x28000002;
    }
    else {
      uVar3 = 0x28000058;
    }
    goto LAB_82a99b60;
  }
  if (sStack_d4 == 2) {
    if (uStack_d6 < 9) {
      uVar3 = 0x800004a;
    }
    else {
      uVar3 = 0x2d200099;
    }
    goto LAB_82a99b60;
  }
  if (sStack_d4 == 3) {
    if (8 < uStack_d6) {
LAB_82a99b58:
      uVar3 = 0x1a20005a;
      goto LAB_82a99b60;
    }
    uVar3 = 0x2a200000;
  }
  else {
    if (8 < uStack_d6) goto LAB_82a99b58;
    uVar3 = 0x1a200000;
  }
  uVar3 = uVar3 | 0x86;
LAB_82a99b60:
  *param_5 = uVar3;
  return 0;
}

