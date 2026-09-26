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
extern int fn_829B0BF8();
extern int fn_829B5088();
extern int fn_829B5130();
extern unsigned int lbl_82054B24;
extern unsigned int lbl_82054B40;


void fn_829B98E0(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  int iVar6;
  uint uVar8;
  ulonglong uVar7;
  uint uVar9;
  
  *(undefined4 *)(param_1 + 0x568) = 0;
  fn_829B0BF8();
  if (*(char *)(param_1 + 0x613) == '\0') {
    uVar8 = *(uint *)(param_1 + 0x5b8);
    uVar9 = *(uint *)(param_1 + 0x5c8);
    *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_1 + 0x5bc);
    *(uint *)(param_1 + 0x5d0) = uVar8;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x5bc);
    if ((*(uint *)(param_1 + 0x560) & 2) == 0) {
      uVar8 = uVar8 + 7 >> 3;
    }
    *(uint *)(param_1 + 0x5c0) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x5b8);
    iVar6 = (uint)*(byte *)(param_1 + 0x614) * 4;
    uVar7 = (ulonglong)*(uint *)(&lbl_82054B40 + iVar6);
    trapWord(6,uVar7,0);
    iVar6 = (int)(((((ulonglong)uVar8 - (ulonglong)*(uint *)(&lbl_82054B24 + iVar6)) + uVar7) - 1 &
                  0xffffffff) / uVar7);
    *(int *)(param_1 + 0x5d0) = iVar6;
    uVar9 = (uint)*(byte *)(param_1 + 0x619) * iVar6 + 7 >> 3;
  }
  uVar3 = *(uint *)(param_1 + 0x560);
  *(uint *)(param_1 + 0x5cc) = uVar9 + 1;
  uVar7 = (ulonglong)*(byte *)(param_1 + 0x619);
  if (((uVar3 & 4) != 0) && (*(byte *)(param_1 + 0x617) < 8)) {
    uVar7 = 8;
  }
  uVar9 = (uint)uVar7;
  if ((uVar3 & 0x1000) != 0) {
    cVar2 = *(char *)(param_1 + 0x616);
    if (cVar2 == '\x03') {
      uVar9 = (-(uint)(*(short *)(param_1 + 0x60a) != 0) & 8) + 0x18;
    }
    else if (cVar2 == '\0') {
      if (uVar9 < 8) {
        uVar7 = 8;
      }
      uVar9 = (uint)uVar7;
      if (*(short *)(param_1 + 0x60a) != 0) {
        uVar9 = (uint)(uVar7 << 1);
      }
    }
    else if ((cVar2 == '\x02') && (*(short *)(param_1 + 0x60a) != 0)) {
      uVar9 = (uint)(uVar7 << 2) / 3;
    }
  }
  if ((uVar3 & 0x8000) == 0) goto LAB_829b9a70;
  cVar2 = *(char *)(param_1 + 0x616);
  if (cVar2 != '\x03') {
    if (cVar2 != '\0') {
      if ((cVar2 == '\x02') && (bVar1 = 0x20 < uVar9, uVar9 = 0x20, bVar1)) {
        uVar9 = 0x40;
      }
      goto LAB_829b9a70;
    }
    if (uVar9 < 9) {
      uVar9 = 0x10;
      goto LAB_829b9a70;
    }
  }
  uVar9 = 0x20;
LAB_829b9a70:
  uVar5 = fn_829B5088(param_1,(((longlong)(int)(uVar8 + 7 & 0xfffffff8) * (longlong)(int)uVar9
                                      + 7U & 0xffffffff) >> 3) + (longlong)((int)(uVar9 + 7) >> 3) +
                                    1);
  *(undefined4 *)(param_1 + 0x5dc) = uVar5;
  uVar4 = fn_829B5088(param_1,(ulonglong)*(uint *)(param_1 + 0x5c8) + 1);
  *(int *)(param_1 + 0x5d8) = (int)uVar4;
  fn_829B5130(param_1,uVar4,0,(ulonglong)*(uint *)(param_1 + 0x5c8) + 1);
  *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 0x40;
  return;
}

