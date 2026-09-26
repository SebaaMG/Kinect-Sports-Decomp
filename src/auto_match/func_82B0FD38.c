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
extern int fn_82AA64F8();
extern int fn_82AA66A8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B0FD38(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar6;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  ulonglong uStack00000048;
  
  uVar6 = *(uint *)(param_2 + 8);
  uStack00000048 = (ulonglong)uVar6;
  uVar2 = uVar6 >> 7 & 0x7f;
  if (uVar2 < 0x6e) {
    if (0x6b < uVar2) {
LAB_82b0fdb4:
      if (2 < (uVar6 & 0x1e)) {
        uVar3 = 0x12c0;
        goto fn_82AA66A8;
      }
      uVar6 = *(uint *)(param_2 + 0x10) & 0xfff8ffff | 0x10000;
      goto LAB_82b0fd8c;
    }
    if (0x14 < uVar2) {
      if (uVar2 < 0x19) goto LAB_82b0fdb4;
      if (0x3e < uVar2) {
        if (uVar2 < 0x43) goto LAB_82b0fdb4;
        if ((0x5f < uVar2) && (uVar2 < 0x62)) goto LAB_82b0fd80;
      }
    }
LAB_82b0fdf0:
    if ((uVar2 < 0x20) || (bVar1 = true, 0x52 < uVar2)) {
      bVar1 = false;
    }
    if (bVar1) goto LAB_82b0fd80;
    uVar6 = uVar6 >> 1 & 0xf;
    if (uVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x20 - LZCOUNT(uVar6);
    }
    *(uint *)(param_2 + 0x10) =
         (uint)((uVar5 & 0xffffffff) << 0x10) & 0x70000 | *(uint *)(param_2 + 0x10) & 0xfff8ffff;
  }
  else {
    if (uVar2 != 0x6e) {
      if ((uVar2 == 0x71) || (uVar2 == 0x7c)) {
        uVar3 = 0x12c0;
        goto fn_82AA66A8;
      }
      goto LAB_82b0fdf0;
    }
LAB_82b0fd80:
    uVar6 = *(uint *)(param_2 + 0x10) & 0xfff8ffff | 0x40000;
LAB_82b0fd8c:
    *(uint *)(param_2 + 0x10) = uVar6;
  }
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x74) + 1;
  uStack00000048 = ((ulonglong)*(ushort *)(param_2 + 0x10) & 7) + lVar4;
  if ((uStack00000048 & 0xffffffff) < 0x10000) {
    *(int *)(param_1 + 0x74) = (int)uStack00000048 + -1;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800000;
    *(short *)(param_2 + 0x12) = (short)lVar4;
    return;
  }
  uVar3 = 0xdc8;
fn_82AA66A8:
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
                    /* WARNING: Subroutine does not return */
  fn_82AA64F8(param_1,uVar3,&stack0x00000020);
}

