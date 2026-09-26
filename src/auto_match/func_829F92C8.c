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
extern unsigned int *auStack_60;
extern int fn_82630040();
extern int fn_82630108();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82647308();
extern int fn_82647578();
extern int fn_82648AF0();
extern int fn_8264B730();
extern int fn_829F7FA8();
extern int fn_82F691F0();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_829F92C8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar5;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  param_1[0x23] = param_2[2] & 1;
  uVar1 = *param_2;
  auStack_60[0] = 0;
  uStack_50 = 0;
  *param_1 = uVar1;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  fn_82648AF0(uVar1,auStack_60);
  iVar5 = fn_82647308(0,2,0,0,0,param_1 + 1);
  if (-1 < iVar5) {
    fn_82647578(param_1[1]);
    uVar6 = 0;
    puVar7 = param_1 + 2;
    do {
      lVar2 = fn_8264B730(0x3000,0);
      *puVar7 = (int)lVar2;
      if ((int)-(uint)(lVar2 == 0) < 0) goto LAB_829f97fc;
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 < 2);
    param_1[4] = 0;
    lVar2 = fn_82631488(0xffffffff8207d428);
    param_1[0x10] = (int)lVar2;
    if (-1 < (int)-(uint)(lVar2 == 0)) {
      lVar2 = fn_82631488(0xffffffff8207dbd8);
      param_1[0x12] = (int)lVar2;
      if (-1 < (int)-(uint)(lVar2 == 0)) {
        lVar2 = fn_82631488(0xffffffff8207df40);
        param_1[0x11] = (int)lVar2;
        if (-1 < (int)-(uint)(lVar2 == 0)) {
          if (param_1[0x23] == 0) {
            uVar3 = 0xffffffff8207b668;
            if ((param_2[2] & 0x100) == 0) {
              uVar3 = 0xffffffff8207ab20;
            }
            lVar2 = fn_82631488(uVar3);
            param_1[7] = (int)lVar2;
            if ((int)-(uint)(lVar2 == 0) < 0) goto LAB_829f97fc;
            uVar3 = 0xffffffff8207e4e0;
          }
          else {
            lVar2 = fn_82631488(0xffffffff8207a690);
            param_1[7] = (int)lVar2;
            if ((int)-(uint)(lVar2 == 0) < 0) goto LAB_829f97fc;
            uVar3 = 0xffffffff8207e180;
          }
          lVar2 = fn_82631488(uVar3);
          param_1[8] = (int)lVar2;
          if (-1 < (int)-(uint)(lVar2 == 0)) {
            lVar2 = fn_82631488(0xffffffff8207c2c8);
            param_1[9] = (int)lVar2;
            if (-1 < (int)-(uint)(lVar2 == 0)) {
              lVar2 = fn_82631488(0xffffffff8207ccd0);
              param_1[10] = (int)lVar2;
              if (-1 < (int)-(uint)(lVar2 == 0)) {
                lVar2 = fn_82631488(0xffffffff8207d1f8);
                param_1[0xb] = (int)lVar2;
                if (-1 < (int)-(uint)(lVar2 == 0)) {
                  lVar2 = fn_82631830(0xffffffff8207a338);
                  param_1[5] = (int)lVar2;
                  if (-1 < (int)-(uint)(lVar2 == 0)) {
                    lVar2 = fn_82631830(0xffffffff8207a558);
                    param_1[6] = (int)lVar2;
                    if (-1 < (int)-(uint)(lVar2 == 0)) {
                      uVar4 = fn_82630040(0x144,0,0);
                      param_1[0x13] = (int)uVar4;
                      if (-1 < (int)-(uint)(uVar4 == 0)) {
                        uVar3 = fn_82630108(uVar4 & 0xffffffff,0,0,0);
                    /* WARNING: Subroutine does not return */
                        fn_82F691F0(uVar3,0,0x144);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_829f97fc:
  fn_829F7FA8(param_1);
  return 0xe;
}

