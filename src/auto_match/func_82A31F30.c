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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82A37000();
extern int fn_82F691F0();
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_94;


longlong fn_82A31F30(undefined4 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 auStack_b0 [4];
  undefined1 auStack_a0 [12];
  uint uStack_94;
  int aiStack_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  ulonglong uStack_68;
  
  uStack_78 = 0x40;
  uStack_80 = 0;
  uStack_7c = param_1;
  lVar2 = NtOpenFile(auStack_b0,0x100003,&uStack_80,auStack_a0,0,0x18);
  if ((int)lVar2 < 0) {
    return lVar2;
  }
  lVar2 = NtQueryVolumeInformationFile(auStack_b0[0],auStack_a0,aiStack_90,8,4);
  if ((lVar2 < 0) ||
     (lVar2 = NtDeviceIoControlFile(auStack_b0[0],0,0,0,auStack_a0,0x70000,0,0), lVar2 < 0)) {
    NtClose(auStack_b0[0]);
    return lVar2;
  }
  lVar2 = NtDeviceIoControlFile(auStack_b0[0],0,0,0,auStack_a0,0x74004,0,0);
  if (-1 < (int)lVar2) {
    if (uStack_68 == 0) {
      lVar2 = -0x3fffffcc;
    }
    if (-1 < (int)lVar2) {
      uVar1 = (ulonglong)uStack_94 + 0xfff & 0xfffff000;
      if ((param_2 & 0xffffffff) < uVar1) {
        param_2 = uVar1;
      }
      uVar4 = 0x1000;
      if (0x1000 < uVar1) {
        uVar4 = uVar1;
      }
      if (uVar4 < uStack_68) {
        param_2 = param_2 & 0xffffffff;
        uVar3 = ((longlong)uStack_68 / (longlong)param_2 & 0xffffffffU) + 1;
        trapDoubleWordImmediate(6,param_2,0);
        trapDoubleWordImmediate(5,param_2 & ~((uStack_68 << 1 | uStack_68 >> 0x3f) - 1),0xffff);
        if (((uVar3 & 0xffffffff) < 0xfff0) && (aiStack_90[0] != 0x46)) {
          lVar2 = (uVar3 & 0x7fffffff) << 1;
        }
        else {
          lVar2 = (uVar3 & 0x3fffffff) << 2;
        }
        uVar3 = (lVar2 + uVar1) - 1 & ~(uVar1 - 1) & 0xffffffff;
        if ((uVar3 <= uStack_68 - uVar4) && (param_2 <= (uStack_68 - uVar4) - uVar3)) {
          lVar2 = fn_82A37000(0,uVar1);
          if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(lVar2,0,uVar1);
          }
          lVar2 = -0x3fffff66;
          goto LAB_82a32070;
        }
      }
      lVar2 = -0x3fffff81;
    }
  }
LAB_82a32070:
  NtClose(auStack_b0[0]);
  return lVar2;
}

