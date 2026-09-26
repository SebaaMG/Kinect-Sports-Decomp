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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8267C4F0();
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826A7398();
extern int fn_82713EE8();
extern int fn_8271D378();
extern int fn_8274A8E0();
extern int fn_8274A960();
extern unsigned int iStack_11c;
extern unsigned int iStack_224;
extern unsigned int iStack_228;
extern unsigned int iStack_230;
extern unsigned int iStack_cc;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_10c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_194;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1c4;
extern unsigned int uStack_1c8;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1f4;
extern unsigned int uStack_1f8;
extern unsigned int uStack_1fc;
extern unsigned int uStack_200;
extern unsigned int uStack_204;
extern unsigned int uStack_208;
extern unsigned int uStack_20c;
extern unsigned int uStack_210;
extern unsigned int uStack_214;
extern unsigned int uStack_218;
extern unsigned int uStack_21c;
extern unsigned int uStack_220;
extern unsigned int uStack_22c;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_d8;
extern unsigned int uStack_ec;
extern unsigned int uStack_fc;


undefined8 fn_8274B010(undefined8 param_1,int param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  undefined8 uVar3;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 uVar11;
  int iStack_230;
  uint uStack_22c;
  int iStack_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 auStack_120 [4];
  int iStack_11c;
  undefined1 auStack_110 [4];
  undefined1 uStack_10c;
  undefined1 auStack_100 [4];
  undefined1 uStack_fc;
  undefined1 auStack_f0 [4];
  undefined1 uStack_ec;
  undefined1 auStack_e0 [8];
  undefined4 uStack_d8;
  undefined1 auStack_d0 [4];
  int iStack_cc;
  undefined1 auStack_c0 [4];
  char cStack_bc;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined1 auStack_90 [4];
  char cStack_8c;
  undefined1 auStack_80 [4];
  char cStack_7c;
  undefined1 auStack_70 [4];
  char cStack_6c;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_50 [4];
  undefined1 uStack_4c;
  
  lVar2 = fn_826A7398(param_2);
  piVar4 = (int *)fn_8274A8E0(lVar2 + 8);
  uVar11 = 0;
  uStack_22c = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4,&uStack_22c);
  }
  if (*(byte *)(param_2 + 0x7c) < 7) {
    fn_82681728(&iStack_230,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff82012dc4);
    cVar7 = fn_8271D378(&iStack_230,param_3,0);
    lVar2 = (ulonglong)*(uint *)(iStack_230 + 8) - 1;
    *(int *)(iStack_230 + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(iStack_230);
    }
    if (cVar7 == '\0') {
      fn_82681728(&iStack_230,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff82012db0)
      ;
      cVar7 = fn_8271D378(&iStack_230,param_3,0);
      lVar2 = (ulonglong)*(uint *)(iStack_230 + 8) - 1;
      *(int *)(iStack_230 + 8) = (int)lVar2;
      if (lVar2 == 0) {
        fn_826944C8(iStack_230);
      }
      if (cVar7 == '\0') {
        fn_82681728(&iStack_230,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,
                          0xffffffff82012ef0);
        cVar7 = fn_8271D378(&iStack_230,param_3,0);
        lVar2 = (ulonglong)*(uint *)(iStack_230 + 8) - 1;
        *(int *)(iStack_230 + 8) = (int)lVar2;
        if (lVar2 == 0) {
          fn_826944C8(iStack_230);
        }
        if (cVar7 == '\0') {
          fn_82681728(&iStack_230,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,
                            0xffffffff82012f1c);
          cVar7 = fn_8271D378(&iStack_230,param_3,0);
          lVar2 = (ulonglong)*(uint *)(iStack_230 + 8) - 1;
          *(int *)(iStack_230 + 8) = (int)lVar2;
          if (lVar2 == 0) {
            fn_826944C8(iStack_230);
          }
          if (cVar7 == '\0') {
            fn_82681728(&iStack_230,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,
                              0xffffffff82012ee8);
            cVar7 = fn_8271D378(&iStack_230,param_3,0);
            lVar2 = (ulonglong)*(uint *)(iStack_230 + 8) - 1;
            *(int *)(iStack_230 + 8) = (int)lVar2;
            if (lVar2 == 0) {
              fn_826944C8(iStack_230);
            }
            if (cVar7 == '\0') {
              fn_82681728(&iStack_230,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,
                                0xffffffff82012ea0);
              cVar7 = fn_8271D378(&iStack_230,param_3,0);
              lVar2 = (ulonglong)*(uint *)(iStack_230 + 8) - 1;
              *(int *)(iStack_230 + 8) = (int)lVar2;
              if (lVar2 == 0) {
                fn_826944C8(iStack_230);
              }
              if (cVar7 == '\0') {
                fn_82681728(&iStack_230,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,
                                  0xffffffff82012da0);
                cVar7 = fn_8271D378(&iStack_230,param_3,0);
                lVar2 = (ulonglong)*(uint *)(iStack_230 + 8) - 1;
                *(int *)(iStack_230 + 8) = (int)lVar2;
                if (lVar2 == 0) {
                  fn_826944C8(iStack_230);
                }
                if (cVar7 == '\0') goto LAB_8274b8c0;
                piVar4 = (int *)fn_8274A960(&iStack_228,param_2);
                auStack_d0[0] = 5;
                iStack_cc = *piVar4;
                *(int *)(iStack_cc + 8) = *(int *)(iStack_cc + 8) + 1;
                fn_82695FA0(param_4,auStack_d0);
                fn_82696330(auStack_d0);
                iStack_224 = iStack_228;
                goto LAB_8274b43c;
              }
              if ((piVar4 != (int *)0x0) && ((uStack_22c & 4) == 0)) {
                uVar11 = 1;
              }
              auStack_f0[0] = 2;
              uStack_ec = uVar11;
              fn_82695FA0(param_4,auStack_f0);
              puVar5 = auStack_f0;
            }
            else {
              if ((piVar4 != (int *)0x0) && ((uStack_22c & 1) == 0)) {
                uVar11 = 1;
              }
              auStack_110[0] = 2;
              uStack_10c = uVar11;
              fn_82695FA0(param_4,auStack_110);
              puVar5 = auStack_110;
            }
          }
          else {
            cStack_7c = '\x01' - (piVar4 == (int *)0x0);
            auStack_80[0] = 2;
            fn_82695FA0(param_4,auStack_80);
            puVar5 = auStack_80;
          }
        }
        else {
          iVar6 = fn_826A7398(param_2);
          lVar2 = (**(code **)(*(int *)(iVar6 + 8) + 0xc))((int *)(iVar6 + 8),0x1b);
          if (lVar2 != 0) {
            fn_8267C4F0(lVar2);
          }
          cStack_bc = '\x01' - (lVar2 == 0);
          auStack_c0[0] = 2;
          fn_82695FA0(param_4,auStack_c0);
          puVar5 = auStack_c0;
        }
      }
      else {
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_194 = 0;
        uStack_198 = 0;
        uStack_18c = 1;
        uStack_190 = 1;
        uStack_174 = lbl_82002AE0;
        uStack_17c = 0;
        uStack_178 = lbl_82002AE0;
        uStack_180 = 0;
        uStack_184 = 0;
        uStack_188 = 0;
        uStack_170 = 0;
        piVar4 = (int *)fn_826A7398(param_2);
        (**(code **)(*piVar4 + 0x68))(piVar4,&uStack_1a0);
        auStack_60[0] = 4;
        uStack_58 = uStack_19c;
        fn_82695FA0(param_4,auStack_60);
        puVar5 = auStack_60;
      }
    }
    else {
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_154 = 0;
      uStack_158 = 0;
      uStack_14c = 1;
      uStack_150 = 1;
      uStack_134 = lbl_82002AE0;
      uStack_13c = 0;
      uStack_138 = lbl_82002AE0;
      uStack_140 = 0;
      uStack_144 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      piVar4 = (int *)fn_826A7398(param_2);
      (**(code **)(*piVar4 + 0x68))(piVar4,&uStack_160);
      auStack_e0[0] = 4;
      uStack_d8 = uStack_160;
      fn_82695FA0(param_4,auStack_e0);
      puVar5 = auStack_e0;
    }
  }
  else {
    pcVar8 = "screenResolutionX";
    pcVar10 = *(char **)*param_3;
    pcVar9 = pcVar10;
    do {
      cVar7 = *pcVar9;
      cVar1 = *pcVar8;
      if (cVar7 == '\0') break;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar7 == cVar1);
    if (cVar7 == cVar1) {
      uStack_220 = 0;
      uStack_21c = 0;
      uStack_214 = 0;
      uStack_218 = 0;
      uStack_20c = 1;
      uStack_210 = 1;
      uStack_1f4 = lbl_82002AE0;
      uStack_1fc = 0;
      uStack_1f8 = lbl_82002AE0;
      uStack_200 = 0;
      uStack_204 = 0;
      uStack_208 = 0;
      uStack_1f0 = 0;
      piVar4 = (int *)fn_826A7398(param_2);
      (**(code **)(*piVar4 + 0x68))(piVar4,&uStack_220);
      auStack_a0[0] = 4;
      uStack_98 = uStack_220;
      fn_82695FA0(param_4,auStack_a0);
      puVar5 = auStack_a0;
    }
    else {
      pcVar8 = "screenResolutionY";
      pcVar9 = pcVar10;
      do {
        cVar7 = *pcVar9;
        cVar1 = *pcVar8;
        if (cVar7 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar7 == cVar1);
      if (cVar7 == cVar1) {
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_1d4 = 0;
        uStack_1d8 = 0;
        uStack_1cc = 1;
        uStack_1d0 = 1;
        uStack_1b4 = lbl_82002AE0;
        uStack_1bc = 0;
        uStack_1b8 = lbl_82002AE0;
        uStack_1c0 = 0;
        uStack_1c4 = 0;
        uStack_1c8 = 0;
        uStack_1b0 = 0;
        piVar4 = (int *)fn_826A7398(param_2);
        (**(code **)(*piVar4 + 0x68))(piVar4,&uStack_1e0);
        auStack_b0[0] = 4;
        uStack_a8 = uStack_1dc;
        fn_82695FA0(param_4,auStack_b0);
        puVar5 = auStack_b0;
      }
      else {
        pcVar8 = "hasIME";
        pcVar9 = pcVar10;
        do {
          cVar7 = *pcVar9;
          cVar1 = *pcVar8;
          if (cVar7 == '\0') break;
          pcVar9 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar7 == cVar1);
        if (cVar7 == cVar1) {
          iVar6 = fn_826A7398(param_2);
          lVar2 = (**(code **)(*(int *)(iVar6 + 8) + 0xc))((int *)(iVar6 + 8),0x1b);
          if (lVar2 != 0) {
            fn_8267C4F0(lVar2);
          }
          cStack_8c = '\x01' - (lVar2 == 0);
          auStack_90[0] = 2;
          fn_82695FA0(param_4,auStack_90);
          puVar5 = auStack_90;
        }
        else {
          pcVar8 = "hasAudio";
          pcVar9 = pcVar10;
          do {
            cVar7 = *pcVar9;
            cVar1 = *pcVar8;
            if (cVar7 == '\0') break;
            pcVar9 = pcVar9 + 1;
            pcVar8 = pcVar8 + 1;
          } while (cVar7 == cVar1);
          if (cVar7 == cVar1) {
            cStack_6c = '\x01' - (piVar4 == (int *)0x0);
            auStack_70[0] = 2;
            fn_82695FA0(param_4,auStack_70);
            puVar5 = auStack_70;
          }
          else {
            pcVar8 = "hasMP3";
            pcVar9 = pcVar10;
            do {
              cVar7 = *pcVar9;
              cVar1 = *pcVar8;
              if (cVar7 == '\0') break;
              pcVar9 = pcVar9 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar7 == cVar1);
            if (cVar7 == cVar1) {
              if ((piVar4 != (int *)0x0) && ((uStack_22c & 1) == 0)) {
                uVar11 = 1;
              }
              auStack_50[0] = 2;
              uStack_4c = uVar11;
              fn_82695FA0(param_4,auStack_50);
              puVar5 = auStack_50;
            }
            else {
              pcVar8 = "hasStreamingAudio";
              pcVar9 = pcVar10;
              do {
                cVar7 = *pcVar9;
                cVar1 = *pcVar8;
                if (cVar7 == '\0') break;
                pcVar9 = pcVar9 + 1;
                pcVar8 = pcVar8 + 1;
              } while (cVar7 == cVar1);
              if (cVar7 != cVar1) {
                pcVar9 = "serverString";
                do {
                  cVar7 = *pcVar10;
                  cVar1 = *pcVar9;
                  if (cVar7 == '\0') break;
                  pcVar10 = pcVar10 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar7 == cVar1);
                if (cVar7 != cVar1) {
LAB_8274b8c0:
                  uVar3 = fn_82713EE8(param_1,param_2,param_3,param_4);
                  return uVar3;
                }
                piVar4 = (int *)fn_8274A960(&iStack_224,param_2);
                auStack_120[0] = 5;
                iStack_11c = *piVar4;
                *(int *)(iStack_11c + 8) = *(int *)(iStack_11c + 8) + 1;
                fn_82695FA0(param_4,auStack_120);
                fn_82696330(auStack_120);
LAB_8274b43c:
                lVar2 = (ulonglong)*(uint *)(iStack_224 + 8) - 1;
                *(int *)(iStack_224 + 8) = (int)lVar2;
                if (lVar2 != 0) {
                  return 1;
                }
                fn_826944C8(iStack_224);
                return 1;
              }
              if ((piVar4 != (int *)0x0) && ((uStack_22c & 4) == 0)) {
                uVar11 = 1;
              }
              auStack_100[0] = 2;
              uStack_fc = uVar11;
              fn_82695FA0(param_4,auStack_100);
              puVar5 = auStack_100;
            }
          }
        }
      }
    }
  }
  fn_82696330(puVar5);
  return 1;
}

