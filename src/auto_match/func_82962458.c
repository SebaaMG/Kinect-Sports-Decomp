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
extern int fn_8294C090();
extern int fn_829619B8();
extern int fn_82975B00();


undefined8 fn_82962458(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_1[3] != 0) {
    iVar3 = 0;
    do {
      param_1[0x40] = uVar6;
      param_1[0x41] = *(int *)(param_1[6] + iVar3);
      fn_8294C090(param_1);
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar6 < (uint)param_1[3]);
  }
  uVar6 = 0;
  if (param_1[3] != 0) {
    do {
      param_1[0x40] = uVar6;
      iVar3 = *(int *)(uVar6 * 4 + param_1[6]);
      param_1[0x41] = iVar3;
      iVar3 = *(int *)(iVar3 + 0x3c);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0xe)) {
        param_1[0x42] = iVar3 + 0x30;
      }
      uVar2 = fn_829619B8(param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar1 = *(uint *)param_1[0x41] & 0xfff00000;
      if (uVar1 < 0x60f00001) {
        if (uVar1 == 0x60f00000) {
LAB_829628b8:
          if ((param_1[0x1c] & 0x1000000U) != 0) goto LAB_82962c1c;
          pcVar5 = *(code **)(*param_1 + 0x108);
LAB_82962b8c:
          iVar3 = (*pcVar5)(param_1);
          goto LAB_82962b98;
        }
        if (uVar1 < 0x20700001) {
          if (uVar1 == 0x20700000) {
            pcVar5 = *(code **)(*param_1 + 0x104);
          }
          else if (uVar1 < 0x10f00001) {
            if (uVar1 == 0x10f00000) {
LAB_82962b04:
              pcVar5 = *(code **)(*param_1 + 0x100);
            }
            else if (uVar1 < 0x10500001) {
              if (uVar1 == 0x10500000) {
                pcVar5 = *(code **)(*param_1 + 0x8c);
              }
              else if ((*(uint *)param_1[0x41] & 0xfff00000) == 0) {
                pcVar5 = *(code **)(*param_1 + 0x78);
              }
              else {
                if (uVar1 == 0x10000000) goto LAB_829625d8;
                if (uVar1 == 0x10100000) {
                  pcVar5 = *(code **)(*param_1 + 0x80);
                }
                else if (uVar1 == 0x10300000) {
                  pcVar5 = *(code **)(*param_1 + 0x84);
                }
                else {
                  if (uVar1 != 0x10400000) goto LAB_82962c1c;
                  pcVar5 = *(code **)(*param_1 + 0x88);
                }
              }
            }
            else if (uVar1 == 0x10600000) {
              pcVar5 = *(code **)(*param_1 + 0x90);
            }
            else if (uVar1 == 0x10700000) {
              pcVar5 = *(code **)(*param_1 + 0x98);
            }
            else if (uVar1 == 0x10d00000) {
              if ((param_1[0x1c] & 0x4000000U) == 0) {
LAB_8296265c:
                iVar3 = -0x7fffbfff;
                goto LAB_82962b98;
              }
              pcVar5 = *(code **)(*param_1 + 0xe0);
            }
            else {
              if (uVar1 != 0x10e00000) goto LAB_82962c1c;
              if ((param_1[0x1c] & 0x4000000U) == 0) goto LAB_8296265c;
              pcVar5 = *(code **)(*param_1 + 0xe4);
            }
          }
          else if (uVar1 < 0x20100001) {
            if (uVar1 == 0x20100000) {
LAB_82962a08:
              pcVar5 = *(code **)(*param_1 + 0xa0);
            }
            else if (uVar1 == 0x11000000) {
              if ((param_1[0x1c] & 0x1000000U) != 0) goto LAB_82962c1c;
              pcVar5 = *(code **)(*param_1 + 0xdc);
            }
            else {
              if (uVar1 != 0x11200000) {
                if (uVar1 == 0x11300000) goto LAB_82962ba0;
                if (uVar1 != 0x11500000) {
                  if (uVar1 != 0x20000000) goto LAB_82962c1c;
                  goto LAB_829626c4;
                }
              }
LAB_829625d8:
              pcVar5 = *(code **)(*param_1 + 0x7c);
            }
          }
          else if (uVar1 == 0x20200000) {
            pcVar5 = *(code **)(*param_1 + 0xa4);
          }
          else if (uVar1 == 0x20300000) {
            pcVar5 = *(code **)(*param_1 + 0xa8);
          }
          else if (uVar1 == 0x20400000) {
            pcVar5 = *(code **)(*param_1 + 0xac);
          }
          else {
            if (uVar1 != 0x20500000) goto LAB_82962c1c;
            pcVar5 = *(code **)(*param_1 + 0xb0);
          }
          goto LAB_82962b8c;
        }
        if (0x60400000 < uVar1) {
          if (uVar1 < 0x60a00001) {
            if ((uVar1 == 0x60a00000) || (uVar1 == 0x60500000)) goto LAB_829628b8;
            if (uVar1 != 0x60600000) {
              if (uVar1 != 0x60700000) {
                if (uVar1 != 0x60800000) {
                  uVar4 = 0x60900000;
                  goto LAB_8296286c;
                }
LAB_82962814:
                if ((param_1[0x1c] & 0x1000000U) != 0) goto LAB_82962c1c;
                pcVar5 = *(code **)(*param_1 + 0x110);
                goto LAB_82962b8c;
              }
              goto LAB_8296293c;
            }
          }
          else if (uVar1 != 0x60b00000) {
            if (uVar1 != 0x60c00000) {
              if (uVar1 == 0x60d00000) goto LAB_82962814;
              uVar4 = 0x60e00000;
LAB_8296286c:
              if (uVar1 != uVar4) goto LAB_82962c1c;
              goto LAB_82962874;
            }
LAB_8296293c:
            if ((param_1[0x1c] & 0x1000000U) != 0) goto LAB_82962c1c;
            pcVar5 = *(code **)(*param_1 + 0x10c);
            goto LAB_82962b8c;
          }
LAB_82962954:
          pcVar5 = *(code **)(*param_1 + 0x118);
          goto LAB_82962b8c;
        }
        if (uVar1 == 0x60400000) {
LAB_82962874:
          if ((param_1[0x1c] & 0x2000000U) == 0) goto LAB_82962c1c;
          pcVar5 = *(code **)(*param_1 + 0x114);
          goto LAB_82962b8c;
        }
        if (0x50300000 < uVar1) {
          if (uVar1 == 0x60000000) goto LAB_829628b8;
          if (uVar1 != 0x60100000) {
            if (uVar1 != 0x60200000) {
              if (uVar1 != 0x60300000) goto LAB_82962c1c;
              goto LAB_82962814;
            }
            goto LAB_8296293c;
          }
          goto LAB_82962954;
        }
        if (uVar1 == 0x50300000) {
          pcVar5 = *(code **)(*param_1 + 0xe8);
          goto LAB_82962b8c;
        }
        if (uVar1 != 0x20800000) {
          if (uVar1 == 0x20900000) goto LAB_829625d8;
          if (uVar1 == 0x30000000) {
            if ((param_1[0x1c] & 0x1000000U) != 0) goto LAB_82962c1c;
            pcVar5 = *(code **)(*param_1 + 0xbc);
          }
          else if (uVar1 == 0x50000000) {
            pcVar5 = *(code **)(*param_1 + 0xb4);
          }
          else {
            if (uVar1 != 0x50100000) goto LAB_82962c1c;
            pcVar5 = *(code **)(*param_1 + 0xb8);
          }
          goto LAB_82962b8c;
        }
      }
      else {
        if (0x73400000 < uVar1) {
          if (uVar1 < 0x73f00001) {
            if (uVar1 == 0x73f00000) {
LAB_82962a68:
              pcVar5 = *(code **)(*param_1 + 0x128);
            }
            else {
              if (uVar1 < 0x73a00001) {
                if (uVar1 != 0x73a00000) {
                  if ((((uVar1 == 0x73500000) || (uVar1 == 0x73600000)) || (uVar1 == 0x73700000)) ||
                     (uVar1 == 0x73800000)) goto LAB_82962b04;
                  if (uVar1 != 0x73900000) goto LAB_82962c1c;
                }
              }
              else if ((uVar1 != 0x73b00000) && (uVar1 != 0x73c00000)) {
                if (uVar1 != 0x73d00000) {
                  uVar4 = 0x73e00000;
LAB_82962a60:
                  if (uVar1 != uVar4) goto LAB_82962c1c;
                }
                goto LAB_82962a68;
              }
              pcVar5 = *(code **)(*param_1 + 0x120);
            }
          }
          else {
            if (uVar1 < 0x74500001) {
              if (uVar1 != 0x74500000) {
                if (uVar1 == 0x74000000) goto LAB_82962a68;
                if (uVar1 == 0x74100000) {
                  pcVar5 = *(code **)(*param_1 + 0xf4);
                }
                else {
                  if (uVar1 != 0x74200000) {
                    if ((uVar1 != 0x74300000) && (uVar1 != 0x74400000)) goto LAB_82962c1c;
                    goto LAB_82962b84;
                  }
                  pcVar5 = *(code **)(*param_1 + 0xec);
                }
                goto LAB_82962b8c;
              }
            }
            else if ((uVar1 != 0x74600000) && (uVar1 != 0x74700000)) {
              if (uVar1 == 0x74a00000) {
                pcVar5 = *(code **)(*param_1 + 0xf8);
              }
              else {
                if (uVar1 != 0x74b00000) goto LAB_82962c1c;
                pcVar5 = *(code **)(*param_1 + 0xf0);
              }
              goto LAB_82962b8c;
            }
LAB_82962b84:
            pcVar5 = *(code **)(*param_1 + 0xfc);
          }
          goto LAB_82962b8c;
        }
        if (uVar1 == 0x73400000) {
          pcVar5 = *(code **)(*param_1 + 300);
          goto LAB_82962b8c;
        }
        if (uVar1 < 0x70600001) {
          if (uVar1 == 0x70600000) {
LAB_8296299c:
            pcVar5 = *(code **)(*param_1 + 0xd8);
          }
          else if (uVar1 < 0x70100001) {
            if (uVar1 == 0x70100000) {
              pcVar5 = *(code **)(*param_1 + 200);
            }
            else {
              if (uVar1 == 0x61000000) goto LAB_82962954;
              if (uVar1 == 0x61100000) goto LAB_8296293c;
              if (uVar1 == 0x61200000) goto LAB_82962814;
              if (uVar1 == 0x61300000) goto LAB_82962874;
              if (uVar1 != 0x70000000) goto LAB_82962c1c;
              pcVar5 = *(code **)(*param_1 + 0xc4);
            }
          }
          else if (uVar1 == 0x70200000) {
            pcVar5 = *(code **)(*param_1 + 0xcc);
          }
          else {
            if ((uVar1 != 0x70300000) && (uVar1 != 0x70400000)) {
              if (uVar1 != 0x70500000) goto LAB_82962c1c;
              goto LAB_8296299c;
            }
            pcVar5 = *(code **)(*param_1 + 0xd0);
          }
          goto LAB_82962b8c;
        }
        if (uVar1 < 0x70d00001) {
          if (uVar1 == 0x70d00000) {
            pcVar5 = *(code **)(*param_1 + 0x94);
          }
          else {
            if (uVar1 == 0x70700000) goto LAB_8296299c;
            if (uVar1 == 0x70800000) {
              pcVar5 = *(code **)(*param_1 + 0x11c);
            }
            else if (uVar1 == 0x70900000) {
              pcVar5 = *(code **)(*param_1 + 0xd4);
            }
            else {
              if (uVar1 != 0x70b00000) {
                if (uVar1 != 0x70c00000) goto LAB_82962c1c;
                goto LAB_82962a08;
              }
LAB_829626c4:
              pcVar5 = *(code **)(*param_1 + 0x9c);
            }
          }
          goto LAB_82962b8c;
        }
        if (uVar1 == 0x73000000) {
          uVar2 = 0;
        }
        else {
          if (uVar1 == 0x73100000) goto LAB_82962a68;
          if (uVar1 != 0x73200000) {
            uVar4 = 0x73300000;
            goto LAB_82962a60;
          }
          uVar2 = 1;
        }
        iVar3 = (**(code **)(*param_1 + 0x124))(param_1,uVar2);
LAB_82962b98:
        if (iVar3 == -0x7fffbfff) {
LAB_82962c1c:
          if ((param_1[0x1c] & 0x1000000U) == 0) {
            uVar2 = 0xffffffff82034330;
          }
          else {
            uVar2 = 0xffffffff82034368;
          }
          fn_82975B00(param_1,*(undefined4 *)(param_1[0x41] + 0x3c),0x11b4,uVar2);
          return 0xffffffff80004001;
        }
      }
LAB_82962ba0:
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[3]);
  }
  return 0;
}

