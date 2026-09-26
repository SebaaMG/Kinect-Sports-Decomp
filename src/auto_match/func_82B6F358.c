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
extern int fn_82AB15D0();
extern unsigned int lbl_8316D928;


void fn_82B6F358(int param_1,int param_2,ulonglong param_3,int param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = *(uint **)(*(int *)(param_1 + 0x1c) + 0x2a40);
  if (param_2 == 0xd) {
    param_3 = param_3 & 7;
    if (param_3 != 1) {
      if (param_3 != 2) {
        if (param_3 != 3) {
          uVar2 = 0x6a3;
          goto LAB_82b6f664;
        }
        iVar4 = 7;
        goto LAB_82b6f494;
      }
      iVar4 = 0xd;
      goto LAB_82b6f484;
    }
    iVar4 = 3;
LAB_82b6f69c:
    uVar5 = iVar4 << 5 | puVar1[2] & 0xffffff07;
LAB_82b6f6a4:
    uVar3 = 5;
LAB_82b6f6a8:
    uVar3 = uVar3 | *puVar1 & 0xffffffc0;
  }
  else {
    if (param_2 != 0x48) {
      if (param_2 == 0x51) {
        param_3 = param_3 & 7;
        if (param_3 == 0) {
          uVar3 = 0x11;
        }
        else {
          if (param_3 == 1) {
            iVar4 = 9;
LAB_82b6f42c:
            uVar3 = iVar4 << 1 | *puVar1 & 0xffffffc0;
            goto LAB_82b6f434;
          }
          if (2 < param_3) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x65b);
            uVar3 = *puVar1 & 0xffffffc0 | 0x12;
            goto LAB_82b6f558;
          }
          uVar3 = 0x13;
        }
      }
      else {
        if (param_2 != 0x55) {
          if (param_2 == 0x56) {
            param_3 = param_3 & 7;
            if (param_3 != 0) {
              if (param_3 == 1) {
                iVar4 = 1;
                goto LAB_82b6f69c;
              }
              if (param_3 < 3) {
                iVar4 = 3;
LAB_82b6f494:
                uVar5 = iVar4 << 4 | puVar1[2] & 0xffffff07;
                goto LAB_82b6f6a4;
              }
              if (param_3 != 3) {
                uVar2 = 0x68e;
                goto LAB_82b6f664;
              }
              uVar5 = puVar1[2] & 0xffffff07 | 0x28;
LAB_82b6f4ac:
              *puVar1 = *puVar1 & 0xffffffc0 | 5;
              goto LAB_82b6f6b4;
            }
            iVar4 = 7;
          }
          else {
            if (param_2 != 0x6c) {
              if (param_2 != 0x6d) {
                if (param_4 == 0) {
                  uVar5 = *(uint *)(&lbl_8316D928 + param_2 * 4) & 0x3f | *puVar1 & 0xffffffc0;
                  uVar3 = puVar1[2] & 0xffffff07 | 0x10;
                }
                else {
                  uVar3 = (*(uint *)(&lbl_8316D928 + param_2 * 4) & 0x1f) << 3 |
                          puVar1[2] & 0xffffff07;
                  uVar5 = *puVar1 & 0xffffffc0 | 5;
                }
                *puVar1 = uVar5;
                puVar1[2] = uVar3;
                return;
              }
              param_3 = param_3 & 7;
              if (param_3 != 0) {
                if (param_3 == 1) {
                  uVar3 = 0x1b;
                }
                else {
                  if (param_3 < 3) {
                    iVar4 = 0xf;
                    goto LAB_82b6f42c;
                  }
                  if (param_3 != 3) {
                    uVar2 = 0x6e8;
                    goto LAB_82b6f664;
                  }
                  uVar3 = 0x1d;
                }
                goto LAB_82b6f418;
              }
              iVar4 = 7;
              goto LAB_82b6f450;
            }
            param_3 = param_3 & 7;
            if (param_3 == 0) {
              iVar4 = 0x15;
            }
            else {
              if (param_3 == 1) {
                uVar5 = puVar1[2] & 0xffffff07 | 0xa0;
                goto LAB_82b6f4ac;
              }
              if (param_3 < 3) {
                iVar4 = 0xb;
                goto LAB_82b6f494;
              }
              if (param_3 != 3) {
                uVar2 = 0x6cf;
LAB_82b6f664:
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,uVar2);
                return;
              }
              iVar4 = 0x17;
            }
          }
LAB_82b6f484:
          uVar5 = iVar4 << 3 | puVar1[2] & 0xffffff07;
          goto LAB_82b6f6a4;
        }
        param_3 = param_3 & 7;
        if (param_3 == 0) {
          iVar4 = 5;
LAB_82b6f450:
          uVar3 = iVar4 << 2 | *puVar1 & 0xffffffc0;
          goto LAB_82b6f434;
        }
        if (param_3 != 1) {
          if (2 < param_3) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x672);
            uVar3 = *puVar1 & 0xffffffc0 | 0x15;
            goto LAB_82b6f558;
          }
          iVar4 = 0xb;
          goto LAB_82b6f42c;
        }
        uVar3 = 0x15;
      }
LAB_82b6f418:
      uVar5 = puVar1[2] & 0xffffff07 | 0x10;
      goto LAB_82b6f6a8;
    }
    if ((param_3 & 7) != 0) {
      if ((param_3 & 7) != 1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x6b4);
        uVar3 = *puVar1 & 0xffffffc0 | 0x18;
LAB_82b6f558:
        *puVar1 = uVar3;
        uVar5 = puVar1[2] & 0xffffff07 | 0x10;
        goto LAB_82b6f6b4;
      }
      uVar3 = 0x17;
      goto LAB_82b6f418;
    }
    uVar3 = *puVar1 & 0xffffffc0 | 0x18;
LAB_82b6f434:
    uVar5 = puVar1[2] & 0xffffff07 | 0x10;
  }
  *puVar1 = uVar3;
LAB_82b6f6b4:
  puVar1[2] = uVar5;
  return;
}

