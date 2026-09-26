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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_120;
extern unsigned int *auStack_200;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_3c0;
extern int fn_82AF6F10();
extern int fn_82B02C70();
extern int fn_82B82D28();
extern int fn_82B8C970();
extern unsigned int iStack_3dc;
extern unsigned int uStack_104;
extern unsigned int uStack_118;
extern unsigned int uStack_130;
extern unsigned int uStack_13c;
extern unsigned int uStack_160;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1f8;
extern unsigned int uStack_210;
extern unsigned int uStack_21c;
extern unsigned int uStack_240;
extern unsigned int uStack_2c4;
extern unsigned int uStack_2d8;
extern unsigned int uStack_2f0;
extern unsigned int uStack_2fc;
extern unsigned int uStack_320;
extern unsigned int uStack_3a4;
extern unsigned int uStack_3b8;
extern unsigned int uStack_3d0;
extern unsigned int uStack_3d4;
extern unsigned int uStack_3d8;
extern unsigned int uStack_3e0;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_80;


ulonglong fn_82B02F98(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 uStack_3e0;
  int iStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  int aiStack_3cc [3];
  undefined4 auStack_3c0 [2];
  undefined4 uStack_3b8;
  uint uStack_3a4;
  undefined4 uStack_320;
  undefined4 uStack_2fc;
  undefined8 uStack_2f0;
  undefined4 auStack_2e0 [2];
  undefined4 uStack_2d8;
  uint uStack_2c4;
  undefined4 uStack_240;
  undefined4 uStack_21c;
  undefined8 uStack_210;
  undefined4 auStack_200 [2];
  undefined4 uStack_1f8;
  uint uStack_1e4;
  undefined4 uStack_160;
  undefined4 uStack_13c;
  undefined8 uStack_130;
  undefined4 auStack_120 [2];
  undefined4 uStack_118;
  uint uStack_104;
  undefined4 uStack_80;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  
  fn_82B82D28(*(undefined4 *)(param_3 + 0x2c),param_4,aiStack_3cc,&uStack_3d8,&uStack_3d4,
                    *(undefined4 *)(param_3 + 0x1c),0,1);
  fn_82B82D28(*(undefined4 *)(param_3 + 0x30),param_4,&iStack_3dc,&uStack_3e0,&uStack_3d0,
                    *(undefined4 *)(param_3 + 0x1c),0,1);
  auStack_120[0] = 0;
  auStack_2e0[0] = 0;
  auStack_200[0] = 0;
  auStack_3c0[0] = 0;
  uStack_118 = 0;
  uStack_2d8 = 0;
  uStack_1f8 = 0;
  uStack_3b8 = 0;
  uStack_104 = 0;
  uStack_80 = 0;
  uStack_5c = 0;
  uStack_2c4 = 0;
  uStack_240 = 0;
  uStack_21c = 0;
  uStack_1e4 = 0;
  uStack_160 = 0;
  uStack_13c = 0;
  uStack_3a4 = 0;
  uStack_320 = 0;
  uStack_2fc = 0;
  uStack_50 = 0;
  uStack_210 = 0;
  uStack_130 = 0;
  puVar1 = *(uint **)(param_2 + 0x2c);
  puVar2 = *(uint **)(param_2 + 0x30);
  uStack_2f0 = 0;
  if (((CONCAT44(uStack_3d4,uStack_3d4) & 0xfffffffffffffffb) == 0) &&
     ((*(uint *)(aiStack_3cc[0] + 8) & 0x3f80) == 0x80)) {
    fn_82AF6F10(param_1,param_3,aiStack_3cc[0],uStack_3d8,uStack_3d4,puVar1[3],0,
                      *puVar1 & 0x1f);
    fn_82AF6F10(param_1,param_3,aiStack_3cc[0],uStack_3d8,uStack_3d4,puVar2[3],0,
                      *puVar2 & 0x1f);
  }
  if (((CONCAT44(uStack_3d0,uStack_3d0) & 0xfffffffffffffffb) == 0) &&
     ((*(uint *)(iStack_3dc + 8) & 0x3f80) == 0x80)) {
    fn_82AF6F10(param_1,param_3,iStack_3dc,uStack_3e0,uStack_3d0,puVar1[3],0,*puVar1 & 0x1f);
    fn_82AF6F10(param_1,param_3,iStack_3dc,uStack_3e0,uStack_3d0,puVar2[3],0,*puVar2 & 0x1f);
  }
  uVar3 = *puVar1 >> 0x19 & 7;
  if ((uStack_104 < 2) || (4 < (uStack_104 + uVar3) - 1)) {
    if ((uStack_2c4 < 2) || (4 < (uStack_2c4 + uVar3) - 1)) {
      if ((uStack_1e4 < 2) || (4 < (uStack_1e4 + uVar3) - 1)) {
        if ((uStack_3a4 < 2) || (4 < (uStack_3a4 + uVar3) - 1)) goto LAB_82b031e8;
        puVar5 = auStack_3c0;
      }
      else {
        puVar5 = auStack_200;
      }
    }
    else {
      puVar5 = auStack_2e0;
    }
  }
  else {
    puVar5 = auStack_120;
  }
  uVar4 = fn_82B02C70(param_1,puVar5,param_2,param_4);
  if ((uVar4 & 0xffffffff) != 0) {
    return uVar4;
  }
LAB_82b031e8:
  if ((((U64)(uStack_2f0) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82B8C970(param_1,auStack_3c0[0],(((U64)(uStack_2f0) >> 32) & 0xFFFFFFFF));
  }
  if ((((U64)(uStack_130) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82B8C970(param_1,auStack_200[0],(((U64)(uStack_130) >> 32) & 0xFFFFFFFF));
  }
  if ((((U64)(uStack_210) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82B8C970(param_1,auStack_2e0[0],(((U64)(uStack_210) >> 32) & 0xFFFFFFFF));
  }
  if ((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82B8C970(param_1,auStack_120[0],(((U64)(uStack_50) >> 32) & 0xFFFFFFFF));
  }
  return 0;
}

