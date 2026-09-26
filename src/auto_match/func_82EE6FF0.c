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
extern int fn_82E50BE8();
extern int fn_82E584C8();
extern int fn_82E5B058();
extern int fn_82E5CD58();
extern int fn_82E62968();
extern int fn_82E72738();
extern int fn_82E72E98();
extern int fn_82EE1F78();
extern int fn_82EE1FE8();
extern int fn_82EE2060();
extern int fn_82EE3838();
extern int fn_82EE4B18();
extern int fn_82EE4B88();
extern int fn_82EE4E58();
extern int fn_82EE5900();
extern int fn_82EE6550();
extern int fn_82EE6A08();
extern int fn_82EE6A78();
extern int fn_82EE6AE8();
extern int fn_82EE6B58();
extern int fn_82EEF720();
extern int fn_82EF0280();
extern int fn_82EF2338();
extern int fn_82EF3238();
extern int fn_82EF42C0();
extern int fn_82F36CB0();
extern int fn_82F39778();
extern int fn_82F3ADA0();
extern int fn_82F3C000();
extern int fn_82F3D628();
extern int fn_82F3DA78();
extern int fn_82F3E7A8();
extern int fn_82F3F228();
extern int fn_82F3FF70();
extern int fn_82F40508();
extern unsigned int lbl_820ED018;
extern unsigned int lbl_820ED028;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820ED078;
extern unsigned int lbl_820ED088;
extern unsigned int lbl_820ED0A8;
extern unsigned int lbl_820ED0B8;
extern unsigned int lbl_820ED0C8;
extern unsigned int lbl_820F8F08;
extern unsigned int lbl_820F8F18;
extern unsigned int lbl_82154978;
extern unsigned int lbl_82154988;
extern unsigned int lbl_82154998;
extern unsigned int lbl_821549A8;
extern unsigned int lbl_821549B8;
extern unsigned int lbl_821549C8;
extern unsigned int lbl_821549D8;
extern unsigned int lbl_821549E8;
extern unsigned int lbl_821549F8;
extern unsigned int lbl_82154A08;
extern unsigned int lbl_82154A18;
extern unsigned int lbl_82154A28;
extern unsigned int lbl_82154A38;
extern unsigned int lbl_82154A48;
extern unsigned int lbl_82154A58;
extern unsigned int lbl_82154A68;
extern unsigned int lbl_82154A78;
extern unsigned int lbl_82154A88;
extern unsigned int lbl_82154A98;
extern unsigned int lbl_82154AA8;
extern unsigned int lbl_82154AB8;
extern unsigned int lbl_82154AC8;
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154AE8;
extern unsigned int lbl_82154AF8;
extern unsigned int lbl_82154B08;
extern unsigned int lbl_82154B18;
extern unsigned int lbl_82154B28;
extern unsigned int lbl_82154B38;
extern unsigned int lbl_82154B48;
extern unsigned int lbl_82154B58;


undefined8 fn_82EE6FF0(undefined8 param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar5;
  int *piVar6;
  undefined8 uVar4;
  byte *pbVar7;
  byte *pbVar8;
  int *apiStack_40 [16];
  
  if (param_3 == (int *)0x0) {
    return 0xffffffff80070057;
  }
  pbVar7 = (byte *)&lbl_82154978;
  *param_3 = 0;
  pbVar8 = param_2;
  do {
    bVar1 = *pbVar7;
    bVar2 = *pbVar8;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar7 = pbVar7 + 1;
    pbVar8 = pbVar8 + 1;
  } while (pbVar7 != (byte *)&lbl_82154988);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    iVar5 = fn_82E50BE8(0xa8,0,0,0,0);
    if (iVar5 != 0) {
      piVar6 = (int *)fn_82EE4E58();
      goto LAB_82ee7088;
    }
  }
  else {
    pbVar7 = (byte *)&lbl_82154988;
    pbVar8 = param_2;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar8;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar7 != (byte *)&lbl_82154998);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      iVar5 = fn_82E50BE8(0x268,0,0,0,0);
      if (iVar5 != 0) {
        piVar6 = (int *)fn_82EF3238();
        goto LAB_82ee7088;
      }
    }
    else {
      pbVar7 = &lbl_820ED0A8;
      pbVar8 = param_2;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar8;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (pbVar7 != &lbl_820ED0B8);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        iVar5 = fn_82E50BE8(0x60,0,0,0,0);
        if (iVar5 != 0) {
          piVar6 = (int *)fn_82F40508();
          goto LAB_82ee7088;
        }
      }
      else {
        pbVar7 = (byte *)&lbl_82154998;
        pbVar8 = param_2;
        do {
          bVar1 = *pbVar7;
          bVar2 = *pbVar8;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
        } while (pbVar7 != &lbl_821549A8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          iVar5 = fn_82E50BE8(0x68,0,0,0,0);
          if (iVar5 != 0) {
            piVar6 = (int *)fn_82F3FF70();
            goto LAB_82ee7088;
          }
        }
        else {
          pbVar7 = &lbl_821549A8;
          pbVar8 = param_2;
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar8;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar8 = pbVar8 + 1;
          } while (pbVar7 != (byte *)&lbl_821549B8);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            iVar5 = fn_82E50BE8(0x68,0,0,0,0);
            if (iVar5 != 0) {
              piVar6 = (int *)fn_82F3F228();
              goto LAB_82ee7088;
            }
          }
          else {
            pbVar7 = (byte *)&lbl_821549B8;
            pbVar8 = param_2;
            do {
              bVar1 = *pbVar7;
              bVar2 = *pbVar8;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar7 = pbVar7 + 1;
              pbVar8 = pbVar8 + 1;
            } while (pbVar7 != &lbl_821549C8);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
              iVar5 = fn_82E50BE8(0x68,0,0,0,0);
              if (iVar5 != 0) {
                piVar6 = (int *)fn_82F3E7A8();
                goto LAB_82ee7088;
              }
            }
            else {
              pbVar7 = &lbl_821549C8;
              pbVar8 = param_2;
              do {
                bVar1 = *pbVar7;
                bVar2 = *pbVar8;
                if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                pbVar7 = pbVar7 + 1;
                pbVar8 = pbVar8 + 1;
              } while (pbVar7 != &lbl_821549D8);
              if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
LAB_82ee730c:
                iVar5 = fn_82E50BE8(0x50,0,0,0,0);
                if (iVar5 != 0) {
                  piVar6 = (int *)fn_82F3DA78();
                  goto LAB_82ee7088;
                }
              }
              else {
                pbVar7 = &lbl_821549D8;
                pbVar8 = param_2;
                do {
                  bVar1 = *pbVar7;
                  bVar2 = *pbVar8;
                  if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                  pbVar7 = pbVar7 + 1;
                  pbVar8 = pbVar8 + 1;
                } while (pbVar7 != (byte *)&lbl_821549E8);
                if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                  iVar5 = fn_82E50BE8(0x188,0,0,0,0);
                  if (iVar5 != 0) {
                    piVar6 = (int *)fn_82EE4B88();
                    goto LAB_82ee7088;
                  }
                }
                else {
                  pbVar7 = (byte *)&lbl_820ED018;
                  pbVar8 = param_2;
                  do {
                    bVar1 = *pbVar7;
                    bVar2 = *pbVar8;
                    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                    pbVar7 = pbVar7 + 1;
                    pbVar8 = pbVar8 + 1;
                  } while (pbVar7 != &lbl_820ED028);
                  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                    iVar5 = fn_82E50BE8(0x168,0,0,0,0);
                    if (iVar5 != 0) {
                      piVar6 = (int *)fn_82F3D628();
                      goto LAB_82ee7088;
                    }
                  }
                  else {
                    pbVar7 = (byte *)&lbl_821549E8;
                    pbVar8 = param_2;
                    do {
                      bVar1 = *pbVar7;
                      bVar2 = *pbVar8;
                      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                      pbVar7 = pbVar7 + 1;
                      pbVar8 = pbVar8 + 1;
                    } while (pbVar7 != (byte *)&lbl_821549F8);
                    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                      iVar5 = fn_82E50BE8(0xb8,0,0,0,0);
                      if (iVar5 != 0) {
                        piVar6 = (int *)fn_82E72738();
                        goto LAB_82ee7088;
                      }
                    }
                    else {
                      pbVar7 = (byte *)&lbl_821549F8;
                      pbVar8 = param_2;
                      do {
                        bVar1 = *pbVar7;
                        bVar2 = *pbVar8;
                        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                        pbVar7 = pbVar7 + 1;
                        pbVar8 = pbVar8 + 1;
                      } while (pbVar7 != (byte *)&lbl_82154A08);
                      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                        iVar5 = fn_82E50BE8(0xb8,0,0,0,0);
                        if (iVar5 != 0) {
                          piVar6 = (int *)fn_82EE6A08();
                          goto LAB_82ee7088;
                        }
                      }
                      else {
                        pbVar7 = (byte *)&lbl_82154A08;
                        pbVar8 = param_2;
                        do {
                          bVar1 = *pbVar7;
                          bVar2 = *pbVar8;
                          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                          pbVar7 = pbVar7 + 1;
                          pbVar8 = pbVar8 + 1;
                        } while (pbVar7 != &lbl_82154A18);
                        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                          iVar5 = fn_82E50BE8(0xb8,0,0,0,0);
                          if (iVar5 != 0) {
                            piVar6 = (int *)fn_82EE6A78();
                            goto LAB_82ee7088;
                          }
                        }
                        else {
                          pbVar7 = (byte *)&lbl_820ED078;
                          pbVar8 = param_2;
                          do {
                            bVar1 = *pbVar7;
                            bVar2 = *pbVar8;
                            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                            pbVar7 = pbVar7 + 1;
                            pbVar8 = pbVar8 + 1;
                          } while (pbVar7 != &lbl_820ED088);
                          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                            iVar5 = fn_82E50BE8(600,0,0,0,0);
                            if (iVar5 != 0) {
                              piVar6 = (int *)fn_82EE1F78();
                              goto LAB_82ee7088;
                            }
                          }
                          else {
                            pbVar7 = (byte *)&lbl_82154A28;
                            pbVar8 = param_2;
                            do {
                              bVar1 = *pbVar7;
                              bVar2 = *pbVar8;
                              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                              pbVar7 = pbVar7 + 1;
                              pbVar8 = pbVar8 + 1;
                            } while (pbVar7 != &lbl_82154A38);
                            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                              iVar5 = fn_82E50BE8(0x3c0,0,0,0,0);
                              if (iVar5 != 0) {
                                piVar6 = (int *)fn_82EF2338();
                                goto LAB_82ee7088;
                              }
                            }
                            else {
                              pbVar7 = &lbl_820ED0B8;
                              pbVar8 = param_2;
                              do {
                                bVar1 = *pbVar7;
                                bVar2 = *pbVar8;
                                if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                                pbVar7 = pbVar7 + 1;
                                pbVar8 = pbVar8 + 1;
                              } while (pbVar7 != &lbl_820ED0C8);
                              if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                                iVar5 = fn_82E50BE8(0x260,0,0,0,0);
                                if (iVar5 != 0) {
                                  piVar6 = (int *)fn_82EE1FE8();
                                  goto LAB_82ee7088;
                                }
                              }
                              else {
                                pbVar7 = &lbl_82154A38;
                                pbVar8 = param_2;
                                do {
                                  bVar1 = *pbVar7;
                                  bVar2 = *pbVar8;
                                  if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                                  pbVar7 = pbVar7 + 1;
                                  pbVar8 = pbVar8 + 1;
                                } while (pbVar7 != &lbl_82154A48);
                                if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                                  iVar5 = fn_82E50BE8(0x260,0,0,0,0);
                                  if (iVar5 != 0) {
                                    piVar6 = (int *)fn_82EE2060();
                                    goto LAB_82ee7088;
                                  }
                                }
                                else {
                                  pbVar7 = (byte *)&lbl_82154A58;
                                  pbVar8 = param_2;
                                  do {
                                    bVar1 = *pbVar7;
                                    bVar2 = *pbVar8;
                                    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                                    pbVar7 = pbVar7 + 1;
                                    pbVar8 = pbVar8 + 1;
                                  } while (pbVar7 != &lbl_82154A68);
                                  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                                    iVar5 = fn_82E50BE8(0xb8,0,0,0,0);
                                    if (iVar5 != 0) {
                                      piVar6 = (int *)fn_82E584C8();
                                      goto LAB_82ee7088;
                                    }
                                  }
                                  else {
                                    pbVar7 = &lbl_82154A68;
                                    pbVar8 = param_2;
                                    do {
                                      bVar1 = *pbVar7;
                                      bVar2 = *pbVar8;
                                      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                                      pbVar7 = pbVar7 + 1;
                                      pbVar8 = pbVar8 + 1;
                                    } while (pbVar7 != &lbl_82154A78);
                                    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                                      iVar5 = fn_82E50BE8(0x188,0,0,0,0);
                                      if (iVar5 != 0) {
                                        piVar6 = (int *)fn_82EE3838();
                                        goto LAB_82ee7088;
                                      }
                                    }
                                    else {
                                      pbVar7 = &lbl_82154A78;
                                      pbVar8 = param_2;
                                      do {
                                        bVar1 = *pbVar7;
                                        bVar2 = *pbVar8;
                                        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                                        pbVar7 = pbVar7 + 1;
                                        pbVar8 = pbVar8 + 1;
                                      } while (pbVar7 != (byte *)&lbl_82154A88);
                                      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                                        iVar5 = fn_82E50BE8(0x188,0,0,0,0);
                                        if (iVar5 != 0) {
                                          piVar6 = (int *)fn_82EE4B18();
                                          goto LAB_82ee7088;
                                        }
                                      }
                                      else {
                                        pbVar7 = (byte *)&lbl_82154A88;
                                        pbVar8 = param_2;
                                        do {
                                          bVar1 = *pbVar7;
                                          bVar2 = *pbVar8;
                                          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                                          pbVar7 = pbVar7 + 1;
                                          pbVar8 = pbVar8 + 1;
                                        } while (pbVar7 != &lbl_82154A98);
                                        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                                          iVar5 = fn_82E50BE8(0x48,0,0,0,0);
                                          if (iVar5 != 0) {
                                            piVar6 = (int *)fn_82E72E98();
                                            goto LAB_82ee7088;
                                          }
                                        }
                                        else {
                                          pbVar7 = &lbl_82154A98;
                                          pbVar8 = param_2;
                                          do {
                                            bVar1 = *pbVar7;
                                            bVar2 = *pbVar8;
                                            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                                            pbVar7 = pbVar7 + 1;
                                            pbVar8 = pbVar8 + 1;
                                          } while (pbVar7 != &lbl_82154AA8);
                                          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                                            iVar5 = fn_82E50BE8(0xb8,0,0,0,0);
                                            if (iVar5 != 0) {
                                              piVar6 = (int *)fn_82EE5900();
                                              goto LAB_82ee7088;
                                            }
                                          }
                                          else {
                                            pbVar7 = &lbl_82154AA8;
                                            pbVar8 = param_2;
                                            do {
                                              bVar1 = *pbVar7;
                                              bVar2 = *pbVar8;
                                              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                                              pbVar7 = pbVar7 + 1;
                                              pbVar8 = pbVar8 + 1;
                                            } while (pbVar7 != (byte *)&lbl_82154AB8);
                                            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                                              iVar5 = fn_82E50BE8(0x98,0,0,0,0);
                                              if (iVar5 != 0) {
                                                piVar6 = (int *)fn_82E62968();
                                                goto LAB_82ee7088;
                                              }
                                            }
                                            else {
                                              pbVar7 = (byte *)&lbl_82154AB8;
                                              pbVar8 = param_2;
                                              do {
                                                bVar1 = *pbVar7;
                                                bVar2 = *pbVar8;
                                                if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                                                pbVar7 = pbVar7 + 1;
                                                pbVar8 = pbVar8 + 1;
                                              } while (pbVar7 != (byte *)&lbl_82154AC8);
                                              if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                                                iVar5 = fn_82E50BE8(0x270,0,0,0,0);
                                                if (iVar5 != 0) {
                                                  piVar6 = (int *)fn_82EF0280();
                                                  goto LAB_82ee7088;
                                                }
                                              }
                                              else {
                                                pbVar7 = (byte *)&lbl_82154AC8;
                                                pbVar8 = param_2;
                                                do {
                                                  bVar1 = *pbVar7;
                                                  bVar2 = *pbVar8;
                                                  if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0)
                                                  break;
                                                  pbVar7 = pbVar7 + 1;
                                                  pbVar8 = pbVar8 + 1;
                                                } while (pbVar7 != &lbl_82154AD8);
                                                if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0)
                                                {
                                                  iVar5 = fn_82E50BE8(0x78,0,0,0,0);
                                                  if (iVar5 != 0) {
                                                    piVar6 = (int *)fn_82F3C000();
                                                    goto LAB_82ee7088;
                                                  }
                                                }
                                                else {
                                                  pbVar7 = &lbl_82154AD8;
                                                  pbVar8 = param_2;
                                                  do {
                                                    bVar1 = *pbVar7;
                                                    bVar2 = *pbVar8;
                                                    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0)
                                                    break;
                                                    pbVar7 = pbVar7 + 1;
                                                    pbVar8 = pbVar8 + 1;
                                                  } while (pbVar7 != (byte *)&lbl_82154AE8);
                                                  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) ==
                                                      0) {
                                                    iVar5 = fn_82E50BE8(0x140,0,0,0,0);
                                                    if (iVar5 != 0) {
                                                      piVar6 = (int *)fn_82F36CB0();
                                                      goto LAB_82ee7088;
                                                    }
                                                  }
                                                  else {
                                                    pbVar7 = (byte *)&lbl_82154AE8;
                                                    pbVar8 = param_2;
                                                    do {
                                                      bVar1 = *pbVar7;
                                                      bVar2 = *pbVar8;
                                                      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0)
                                                      break;
                                                      pbVar7 = pbVar7 + 1;
                                                      pbVar8 = pbVar8 + 1;
                                                    } while (pbVar7 != (byte *)&lbl_82154AF8);
                                                    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2)
                                                        == 0) {
                                                      iVar5 = fn_82E50BE8(0x140,0,0,0,0);
                                                      if (iVar5 != 0) {
                                                        piVar6 = (int *)fn_82EE6AE8();
                                                        goto LAB_82ee7088;
                                                      }
                                                    }
                                                    else {
                                                      pbVar7 = (byte *)&lbl_82154AF8;
                                                      pbVar8 = param_2;
                                                      do {
                                                        bVar1 = *pbVar7;
                                                        bVar2 = *pbVar8;
                                                        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0
                                                           ) break;
                                                        pbVar7 = pbVar7 + 1;
                                                        pbVar8 = pbVar8 + 1;
                                                      } while (pbVar7 != &lbl_82154B08);
                                                      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2)
                                                          == 0) {
                                                        iVar5 = fn_82E50BE8(0x140,0,0,0,0);
                                                        if (iVar5 != 0) {
                                                          piVar6 = (int *)fn_82EE6B58();
                                                          goto LAB_82ee7088;
                                                        }
                                                      }
                                                      else {
                                                        pbVar7 = &lbl_82154B08;
                                                        pbVar8 = param_2;
                                                        do {
                                                          bVar1 = *pbVar7;
                                                          bVar2 = *pbVar8;
                                                          if ((ulonglong)bVar1 - (ulonglong)bVar2 !=
                                                              0) break;
                                                          pbVar7 = pbVar7 + 1;
                                                          pbVar8 = pbVar8 + 1;
                                                        } while (pbVar7 != &lbl_82154B18);
                                                        if ((int)((ulonglong)bVar1 -
                                                                 (ulonglong)bVar2) == 0) {
                                                          iVar5 = fn_82E50BE8(0x108,0,0,0,0);
                                                          if (iVar5 != 0) {
                                                            piVar6 = (int *)fn_82EE6550();
                                                            goto LAB_82ee7088;
                                                          }
                                                        }
                                                        else {
                                                          pbVar7 = &lbl_82154B18;
                                                          pbVar8 = param_2;
                                                          do {
                                                            bVar1 = *pbVar7;
                                                            bVar2 = *pbVar8;
                                                            if ((ulonglong)bVar1 - (ulonglong)bVar2
                                                                != 0) break;
                                                            pbVar7 = pbVar7 + 1;
                                                            pbVar8 = pbVar8 + 1;
                                                          } while (pbVar7 != &lbl_82154B28);
                                                          if ((int)((ulonglong)bVar1 -
                                                                   (ulonglong)bVar2) == 0) {
                                                            iVar5 = fn_82E50BE8(0x90,0,0,0,0);
                                                            if (iVar5 != 0) {
                                                              piVar6 = (int *)fn_82E5CD58();
                                                              goto LAB_82ee7088;
                                                            }
                                                          }
                                                          else {
                                                            pbVar7 = &lbl_820F8F08;
                                                            pbVar8 = param_2;
                                                            do {
                                                              bVar1 = *pbVar7;
                                                              bVar2 = *pbVar8;
                                                              if ((ulonglong)bVar1 -
                                                                  (ulonglong)bVar2 != 0) break;
                                                              pbVar7 = pbVar7 + 1;
                                                              pbVar8 = pbVar8 + 1;
                                                            } while (pbVar7 != &lbl_820F8F18);
                                                            if ((int)((ulonglong)bVar1 -
                                                                     (ulonglong)bVar2) == 0) {
                                                              iVar5 = fn_82E50BE8(0x168,0,0,0,
                                                                                        0);
                                                              if (iVar5 != 0) {
                                                                piVar6 = (int *)fn_82E5B058();
                                                                goto LAB_82ee7088;
                                                              }
                                                            }
                                                            else {
                                                              pbVar7 = &lbl_820ED068;
                                                              pbVar8 = param_2;
                                                              do {
                                                                bVar1 = *pbVar7;
                                                                bVar2 = *pbVar8;
                                                                if ((ulonglong)bVar1 -
                                                                    (ulonglong)bVar2 != 0) break;
                                                                pbVar7 = pbVar7 + 1;
                                                                pbVar8 = pbVar8 + 1;
                                                              } while (pbVar7 != (byte *)&
                                                  lbl_820ED078);
                                                  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) ==
                                                      0) {
                                                    iVar5 = fn_82E50BE8(0x60,0,0,0,0);
                                                    if (iVar5 != 0) {
                                                      piVar6 = (int *)fn_82EF42C0();
                                                      goto LAB_82ee7088;
                                                    }
                                                  }
                                                  else {
                                                    pbVar7 = &lbl_82154B28;
                                                    pbVar8 = param_2;
                                                    do {
                                                      bVar1 = *pbVar7;
                                                      bVar2 = *pbVar8;
                                                      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0)
                                                      break;
                                                      pbVar7 = pbVar7 + 1;
                                                      pbVar8 = pbVar8 + 1;
                                                    } while (pbVar7 != (byte *)&lbl_82154B38);
                                                    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2)
                                                        == 0) {
                                                      iVar5 = fn_82E50BE8(0x50,0,0,0,0);
                                                      if (iVar5 != 0) {
                                                        piVar6 = (int *)fn_82EEF720();
                                                        goto LAB_82ee7088;
                                                      }
                                                    }
                                                    else {
                                                      pbVar7 = (byte *)&lbl_82154B38;
                                                      pbVar8 = param_2;
                                                      do {
                                                        bVar1 = *pbVar7;
                                                        bVar2 = *pbVar8;
                                                        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0
                                                           ) break;
                                                        pbVar7 = pbVar7 + 1;
                                                        pbVar8 = pbVar8 + 1;
                                                      } while (pbVar7 != (byte *)&lbl_82154B48);
                                                      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2)
                                                          == 0) {
                                                        iVar5 = fn_82E50BE8(0x1270,0,0,0,0);
                                                        if (iVar5 != 0) {
                                                          piVar6 = (int *)fn_82F3ADA0();
                                                          goto LAB_82ee7088;
                                                        }
                                                      }
                                                      else {
                                                        pbVar8 = (byte *)&lbl_82154B48;
                                                        do {
                                                          bVar1 = *pbVar8;
                                                          bVar2 = *param_2;
                                                          if ((ulonglong)bVar1 - (ulonglong)bVar2 !=
                                                              0) break;
                                                          pbVar8 = pbVar8 + 1;
                                                          param_2 = param_2 + 1;
                                                        } while (pbVar8 != &lbl_82154B58);
                                                        if ((int)((ulonglong)bVar1 -
                                                                 (ulonglong)bVar2) != 0)
                                                        goto LAB_82ee730c;
                                                        iVar5 = fn_82E50BE8(0x58,0,0,0,0);
                                                        if (iVar5 != 0) {
                                                          piVar6 = (int *)fn_82F39778();
                                                          goto LAB_82ee7088;
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
  }
  piVar6 = (int *)0x0;
LAB_82ee7088:
  if (piVar6 != (int *)0x0) {
    uVar4 = (**(code **)*piVar6)(piVar6,0xffffffff82154c48,param_3);
    (**(code **)(*piVar6 + 8))(piVar6);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    puVar3 = (undefined4 *)*param_3;
    if (puVar3 != (undefined4 *)0x0) {
      apiStack_40[0] = (int *)0x0;
      iVar5 = (**(code **)*puVar3)(puVar3,0xffffffff8214c740,apiStack_40);
      if (-1 < iVar5) {
        uVar4 = (**(code **)(*apiStack_40[0] + 0xc))(apiStack_40[0],param_1);
        if (apiStack_40[0] != (int *)0x0) {
          (**(code **)(*apiStack_40[0] + 8))(apiStack_40[0]);
          apiStack_40[0] = (int *)0x0;
        }
        if ((int)uVar4 < 0) {
          if ((int *)*param_3 == (int *)0x0) {
            return uVar4;
          }
          (**(code **)(*(int *)*param_3 + 8))();
          *param_3 = 0;
          return uVar4;
        }
      }
      return 0;
    }
  }
  return 0xffffffff8007000e;
}

