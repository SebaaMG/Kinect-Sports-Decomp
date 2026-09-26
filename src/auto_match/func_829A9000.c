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
extern int fn_829A7520();
extern int fn_829A7920();
extern int fn_829A7C60();


undefined8 fn_829A9000(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1[3] != 0) {
    iVar3 = 0;
    do {
      param_1[0x40] = uVar5;
      param_1[0x41] = *(int *)(param_1[6] + iVar3);
      fn_8294C090(param_1);
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar5 < (uint)param_1[3]);
  }
  uVar5 = 0;
  if (param_1[3] != 0) {
    do {
      param_1[0x40] = uVar5;
      iVar3 = *(int *)(uVar5 * 4 + param_1[6]);
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
      if (uVar1 < 0x70600001) {
        if (uVar1 == 0x70600000) {
LAB_829a931c:
          pcVar4 = *(code **)(*param_1 + 0xd8);
LAB_829a9570:
          iVar3 = (*pcVar4)(param_1);
          goto LAB_829a9584;
        }
        if (0x20300000 < uVar1) {
          if (uVar1 < 0x50300001) {
            if (uVar1 == 0x50300000) {
              pcVar4 = *(code **)(*param_1 + 0xe8);
            }
            else if (uVar1 == 0x20400000) {
              pcVar4 = *(code **)(*param_1 + 0xac);
            }
            else if (uVar1 == 0x20500000) {
              pcVar4 = *(code **)(*param_1 + 0xb0);
            }
            else if (uVar1 == 0x20700000) {
              pcVar4 = *(code **)(*param_1 + 0x104);
            }
            else {
              if (uVar1 == 0x20800000) goto LAB_829a958c;
              if (uVar1 == 0x20900000) goto LAB_829a9184;
              if (uVar1 == 0x50000000) {
                pcVar4 = *(code **)(*param_1 + 0xb4);
              }
              else {
                if (uVar1 != 0x50100000) goto LAB_829a95a8;
                pcVar4 = *(code **)(*param_1 + 0xb8);
              }
            }
          }
          else if (uVar1 == 0x70000000) {
            pcVar4 = *(code **)(*param_1 + 0xc4);
          }
          else if (uVar1 == 0x70100000) {
            pcVar4 = *(code **)(*param_1 + 200);
          }
          else if (uVar1 == 0x70200000) {
            pcVar4 = *(code **)(*param_1 + 0xcc);
          }
          else {
            if ((uVar1 != 0x70300000) && (uVar1 != 0x70400000)) {
              if (uVar1 != 0x70500000) goto LAB_829a95a8;
              goto LAB_829a931c;
            }
            pcVar4 = *(code **)(*param_1 + 0xd0);
          }
          goto LAB_829a9570;
        }
        if (uVar1 == 0x20300000) {
          pcVar4 = *(code **)(*param_1 + 0xa8);
          goto LAB_829a9570;
        }
        if (uVar1 < 0x10700001) {
          if (uVar1 == 0x10700000) {
            pcVar4 = *(code **)(*param_1 + 0x98);
          }
          else if ((*(uint *)param_1[0x41] & 0xfff00000) == 0) {
            pcVar4 = *(code **)(*param_1 + 0x78);
          }
          else {
            if (uVar1 == 0x10000000) goto LAB_829a9184;
            if (uVar1 == 0x10100000) {
              pcVar4 = *(code **)(*param_1 + 0x80);
            }
            else if (uVar1 == 0x10300000) {
              pcVar4 = *(code **)(*param_1 + 0x84);
            }
            else {
              if (uVar1 != 0x10400000) {
                if (uVar1 == 0x10500000) {
                  iVar3 = fn_829A7920(param_1);
                }
                else {
                  if (uVar1 != 0x10600000) goto LAB_829a95a8;
                  iVar3 = fn_829A7C60(param_1);
                }
                goto LAB_829a9584;
              }
              pcVar4 = *(code **)(*param_1 + 0x88);
            }
          }
          goto LAB_829a9570;
        }
        if (uVar1 == 0x10f00000) {
LAB_829a946c:
          pcVar4 = *(code **)(*param_1 + 0x100);
          goto LAB_829a9570;
        }
        if (uVar1 == 0x11200000) {
LAB_829a9184:
          pcVar4 = *(code **)(*param_1 + 0x7c);
          goto LAB_829a9570;
        }
        if (uVar1 != 0x11300000) {
          if (uVar1 != 0x11500000) {
            if (uVar1 == 0x20000000) {
              pcVar4 = *(code **)(*param_1 + 0x9c);
            }
            else if (uVar1 == 0x20100000) {
              pcVar4 = *(code **)(*param_1 + 0xa0);
            }
            else {
              if (uVar1 != 0x20200000) goto LAB_829a95a8;
              pcVar4 = *(code **)(*param_1 + 0xa4);
            }
            goto LAB_829a9570;
          }
          goto LAB_829a9184;
        }
      }
      else {
        if (uVar1 < 0x73a00001) {
          if (uVar1 == 0x73a00000) {
LAB_829a9460:
            pcVar4 = *(code **)(*param_1 + 0x120);
          }
          else if (uVar1 < 0x73300001) {
            if (uVar1 == 0x73300000) {
LAB_829a93cc:
              pcVar4 = *(code **)(*param_1 + 0x128);
            }
            else {
              if (uVar1 == 0x70700000) goto LAB_829a931c;
              if (uVar1 == 0x70900000) {
                pcVar4 = *(code **)(*param_1 + 0xd4);
              }
              else {
                if (uVar1 != 0x70d00000) {
                  if (uVar1 == 0x71000000) {
                    iVar3 = fn_829A7520(param_1);
                    goto LAB_829a9584;
                  }
                  if (uVar1 == 0x73000000) {
                    uVar2 = 0;
                  }
                  else {
                    if (uVar1 == 0x73100000) goto LAB_829a93cc;
                    if (uVar1 != 0x73200000) goto LAB_829a95a8;
                    uVar2 = 1;
                  }
                  iVar3 = (**(code **)(*param_1 + 0x124))(param_1,uVar2);
                  goto LAB_829a9584;
                }
                pcVar4 = *(code **)(*param_1 + 0x94);
              }
            }
          }
          else {
            if (uVar1 != 0x73400000) {
              if ((((uVar1 == 0x73500000) || (uVar1 == 0x73600000)) || (uVar1 == 0x73700000)) ||
                 (uVar1 == 0x73800000)) goto LAB_829a946c;
              if (uVar1 != 0x73900000) goto LAB_829a95a8;
              goto LAB_829a9460;
            }
            pcVar4 = *(code **)(*param_1 + 300);
          }
          goto LAB_829a9570;
        }
        if (uVar1 < 0x74200001) {
          if (uVar1 == 0x74200000) {
            pcVar4 = *(code **)(*param_1 + 0xec);
          }
          else {
            if ((uVar1 == 0x73b00000) || (uVar1 == 0x73c00000)) goto LAB_829a9460;
            if (((uVar1 == 0x73d00000) || (uVar1 == 0x73e00000)) ||
               ((uVar1 == 0x73f00000 || (uVar1 == 0x74000000)))) goto LAB_829a93cc;
            if (uVar1 != 0x74100000) goto LAB_829a95a8;
            pcVar4 = *(code **)(*param_1 + 0xf4);
          }
          goto LAB_829a9570;
        }
        if ((((uVar1 != 0x74400000) && (uVar1 != 0x74500000)) && (uVar1 != 0x74600000)) &&
           (uVar1 != 0x74700000)) {
          if (uVar1 == 0x74a00000) {
            pcVar4 = *(code **)(*param_1 + 0xf8);
          }
          else {
            if (uVar1 != 0x74b00000) goto LAB_829a95a8;
            pcVar4 = *(code **)(*param_1 + 0xf0);
          }
          goto LAB_829a9570;
        }
        if ((param_1[0x1c] & 0x10000000U) != 0) {
          pcVar4 = *(code **)(*param_1 + 0xfc);
          goto LAB_829a9570;
        }
        iVar3 = -0x7fffbfff;
LAB_829a9584:
        if (iVar3 == -0x7fffbfff) {
LAB_829a95a8:
          fn_82975B00(param_1,*(undefined4 *)(param_1[0x41] + 0x3c),0x11b4,0xffffffff82034368)
          ;
          return 0xffffffff80004001;
        }
      }
LAB_829a958c:
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[3]);
  }
  return 0;
}

