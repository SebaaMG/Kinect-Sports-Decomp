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
extern int fn_82BA02A8();
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE5B80();
extern int fn_82BE5C30();
extern int fn_82BE5C78();
extern int fn_82BE5CC0();
extern int fn_82BE5F40();
extern int fn_82BE68A0();
extern int fn_82BE68F0();
extern int fn_82BEB628();
extern int fn_82BF5958();
extern int fn_82BF6540();


bool fn_82BF6758(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar4;
  int iVar5;
  char cVar9;
  uint uVar6;
  int iVar7;
  ulonglong uVar2;
  undefined2 uVar8;
  longlong lVar3;
  undefined8 uVar10;
  short sVar12;
  short sVar13;
  char cVar14;
  uint uVar11;
  int aiStack_50 [20];
  
  puVar4 = (undefined4 *)thunk_FUN_82be5550(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  *(undefined4 **)(param_1 + 0x60) = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    uVar10 = 0xffffffff820ebbf4;
  }
  else {
    puVar4 = (undefined4 *)thunk_FUN_82be5550(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    *(undefined4 **)(param_1 + 0x54) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      uVar10 = 0xffffffff820ebbd4;
    }
    else {
      puVar4 = (undefined4 *)thunk_FUN_82be5550(0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
      }
      *(undefined4 **)(param_1 + 0x58) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        uVar10 = 0xffffffff820ebbc4;
      }
      else {
        puVar4 = (undefined4 *)thunk_FUN_82be5550(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
        }
        *(undefined4 **)(param_1 + 0x68) = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          cVar14 = '\0';
          iVar5 = fn_82BE68A0(param_1);
          if (iVar5 == 0) {
            return false;
          }
          cVar9 = fn_82BE5C30(param_1);
          if (cVar9 != -0x32) {
            return false;
          }
          uVar6 = fn_82BE5CC0(param_1);
          iVar5 = *(int *)(param_1 + 0x20);
          uVar11 = 0;
          sVar13 = 0;
          sVar12 = 0;
          do {
            if (uVar6 <= uVar11) {
              if (cVar14 != '\x03') {
                return false;
              }
              if (*(short *)(param_1 + 0x5c) != sVar13) {
                return false;
              }
              if (*(short *)(param_1 + 0x6c) != sVar12) {
                return false;
              }
              lVar3 = fn_82BE5B80(param_1);
              return lVar3 != 0;
            }
            uVar10 = fn_82BE5C30(param_1);
            uVar11 = (uint)uVar10 & 0xff;
            if (uVar11 == 0x1e) {
              fn_82BE68F0(param_1,uVar10);
              fn_82BA02A8(param_1,*(undefined4 *)(param_1 + 0x30),0x14);
              uVar6 = uVar6 - 0x16;
LAB_82bf6a30:
              cVar14 = cVar14 + '\x01';
            }
            else {
              if (uVar11 == 0x25) {
                uVar8 = fn_82BE5C78();
                *(undefined2 *)(param_1 + 0x5c) = uVar8;
                goto LAB_82bf6a30;
              }
              if (uVar11 == 0x55) {
                uVar8 = fn_82BE5C78();
                *(undefined2 *)(param_1 + 0x6c) = uVar8;
                goto LAB_82bf6a30;
              }
              if (uVar11 == 0xdd) {
                aiStack_50[0] = 2;
                iVar7 = fn_82BF5958(param_1,aiStack_50);
                if (iVar7 == 0) {
                  return false;
                }
                if (*(int *)(iVar7 + 0x10) == 0) {
                  return false;
                }
                uVar2 = thunk_FUN_82be5550(0xc);
                if ((uVar2 & 0xffffffff) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = fn_82BEB628(uVar2,iVar7);
                }
                if (iVar7 == 0) {
                  uVar10 = 0xffffffff820ebb68;
LAB_82bf6a94:
                  fn_82BE5240(param_1,0x65,uVar10);
                  *(undefined4 *)(param_1 + 0x10) = 0;
                  return false;
                }
                if (aiStack_50[0] == 0x10) {
                  uVar1 = *(undefined4 *)(param_1 + 0x54);
                }
                else {
                  uVar1 = *(undefined4 *)(param_1 + 0x58);
                }
                fn_82BE52B8(uVar1);
                sVar13 = sVar13 + 1;
              }
              else if (uVar11 == 0xe3) {
                iVar7 = fn_82BF6540();
                if (iVar7 == 0) {
                  return false;
                }
                if (*(int *)(iVar7 + 0x10) == 0) {
                  return false;
                }
                uVar2 = thunk_FUN_82be5550(0xc);
                if ((uVar2 & 0xffffffff) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = fn_82BEB628(uVar2,iVar7);
                }
                if (iVar7 == 0) {
                  uVar10 = 0xffffffff820ebb8c;
                  goto LAB_82bf6a94;
                }
                fn_82BE52B8(*(undefined4 *)(param_1 + 0x68));
                sVar12 = sVar12 + 1;
              }
              else {
                iVar7 = fn_82BE5F40();
                if (iVar7 == 0) {
                  return false;
                }
              }
            }
            uVar11 = *(int *)(param_1 + 0x20) - iVar5;
          } while( true );
        }
        uVar10 = 0xffffffff820ebbb4;
      }
    }
  }
  fn_82BE5240(param_1,0x65,uVar10);
  return false;
}

