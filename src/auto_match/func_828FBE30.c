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
extern int fn_82F65B18();
extern int fn_82F66A40();
extern int fn_82F66A80();
extern int fn_82F6EDF8();


undefined8 fn_828FBE30(char *param_1,undefined1 *param_2,byte *param_3)

{
  char cVar1;
  byte bVar4;
  int iVar2;
  int iVar3;
  char cVar5;
  char *pcVar6;
  undefined1 uVar8;
  char *pcVar7;
  uint uVar9;
  char acStack_60 [96];
  
  cVar5 = *param_1;
  pcVar6 = param_1;
  while ((cVar5 != '\0' && (iVar2 = fn_82F66A40(*pcVar6), iVar2 != 0))) {
    pcVar6 = pcVar6 + 1;
    cVar5 = *pcVar6;
  }
  if (*pcVar6 == '\0') {
    bVar4 = 0;
  }
  else {
    bVar4 = fn_82F65B18(pcVar6);
  }
  if (bVar4 < 0x10) {
    uVar9 = (int)pcVar6 - (int)param_1;
    if ((uVar9 != 0) && (uVar9 < 0x15)) {
      cVar5 = *pcVar6;
      while ((cVar5 != '\0' && (iVar2 = fn_82F66A80(), iVar2 != 0))) {
        pcVar6 = pcVar6 + 1;
        cVar5 = *pcVar6;
      }
      if (*pcVar6 == '\0') {
        if (*param_1 != '\0') {
          iVar2 = -(int)param_1;
          do {
            iVar3 = fn_82F66A40(*param_1);
            if (iVar3 == 0) break;
            cVar5 = fn_82F6EDF8(*param_1);
            param_1[(int)(acStack_60 + iVar2)] = cVar5;
            param_1 = param_1 + 1;
          } while (*param_1 != '\0');
        }
        pcVar7 = acStack_60;
        pcVar6 = "POSITION";
        acStack_60[uVar9] = '\0';
        do {
          cVar5 = *pcVar7;
          cVar1 = *pcVar6;
          if (cVar5 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar5 == cVar1);
        if (cVar5 == cVar1) {
          uVar8 = 0;
        }
        else {
          pcVar7 = acStack_60;
          pcVar6 = "BLENDWEIGHT";
          do {
            cVar5 = *pcVar7;
            cVar1 = *pcVar6;
            if (cVar5 == '\0') break;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar5 == cVar1);
          if (cVar5 == cVar1) {
            uVar8 = 1;
          }
          else {
            pcVar7 = acStack_60;
            pcVar6 = "BLENDINDICES";
            do {
              cVar5 = *pcVar7;
              cVar1 = *pcVar6;
              if (cVar5 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar5 == cVar1);
            if (cVar5 == cVar1) {
              uVar8 = 2;
            }
            else {
              pcVar7 = acStack_60;
              pcVar6 = "NORMAL";
              do {
                cVar5 = *pcVar7;
                cVar1 = *pcVar6;
                if (cVar5 == '\0') break;
                pcVar7 = pcVar7 + 1;
                pcVar6 = pcVar6 + 1;
              } while (cVar5 == cVar1);
              if (cVar5 == cVar1) {
                uVar8 = 3;
              }
              else {
                pcVar7 = acStack_60;
                pcVar6 = "PSIZE";
                do {
                  cVar5 = *pcVar7;
                  cVar1 = *pcVar6;
                  if (cVar5 == '\0') break;
                  pcVar7 = pcVar7 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar5 == cVar1);
                if (cVar5 == cVar1) {
                  uVar8 = 4;
                }
                else {
                  pcVar7 = acStack_60;
                  pcVar6 = "TEXCOORD";
                  do {
                    cVar5 = *pcVar7;
                    cVar1 = *pcVar6;
                    if (cVar5 == '\0') break;
                    pcVar7 = pcVar7 + 1;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar5 == cVar1);
                  if (cVar5 == cVar1) {
                    uVar8 = 5;
                  }
                  else {
                    pcVar7 = acStack_60;
                    pcVar6 = "TANGENT";
                    do {
                      cVar5 = *pcVar7;
                      cVar1 = *pcVar6;
                      if (cVar5 == '\0') break;
                      pcVar7 = pcVar7 + 1;
                      pcVar6 = pcVar6 + 1;
                    } while (cVar5 == cVar1);
                    if (cVar5 == cVar1) {
                      uVar8 = 6;
                    }
                    else {
                      pcVar7 = acStack_60;
                      pcVar6 = "BINORMAL";
                      do {
                        cVar5 = *pcVar7;
                        cVar1 = *pcVar6;
                        if (cVar5 == '\0') break;
                        pcVar7 = pcVar7 + 1;
                        pcVar6 = pcVar6 + 1;
                      } while (cVar5 == cVar1);
                      if (cVar5 == cVar1) {
                        uVar8 = 7;
                      }
                      else {
                        pcVar7 = acStack_60;
                        pcVar6 = "TESSFACTOR";
                        do {
                          cVar5 = *pcVar7;
                          cVar1 = *pcVar6;
                          if (cVar5 == '\0') break;
                          pcVar7 = pcVar7 + 1;
                          pcVar6 = pcVar6 + 1;
                        } while (cVar5 == cVar1);
                        if (cVar5 == cVar1) {
                          uVar8 = 8;
                        }
                        else {
                          pcVar7 = acStack_60;
                          pcVar6 = "POSITIONT";
                          do {
                            cVar5 = *pcVar7;
                            cVar1 = *pcVar6;
                            if (cVar5 == '\0') break;
                            pcVar7 = pcVar7 + 1;
                            pcVar6 = pcVar6 + 1;
                          } while (cVar5 == cVar1);
                          if (cVar5 == cVar1) {
                            uVar8 = 9;
                          }
                          else {
                            pcVar7 = acStack_60;
                            pcVar6 = "COLOR";
                            do {
                              cVar5 = *pcVar7;
                              cVar1 = *pcVar6;
                              if (cVar5 == '\0') break;
                              pcVar7 = pcVar7 + 1;
                              pcVar6 = pcVar6 + 1;
                            } while (cVar5 == cVar1);
                            if (cVar5 != cVar1) {
                              pcVar7 = acStack_60;
                              pcVar6 = "FOG";
                              do {
                                cVar5 = *pcVar7;
                                cVar1 = *pcVar6;
                                if (cVar5 == '\0') break;
                                pcVar7 = pcVar7 + 1;
                                pcVar6 = pcVar6 + 1;
                              } while (cVar5 == cVar1);
                              if (cVar5 == cVar1) {
                                uVar8 = 0xb;
                                goto LAB_828fc3c0;
                              }
                              pcVar7 = acStack_60;
                              pcVar6 = "DEPTH";
                              do {
                                cVar5 = *pcVar7;
                                cVar1 = *pcVar6;
                                if (cVar5 == '\0') break;
                                pcVar7 = pcVar7 + 1;
                                pcVar6 = pcVar6 + 1;
                              } while (cVar5 == cVar1);
                              if (cVar5 == cVar1) {
                                uVar8 = 0xc;
                                goto LAB_828fc3c0;
                              }
                              pcVar7 = acStack_60;
                              pcVar6 = "SAMPLE";
                              do {
                                cVar5 = *pcVar7;
                                cVar1 = *pcVar6;
                                if (cVar5 == '\0') break;
                                pcVar7 = pcVar7 + 1;
                                pcVar6 = pcVar6 + 1;
                              } while (cVar5 == cVar1);
                              if (cVar5 == cVar1) {
                                uVar8 = 0xd;
                                goto LAB_828fc3c0;
                              }
                              pcVar7 = acStack_60;
                              pcVar6 = "VFACE";
                              do {
                                cVar5 = *pcVar7;
                                cVar1 = *pcVar6;
                                if (cVar5 == '\0') break;
                                pcVar7 = pcVar7 + 1;
                                pcVar6 = pcVar6 + 1;
                              } while (cVar5 == cVar1);
                              if (cVar5 == cVar1) {
                                uVar8 = 0xe;
                                goto LAB_828fc3c0;
                              }
                              pcVar7 = acStack_60;
                              pcVar6 = "VPOS";
                              do {
                                cVar5 = *pcVar7;
                                cVar1 = *pcVar6;
                                if (cVar5 == '\0') break;
                                pcVar7 = pcVar7 + 1;
                                pcVar6 = pcVar6 + 1;
                              } while (cVar5 == cVar1);
                              if (cVar5 == cVar1) {
                                uVar8 = 0xf;
                                goto LAB_828fc3c0;
                              }
                              pcVar7 = acStack_60;
                              pcVar6 = "DIFFUSE";
                              do {
                                cVar5 = *pcVar7;
                                cVar1 = *pcVar6;
                                if (cVar5 == '\0') break;
                                pcVar7 = pcVar7 + 1;
                                pcVar6 = pcVar6 + 1;
                              } while (cVar5 == cVar1);
                              if (cVar5 == cVar1) {
                                bVar4 = 0;
                              }
                              else {
                                pcVar7 = acStack_60;
                                pcVar6 = "SPECULAR";
                                do {
                                  cVar5 = *pcVar7;
                                  cVar1 = *pcVar6;
                                  if (cVar5 == '\0') break;
                                  pcVar7 = pcVar7 + 1;
                                  pcVar6 = pcVar6 + 1;
                                } while (cVar5 == cVar1);
                                if (cVar5 != cVar1) {
                                  return 0xffffffff80004005;
                                }
                                bVar4 = 1;
                              }
                            }
                            uVar8 = 10;
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
LAB_828fc3c0:
        *param_2 = uVar8;
        *param_3 = bVar4;
        return 0;
      }
    }
  }
  else {
    *param_2 = 0;
    *param_3 = 0xff;
  }
  return 0xffffffff80004005;
}

