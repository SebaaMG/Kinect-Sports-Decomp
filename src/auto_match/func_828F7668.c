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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_8265C940();
extern int fn_828F59D0();
extern int fn_828F6C70();
extern int fn_828F6D60();
extern int fn_828F6DE8();
extern int fn_828F70F0();
extern int fn_828F9D68();
extern int fn_828F9D90();
extern int fn_82930318();
extern int fn_82930940();
extern int fn_82BA02A8();
extern unsigned int lbl_820294EC;
extern unsigned int lbl_82029538;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_98;


longlong fn_828F7668(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar7;
  longlong lVar5;
  ulonglong uVar6;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [128];
  
  uVar2 = *(undefined4 *)(param_1 + 0x278);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar7 = (undefined4 *)fn_8265C940(0x14,0x24810000);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    *puVar7 = "DIRECT3D";
  }
  if (puVar7 != (undefined4 *)0x0) {
    lVar5 = fn_828F6C70(param_1,puVar7);
    if (lVar5 < 0) goto LAB_828f7aa0;
    puVar7 = (undefined4 *)fn_8265C940(0x14,0x24810000);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      *puVar7 = &lbl_82029538;
    }
    if (puVar7 != (undefined4 *)0x0) {
      lVar5 = fn_828F6C70(param_1,puVar7);
      if (lVar5 < 0) goto LAB_828f7aa0;
      puVar7 = (undefined4 *)fn_8265C940(0x14,0x24810000);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        *puVar7 = "D3D10_COMPILER";
      }
      if (puVar7 != (undefined4 *)0x0) {
        lVar5 = fn_828F6C70(param_1,puVar7);
        if (lVar5 < 0) goto LAB_828f7aa0;
        uStack_98 = CONCAT44(2,(((U64)(uStack_98) >> 32) & 0xFFFFFFFF));
        puVar7 = (undefined4 *)fn_8265C940(0x14,0x24810000);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          *puVar7 = "HLSL_VERSION";
        }
        if (puVar7 != (undefined4 *)0x0) {
          uVar6 = fn_82930318(0x30);
          if ((uVar6 & 0xffffffff) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = fn_82930940(uVar6,auStack_a0);
          }
          puVar7[2] = iVar8;
          if (iVar8 != 0) {
            lVar5 = fn_828F6C70(param_1,puVar7);
            if (lVar5 < 0) goto LAB_828f7aa0;
            uStack_98 = CONCAT44(0xa00,(((U64)(uStack_98) >> 32) & 0xFFFFFFFF));
            puVar7 = (undefined4 *)fn_8265C940(0x14,0x24810000);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7[1] = 0;
              puVar7[2] = 0;
              puVar7[3] = 0;
              puVar7[4] = 0;
              *puVar7 = "DIRECT3D_VERSION";
            }
            if (puVar7 != (undefined4 *)0x0) {
              uVar6 = fn_82930318(0x30);
              if ((uVar6 & 0xffffffff) == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = fn_82930940(uVar6,auStack_a0);
              }
              puVar7[2] = iVar8;
              if (iVar8 != 0) {
                lVar5 = fn_828F6C70(param_1,puVar7);
                if (lVar5 < 0) goto LAB_828f7aa0;
                uStack_98 = CONCAT44(0xa1d,(((U64)(uStack_98) >> 32) & 0xFFFFFFFF));
                puVar7 = (undefined4 *)fn_8265C940(0x14,0x24810000);
                if (puVar7 == (undefined4 *)0x0) {
                  puVar7 = (undefined4 *)0x0;
                }
                else {
                  puVar7[1] = 0;
                  puVar7[2] = 0;
                  puVar7[3] = 0;
                  puVar7[4] = 0;
                  *puVar7 = "D3DX_VERSION";
                }
                if (puVar7 != (undefined4 *)0x0) {
                  uVar6 = fn_82930318(0x30);
                  if ((uVar6 & 0xffffffff) == 0) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = fn_82930940(uVar6,auStack_a0);
                  }
                  puVar7[2] = iVar8;
                  if (iVar8 != 0) {
                    lVar5 = fn_828F6C70(param_1,puVar7);
                    if (lVar5 < 0) goto LAB_828f7aa0;
                    puVar7 = (undefined4 *)fn_8265C940(0x14,0x24810000);
                    if (puVar7 == (undefined4 *)0x0) {
                      puVar7 = (undefined4 *)0x0;
                    }
                    else {
                      puVar7[1] = 0;
                      puVar7[2] = 0;
                      puVar7[3] = 0;
                      puVar7[4] = 0;
                      *puVar7 = &lbl_820294EC;
                    }
                    if (puVar7 != (undefined4 *)0x0) {
                      lVar5 = fn_828F6C70(param_1,puVar7);
                      if (-1 < lVar5) {
                        puVar7 = (undefined4 *)0x0;
                        lVar5 = fn_828F6D60(param_1,0xffffffff820294e4);
                        if ((-1 < lVar5) &&
                           (lVar5 = fn_828F6DE8(param_1,0xffffffff820294d8,200), -1 < lVar5)) {
                          if (param_2 != (int *)0x0) {
                            fn_828F9D68(auStack_80);
                            *(undefined1 **)(param_1 + 0x278) = auStack_80;
                            if (*param_2 != 0) {
                              piVar10 = param_2 + 1;
                              do {
                                pcVar3 = (char *)*piVar10;
                                pcVar9 = pcVar3;
                                if (pcVar3 == (char *)0x0) {
                                  pcVar9 = (char *)0x0;
                                }
                                else {
                                  do {
                                    cVar1 = *pcVar9;
                                    pcVar9 = pcVar9 + 1;
                                  } while (cVar1 != '\0');
                                  pcVar9 = pcVar9 + (-1 - (int)pcVar3);
                                }
                                lVar5 = fn_828F9D90(auStack_80,pcVar3,pcVar9,0,0,param_1,
                                                     param_1 + 0x18);
                                if ((lVar5 < 0) ||
                                   (lVar5 = fn_828F70F0(param_1,piVar10[-1],0), lVar5 < 0)) {
                                  fn_82BA02A8(auStack_80);
                                  goto LAB_828f7aa0;
                                }
                                piVar4 = piVar10 + 1;
                                piVar10 = piVar10 + 2;
                              } while (*piVar4 != 0);
                            }
                            fn_82BA02A8(auStack_80);
                          }
                          lVar5 = 0;
                        }
                      }
                      goto LAB_828f7aa0;
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
  lVar5 = -0x7ff8fff2;
LAB_828f7aa0:
  *(undefined4 *)(param_1 + 0x278) = uVar2;
  if (puVar7 != (undefined4 *)0x0) {
    fn_828F59D0(puVar7,1);
  }
  return lVar5;
}

