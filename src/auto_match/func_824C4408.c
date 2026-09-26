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
extern unsigned int *auStack_120;
extern unsigned int *auStack_170;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8225BD88();
extern int fn_8225C0A0();
extern int fn_8225C168();
extern int fn_8225C590();
extern int fn_8225C5F8();
extern int fn_8225CF60();
extern int fn_8225D1F8();
extern int fn_8225D288();
extern int fn_8225D930();
extern int fn_8225D9B8();
extern int fn_8229E090();
extern int fn_823AB470();
extern int fn_824C04E0();
extern int fn_824C4370();
extern int fn_82512A48();
extern int iRam8327674c;
extern unsigned int iStack_13c;
extern unsigned int iStack_15c;
extern unsigned int lbl_8219854C;
extern unsigned int lbl_82198564;
extern unsigned int uRam832766f3;


void fn_824C4408(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint auStack_170 [4];
  undefined **ppuStack_160;
  int iStack_15c;
  undefined ***pppuStack_150;
  undefined **ppuStack_140;
  int iStack_13c;
  undefined ***pppuStack_130;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (iRam8327674c != 0) {
        fn_82512A48();
        iRam8327674c = 0;
      }
      *(undefined4 *)(param_2 + 0x18) = 0;
      return;
    }
    fn_8229E090(*(undefined4 *)(param_2 + 0x18),0,1);
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_824c4e8c:
    fn_824C04E0(*(undefined4 *)(param_2 + 4),1);
    return;
  }
  fn_8229E090(*(undefined4 *)(param_2 + 0x18),0,1);
  uVar1 = *(uint *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_2 + 0x14);
    uVar12 = (ulonglong)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) {
LAB_824c4cf4:
        fn_8225C0A0(uVar12);
      }
      else {
        fn_8225C0A0(1);
        if (*(int *)(iVar6 + 0x10) == -1) {
          ppuStack_140 = &lbl_82198564;
          pppuStack_130 = &ppuStack_140;
          pppuStack_150 = &ppuStack_160;
          ppuStack_160 = &lbl_8219854C;
          iStack_15c = iVar6;
          iStack_13c = iVar6;
          uVar8 = fn_8225CF60(iVar7,&ppuStack_160,&ppuStack_140);
          *(undefined4 *)(iVar6 + 0x10) = uVar8;
        }
        if (1 < (int)uVar1) {
          lVar10 = uVar12 - 1;
          do {
            uVar12 = 0;
            lVar11 = 0;
            do {
              if ((uVar12 & 0xffffffff) != 0) goto LAB_824c4e38;
              uVar4 = fn_8225D9B8(iVar7,lVar11);
              if (uVar4 != 0) {
                for (puVar9 = *(uint **)(iVar7 + 0x10); puVar9 != *(uint **)(iVar7 + 0x14);
                    puVar9 = puVar9 + 1) {
                  if ((uVar4 & 0xffffffff) == (ulonglong)*puVar9) {
                    uVar8 = 1;
                    goto LAB_824c4db8;
                  }
                }
                uVar8 = 0;
LAB_824c4db8:
                lVar5 = fn_823AB470(uVar4);
                if ((-(uint)(lVar5 == 2) & (uint)LZCOUNT(uVar8) >> 5) != 0) {
                  uVar12 = uVar4;
                }
              }
              lVar11 = lVar11 + 1;
            } while ((int)lVar11 < 4);
            if ((uVar12 & 0xffffffff) == 0) {
              fn_82230110(auStack_80,0xffffffff82198540);
              auStack_170[0] = fn_8225D288(iVar7,auStack_80,0);
              fn_82230300(auStack_80,1,0);
              fn_8225C168(iVar6,auStack_170);
              uVar12 = (ulonglong)auStack_170[0];
            }
LAB_824c4e38:
            fn_8225D930(iVar7,uVar12);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
      }
    }
  }
  else if (uVar1 == 1) {
    uVar1 = *(uint *)(param_2 + 0x14);
    uVar12 = (ulonglong)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) goto LAB_824c4cf4;
      fn_8225C0A0(1);
      if (*(int *)(iVar6 + 0x10) == -1) {
        ppuStack_140 = &lbl_82198564;
        pppuStack_130 = &ppuStack_140;
        pppuStack_150 = &ppuStack_160;
        ppuStack_160 = &lbl_8219854C;
        iStack_15c = iVar6;
        iStack_13c = iVar6;
        uVar8 = fn_8225CF60(iVar7,&ppuStack_160,&ppuStack_140);
        *(undefined4 *)(iVar6 + 0x10) = uVar8;
      }
      if (1 < (int)uVar1) {
        lVar10 = uVar12 - 1;
        do {
          uVar12 = 0;
          lVar11 = 0;
          do {
            if ((uVar12 & 0xffffffff) != 0) goto LAB_824c4ca4;
            uVar4 = fn_8225D9B8(iVar7,lVar11);
            if (uVar4 != 0) {
              for (puVar9 = *(uint **)(iVar7 + 0x10); puVar9 != *(uint **)(iVar7 + 0x14);
                  puVar9 = puVar9 + 1) {
                if ((uVar4 & 0xffffffff) == (ulonglong)*puVar9) {
                  uVar8 = 1;
                  goto LAB_824c4c24;
                }
              }
              uVar8 = 0;
LAB_824c4c24:
              lVar5 = fn_823AB470(uVar4);
              if ((-(uint)(lVar5 == 2) & (uint)LZCOUNT(uVar8) >> 5) != 0) {
                uVar12 = uVar4;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < 4);
          if ((uVar12 & 0xffffffff) == 0) {
            fn_82230110(auStack_c0,0xffffffff82198540);
            auStack_170[0] = fn_8225D288(iVar7,auStack_c0,0);
            fn_82230300(auStack_c0,1,0);
            fn_8225C168(iVar6,auStack_170);
            uVar12 = (ulonglong)auStack_170[0];
          }
LAB_824c4ca4:
          fn_8225D930(iVar7,uVar12);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  else if (uVar1 < 3) {
    uVar1 = *(uint *)(param_2 + 0x14);
    uVar12 = (ulonglong)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) goto LAB_824c4cf4;
      fn_8225C0A0(1);
      if (*(int *)(iVar6 + 0x10) == -1) {
        ppuStack_140 = &lbl_82198564;
        pppuStack_130 = &ppuStack_140;
        pppuStack_150 = &ppuStack_160;
        ppuStack_160 = &lbl_8219854C;
        iStack_15c = iVar6;
        iStack_13c = iVar6;
        uVar8 = fn_8225CF60(iVar7,&ppuStack_160,&ppuStack_140);
        *(undefined4 *)(iVar6 + 0x10) = uVar8;
      }
      if (1 < (int)uVar1) {
        lVar10 = uVar12 - 1;
        do {
          uVar12 = 0;
          lVar11 = 0;
          do {
            if ((uVar12 & 0xffffffff) != 0) goto LAB_824c4b1c;
            uVar4 = fn_8225D9B8(iVar7,lVar11);
            if (uVar4 != 0) {
              for (puVar9 = *(uint **)(iVar7 + 0x10); puVar9 != *(uint **)(iVar7 + 0x14);
                  puVar9 = puVar9 + 1) {
                if ((uVar4 & 0xffffffff) == (ulonglong)*puVar9) {
                  uVar8 = 1;
                  goto LAB_824c4a9c;
                }
              }
              uVar8 = 0;
LAB_824c4a9c:
              lVar5 = fn_823AB470(uVar4);
              if ((-(uint)(lVar5 == 2) & (uint)LZCOUNT(uVar8) >> 5) != 0) {
                uVar12 = uVar4;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < 4);
          if ((uVar12 & 0xffffffff) == 0) {
            fn_82230110(auStack_100,0xffffffff82198540);
            auStack_170[0] = fn_8225D288(iVar7,auStack_100,0);
            fn_82230300(auStack_100,1,0);
            fn_8225C168(iVar6,auStack_170);
            uVar12 = (ulonglong)auStack_170[0];
          }
LAB_824c4b1c:
          fn_8225D930(iVar7,uVar12);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  else if (uVar1 == 3) {
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 1;
    uVar8 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = fn_8225C590();
    fn_8225D1F8(uVar3,uVar8);
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 0;
    uVar1 = *(uint *)(param_2 + 0x14);
    uVar12 = (ulonglong)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) goto LAB_824c4cf4;
      fn_8225C0A0(1);
      if (*(int *)(iVar6 + 0x10) == -1) {
        ppuStack_140 = &lbl_82198564;
        pppuStack_130 = &ppuStack_140;
        pppuStack_150 = &ppuStack_160;
        ppuStack_160 = &lbl_8219854C;
        iStack_15c = iVar6;
        iStack_13c = iVar6;
        uVar8 = fn_8225CF60(iVar7,&ppuStack_160,&ppuStack_140);
        *(undefined4 *)(iVar6 + 0x10) = uVar8;
      }
      if (1 < (int)uVar1) {
        lVar10 = uVar12 - 1;
        do {
          uVar12 = 0;
          lVar11 = 0;
          do {
            if ((uVar12 & 0xffffffff) != 0) goto LAB_824c4994;
            uVar4 = fn_8225D9B8(iVar7,lVar11);
            if (uVar4 != 0) {
              for (puVar9 = *(uint **)(iVar7 + 0x10); puVar9 != *(uint **)(iVar7 + 0x14);
                  puVar9 = puVar9 + 1) {
                if ((uVar4 & 0xffffffff) == (ulonglong)*puVar9) {
                  uVar8 = 1;
                  goto LAB_824c4914;
                }
              }
              uVar8 = 0;
LAB_824c4914:
              lVar5 = fn_823AB470(uVar4);
              if ((-(uint)(lVar5 == 2) & (uint)LZCOUNT(uVar8) >> 5) != 0) {
                uVar12 = uVar4;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < 4);
          if ((uVar12 & 0xffffffff) == 0) {
            fn_82230110(auStack_a0,0xffffffff82198540);
            auStack_170[0] = fn_8225D288(iVar7,auStack_a0,0);
            fn_82230300(auStack_a0,1,0);
            fn_8225C168(iVar6,auStack_170);
            uVar12 = (ulonglong)auStack_170[0];
          }
LAB_824c4994:
          fn_8225D930(iVar7,uVar12);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  else if (uVar1 < 5) {
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 1;
    uVar8 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = fn_8225C590();
    fn_8225D1F8(uVar3,uVar8);
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 0;
    uVar1 = *(uint *)(param_2 + 0x14);
    uVar12 = (ulonglong)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) goto LAB_824c4cf4;
      fn_8225C0A0(1);
      if (*(int *)(iVar6 + 0x10) == -1) {
        ppuStack_140 = &lbl_82198564;
        pppuStack_130 = &ppuStack_140;
        pppuStack_150 = &ppuStack_160;
        ppuStack_160 = &lbl_8219854C;
        iStack_15c = iVar6;
        iStack_13c = iVar6;
        uVar8 = fn_8225CF60(iVar7,&ppuStack_160,&ppuStack_140);
        *(undefined4 *)(iVar6 + 0x10) = uVar8;
      }
      if (1 < (int)uVar1) {
        lVar10 = uVar12 - 1;
        do {
          uVar12 = 0;
          lVar11 = 0;
          do {
            if ((uVar12 & 0xffffffff) != 0) goto LAB_824c47d8;
            uVar4 = fn_8225D9B8(iVar7,lVar11);
            if (uVar4 != 0) {
              for (puVar9 = *(uint **)(iVar7 + 0x10); puVar9 != *(uint **)(iVar7 + 0x14);
                  puVar9 = puVar9 + 1) {
                if ((uVar4 & 0xffffffff) == (ulonglong)*puVar9) {
                  uVar8 = 1;
                  goto LAB_824c4758;
                }
              }
              uVar8 = 0;
LAB_824c4758:
              lVar5 = fn_823AB470(uVar4);
              if ((-(uint)(lVar5 == 2) & (uint)LZCOUNT(uVar8) >> 5) != 0) {
                uVar12 = uVar4;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < 4);
          if ((uVar12 & 0xffffffff) == 0) {
            fn_82230110(auStack_120,0xffffffff82198540);
            auStack_170[0] = fn_8225D288(iVar7,auStack_120,0);
            fn_82230300(auStack_120,1,0);
            fn_8225C168(iVar6,auStack_170);
            uVar12 = (ulonglong)auStack_170[0];
          }
LAB_824c47d8:
          fn_8225D930(iVar7,uVar12);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  else {
    if (uVar1 != 5) {
      if (uVar1 < 7) {
        fn_8229E090(0,0,1);
        *(undefined4 *)(param_2 + 0x18) = 0;
        goto LAB_824c4e8c;
      }
      goto LAB_824c4e58;
    }
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 1;
    uVar8 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = fn_8225C590();
    fn_8225D1F8(uVar3,uVar8);
    fn_8225C590();
    fn_8225C5F8();
    uRam832766f3 = 0;
    uVar1 = *(uint *)(param_2 + 0x14);
    uVar12 = (ulonglong)uVar1;
    iVar6 = fn_8225BD88();
    iVar7 = fn_8225C590();
    uVar2 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2;
    if (uVar1 != uVar2) {
      if ((int)uVar1 < (int)uVar2) goto LAB_824c4cf4;
      fn_8225C0A0(1);
      if (*(int *)(iVar6 + 0x10) == -1) {
        ppuStack_160 = &lbl_82198564;
        pppuStack_150 = &ppuStack_160;
        pppuStack_130 = &ppuStack_140;
        ppuStack_140 = &lbl_8219854C;
        iStack_15c = iVar6;
        iStack_13c = iVar6;
        uVar8 = fn_8225CF60(iVar7,&ppuStack_140,&ppuStack_160);
        *(undefined4 *)(iVar6 + 0x10) = uVar8;
      }
      if (1 < (int)uVar1) {
        lVar10 = uVar12 - 1;
        do {
          uVar12 = 0;
          lVar11 = 0;
          do {
            if ((uVar12 & 0xffffffff) != 0) goto LAB_824c461c;
            uVar4 = fn_8225D9B8(iVar7,lVar11);
            if (uVar4 != 0) {
              for (puVar9 = *(uint **)(iVar7 + 0x10); puVar9 != *(uint **)(iVar7 + 0x14);
                  puVar9 = puVar9 + 1) {
                if ((uVar4 & 0xffffffff) == (ulonglong)*puVar9) {
                  uVar8 = 1;
                  goto LAB_824c459c;
                }
              }
              uVar8 = 0;
LAB_824c459c:
              lVar5 = fn_823AB470(uVar4);
              if ((-(uint)(lVar5 == 2) & (uint)LZCOUNT(uVar8) >> 5) != 0) {
                uVar12 = uVar4;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < 4);
          if ((uVar12 & 0xffffffff) == 0) {
            fn_82230110(auStack_e0,0xffffffff82198540);
            auStack_170[0] = fn_8225D288(iVar7,auStack_e0,0);
            fn_82230300(auStack_e0,1,0);
            fn_8225C168(iVar6,auStack_170);
            uVar12 = (ulonglong)auStack_170[0];
          }
LAB_824c461c:
          fn_8225D930(iVar7,uVar12);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  iVar6 = fn_8225BD88();
  *(undefined4 *)(iVar6 + 0x14) = 1;
LAB_824c4e58:
  fn_824C4370(param_2);
  return;
}

