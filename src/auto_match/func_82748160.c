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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT17(h,l) ((U64)((((U8)(h)) << 56) | ((U64)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_80;
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82713EE8();
extern unsigned int uStack_50;
extern unsigned int uStack_60;
extern unsigned int uStack_70;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;


undefined8 fn_82748160(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar6;
  undefined8 uVar5;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined8 uStack_70;
  double dStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined8 uStack_50;
  double dStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  pcVar7 = "redMultiplier";
  pcVar9 = *(char **)*param_3;
  pcVar8 = pcVar9;
  do {
    cVar1 = *pcVar8;
    cVar2 = *pcVar7;
    if (cVar1 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    dStack_c8 = (double)*(float *)(param_1 + 0x20);
    uStack_d0 = CONCAT17(3,(((U64)(uStack_d0) >> 8) & 0xFFFFFFFFFFFFFF));
    fn_82695FA0(param_4,&uStack_d0);
    puVar6 = &uStack_d0;
  }
  else {
    pcVar7 = "greenMultiplier";
    pcVar8 = pcVar9;
    do {
      cVar1 = *pcVar8;
      cVar2 = *pcVar7;
      if (cVar1 == '\0') break;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      dStack_68 = (double)*(float *)(param_1 + 0x28);
      uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFF) << 0))) | ((((U64)(3)) & ((U64)0xFF)) << 0));
      fn_82695FA0(param_4,&uStack_70);
      puVar6 = &uStack_70;
    }
    else {
      pcVar7 = "blueMultiplier";
      pcVar8 = pcVar9;
      do {
        cVar1 = *pcVar8;
        cVar2 = *pcVar7;
        if (cVar1 == '\0') break;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        dStack_48 = (double)*(float *)(param_1 + 0x30);
        uStack_50 = ((((U64)(uStack_50)) & (~(((U64)0xFF) << 0))) | ((((U64)(3)) & ((U64)0xFF)) << 0));
        fn_82695FA0(param_4,&uStack_50);
        puVar6 = &uStack_50;
      }
      else {
        pcVar7 = "alphaMultiplier";
        pcVar8 = pcVar9;
        do {
          cVar1 = *pcVar8;
          cVar2 = *pcVar7;
          if (cVar1 == '\0') break;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          dStack_88 = (double)*(float *)(param_1 + 0x38);
          uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFF) << 0))) | ((((U64)(3)) & ((U64)0xFF)) << 0));
          fn_82695FA0(param_4,&uStack_90);
          puVar6 = &uStack_90;
        }
        else {
          pcVar7 = "redOffset";
          pcVar8 = pcVar9;
          do {
            cVar1 = *pcVar8;
            cVar2 = *pcVar7;
            if (cVar1 == '\0') break;
            pcVar8 = pcVar8 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            dStack_58 = (double)*(float *)(param_1 + 0x24);
            uStack_60 = ((((U64)(uStack_60)) & (~(((U64)0xFF) << 0))) | ((((U64)(3)) & ((U64)0xFF)) << 0));
            fn_82695FA0(param_4,&uStack_60);
            puVar6 = &uStack_60;
          }
          else {
            pcVar7 = "greenOffset";
            pcVar8 = pcVar9;
            do {
              cVar1 = *pcVar8;
              cVar2 = *pcVar7;
              if (cVar1 == '\0') break;
              pcVar8 = pcVar8 + 1;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              dStack_b8 = (double)*(float *)(param_1 + 0x2c);
              uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFF) << 0))) | ((((U64)(3)) & ((U64)0xFF)) << 0));
              fn_82695FA0(param_4,&uStack_c0);
              puVar6 = &uStack_c0;
            }
            else {
              pcVar7 = "blueOffset";
              pcVar8 = pcVar9;
              do {
                cVar1 = *pcVar8;
                cVar2 = *pcVar7;
                if (cVar1 == '\0') break;
                pcVar8 = pcVar8 + 1;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                dStack_a8 = (double)*(float *)(param_1 + 0x34);
                uStack_b0 = ((((U64)(uStack_b0)) & (~(((U64)0xFF) << 0))) | ((((U64)(3)) & ((U64)0xFF)) << 0));
                fn_82695FA0(param_4,&uStack_b0);
                puVar6 = &uStack_b0;
              }
              else {
                pcVar7 = "alphaOffset";
                pcVar8 = pcVar9;
                do {
                  cVar1 = *pcVar8;
                  cVar2 = *pcVar7;
                  if (cVar1 == '\0') break;
                  pcVar8 = pcVar8 + 1;
                  pcVar7 = pcVar7 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 == cVar2) {
                  dStack_98 = (double)*(float *)(param_1 + 0x3c);
                  uStack_a0 = ((((U64)(uStack_a0)) & (~(((U64)0xFF) << 0))) | ((((U64)(3)) & ((U64)0xFF)) << 0));
                  fn_82695FA0(param_4,&uStack_a0);
                  puVar6 = &uStack_a0;
                }
                else {
                  pcVar8 = "rgb";
                  do {
                    cVar1 = *pcVar9;
                    cVar2 = *pcVar8;
                    if (cVar1 == '\0') break;
                    pcVar9 = pcVar9 + 1;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar1 == cVar2);
                  if (cVar1 != cVar2) {
                    uVar5 = fn_82713EE8(param_1,param_2,param_3,param_4);
                    return uVar5;
                  }
                  uStack_d0 = ((((U64)(uStack_d0)) & (~(((U64)0xFF) << 56))) | ((((U64)((undefined1)(longlong)*(float *)(param_1 + 0x2c))) & ((U64)0xFF)) << 56));
                  uVar3 = (undefined1)uStack_d0;
                  uStack_d0 = ((((U64)(uStack_d0)) & (~(((U64)0xFF) << 56))) | ((((U64)((undefined1)(longlong)*(float *)(param_1 + 0x34))) & ((U64)0xFF)) << 56));
                  uVar4 = (undefined1)uStack_d0;
                  uStack_d0 = ((((U64)(uStack_d0)) & (~(((U64)0xFF) << 56))) | ((((U64)((undefined1)(longlong)*(float *)(param_1 + 0x24))) & ((U64)0xFF)) << 56));
                  auStack_20[0] = 0;
                  auStack_30[0] = 0;
                  auStack_40[0] = 0;
                  auStack_80[0] = 3;
                  uStack_d0 = (ulonglong)CONCAT21(CONCAT11((undefined1)uStack_d0,uVar3),uVar4);
                  dStack_78 = (double)uStack_d0;
                  fn_82695FA0(param_4,auStack_80);
                  fn_82696330(auStack_80);
                  fn_82696330(auStack_40);
                  fn_82696330(auStack_30);
                  puVar6 = (undefined8 *)auStack_20;
                }
              }
            }
          }
        }
      }
    }
  }
  fn_82696330(puVar6);
  return 1;
}

