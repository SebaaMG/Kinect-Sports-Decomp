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
extern unsigned int *auStack_5c;
extern int fn_828FA8D8();
extern int fn_828FBE30();
extern int fn_828FC450();
extern int fn_828FCDE0();
extern int fn_82934540();
extern unsigned int lbl_8202C578;
extern unsigned int lbl_8202C57C;
extern unsigned int lbl_8202C580;
extern unsigned int lbl_8202C724;
extern unsigned int lbl_8202C728;
extern unsigned int lbl_8202C72C;
extern unsigned int lbl_8202C730;


undefined8
fn_828FD0A0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte *param_5,
             int param_6,undefined4 *param_7,undefined4 *param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint *in_stack_00000054;
  byte bStack_60;
  char acStack_5f [3];
  uint auStack_5c [23];
  
  pbVar10 = param_5;
  do {
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar1 != 0);
  if (pbVar10 + (-1 - (int)param_5) < (byte *)0x3) {
    uVar5 = 0xffffffff8202c810;
    goto LAB_828fd0f8;
  }
  *param_7 = 0;
  *param_8 = 0;
  pbVar7 = &lbl_8202C580;
  *in_stack_00000054 = 0;
  pbVar10 = param_5;
  do {
    bVar1 = *pbVar10;
    bVar2 = *pbVar7;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar7 = pbVar7 + 1;
  } while (pbVar10 != param_5 + 2);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar7 = &lbl_8202C57C;
    pbVar10 = param_5;
    do {
      bVar1 = *pbVar10;
      bVar2 = *pbVar7;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar10 != param_5 + 2);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar7 = &lbl_8202C730;
      pbVar10 = param_5;
      do {
        bVar1 = *pbVar10;
        bVar2 = *pbVar7;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar10 = pbVar10 + 1;
        pbVar7 = pbVar7 + 1;
      } while (pbVar10 != param_5 + 2);
      pbVar9 = &lbl_8202C72C;
      pbVar7 = &lbl_8202C728;
      pbVar10 = &lbl_8202C724;
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        pbVar11 = param_5;
        pbVar6 = pbVar10;
        do {
          bVar1 = *pbVar11;
          bVar2 = *pbVar6;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar11 = pbVar11 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar11 != param_5 + 2);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          pbVar11 = param_5;
          pbVar6 = pbVar7;
          do {
            bVar1 = *pbVar11;
            bVar2 = *pbVar6;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar11 = pbVar11 + 1;
            pbVar6 = pbVar6 + 1;
          } while (pbVar11 != param_5 + 2);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
            pbVar11 = param_5;
            pbVar6 = pbVar9;
            do {
              bVar1 = *pbVar11;
              bVar2 = *pbVar6;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar11 = pbVar11 + 1;
              pbVar6 = pbVar6 + 1;
            } while (pbVar11 != param_5 + 2);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
              if (*(int *)(param_1 + 0xb0) != 0) {
                pbVar7 = &lbl_8202C578;
                pbVar10 = param_5;
                do {
                  bVar1 = *pbVar10;
                  bVar2 = *pbVar7;
                  if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                  pbVar10 = pbVar10 + 1;
                  pbVar7 = pbVar7 + 1;
                } while (pbVar10 != param_5 + 2);
                if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                  *param_7 = 6;
                  iVar3 = fn_828FC450(param_1 + 0x38,param_5);
                  if (iVar3 == 0) {
                    iVar3 = fn_828FBE30(param_5 + 2,&bStack_60,acStack_5f);
                    if (iVar3 < 0) {
                      uVar5 = 0xffffffff8202c6fc;
                      goto LAB_828fd0f8;
                    }
                    *in_stack_00000054 = *(uint *)(param_1 + 0xa0);
                    fn_828FCDE0(param_1 + 0x38,param_5,*(undefined4 *)(param_1 + 0xa0),1);
                    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
                  }
                  else {
                    *in_stack_00000054 = *(uint *)(iVar3 + 4);
                  }
                  if (param_6 == 0) {
                    return 0;
                  }
                  uVar5 = 0xffffffff8202c6bc;
                  goto LAB_828fd0f8;
                }
              }
              uVar5 = 0xffffffff8202c630;
              goto LAB_828fd0f8;
            }
          }
        }
      }
      pbVar11 = param_5;
      do {
        bVar1 = *pbVar11;
        bVar2 = *pbVar10;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + 1;
      } while (pbVar11 != param_5 + 2);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        uVar8 = 0xe;
        iVar3 = 0;
      }
      else {
        pbVar10 = param_5;
        do {
          bVar1 = *pbVar10;
          bVar2 = *pbVar7;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar10 = pbVar10 + 1;
          pbVar7 = pbVar7 + 1;
        } while (pbVar10 != param_5 + 2);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          uVar8 = 7;
          iVar3 = 1;
        }
        else {
          pbVar10 = param_5;
          do {
            bVar1 = *pbVar10;
            bVar2 = *pbVar9;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar10 = pbVar10 + 1;
            pbVar9 = pbVar9 + 1;
          } while (pbVar10 != param_5 + 2);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            uVar8 = 10;
            iVar3 = 2;
          }
          else {
            uVar8 = 2;
            iVar3 = 3;
          }
        }
      }
      *param_7 = uVar8;
      iVar4 = fn_828FC450(param_1,param_5);
      if (iVar4 == 0) {
        uVar5 = fn_82934540(param_3,param_4,param_5,auStack_5c);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        if (auStack_5c[0] == 0) {
          fn_828FA8D8(param_2,param_4,0x7d5,0xffffffff8202c5f0,param_5,param_5 + 2);
          return 0xffffffff80004005;
        }
        iVar3 = (iVar3 + 0x23) * 4;
        *in_stack_00000054 = *(uint *)(iVar3 + param_1);
        fn_828FCDE0(param_1,param_5,*(undefined4 *)(iVar3 + param_1));
        *(uint *)(iVar3 + param_1) = *(int *)(iVar3 + param_1) + auStack_5c[0];
        *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
      }
      else {
        *in_stack_00000054 = *(uint *)(iVar4 + 4);
        auStack_5c[0] = *(uint *)(iVar4 + 8);
      }
      if (param_6 == 0) {
        return 0;
      }
      if (auStack_5c[0] < *(uint *)(param_6 + 0x18)) {
        fn_828FA8D8(param_2,param_4,0x7d5,0xffffffff8202c5a0,param_5);
        return 0xffffffff80004005;
      }
      uVar12 = *(uint *)(param_6 + 0x18) + *in_stack_00000054;
LAB_828fd664:
      *in_stack_00000054 = uVar12;
      return 0;
    }
    *param_7 = 0;
    iVar3 = fn_828FC450(param_1 + 0x54,param_5);
    if (iVar3 == 0) {
      *in_stack_00000054 = *(uint *)(param_1 + 0xa4);
      fn_828FCDE0(param_1 + 0x54,param_5,*(undefined4 *)(param_1 + 0xa4),1);
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    }
    else {
      *in_stack_00000054 = *(uint *)(iVar3 + 4);
    }
    if (param_6 == 0) {
      return 0;
    }
    uVar5 = 0xffffffff8202c734;
    goto LAB_828fd0f8;
  }
  if ((*(int *)(param_1 + 0xb4) < 10) || (0xd < *(int *)(param_1 + 0xb4))) {
    *param_7 = 1;
    iVar3 = fn_828FC450(param_1 + 0x1c,param_5);
    if (iVar3 == 0) {
      iVar3 = fn_828FBE30(param_5 + 2,&bStack_60,acStack_5f);
      if (iVar3 < 0) goto LAB_828fd20c;
      *in_stack_00000054 = *(uint *)(param_1 + 0x9c);
      fn_828FCDE0(param_1 + 0x1c,param_5,*(undefined4 *)(param_1 + 0x9c),1);
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    }
    else {
      *in_stack_00000054 = *(uint *)(iVar3 + 4);
    }
    if (param_6 == 0) {
      return 0;
    }
    uVar5 = 0xffffffff8202c774;
  }
  else {
    iVar3 = fn_828FBE30(param_5 + 2,acStack_5f,&bStack_60);
    if (-1 < iVar3) {
      if (acStack_5f[0] == '\x05') {
        uVar8 = 3;
      }
      else {
        if (acStack_5f[0] != '\n') {
          uVar5 = 0xffffffff8202c7dc;
          goto LAB_828fd0f8;
        }
        uVar8 = 1;
      }
      uVar12 = (uint)bStack_60;
      *param_7 = uVar8;
      goto LAB_828fd664;
    }
LAB_828fd20c:
    uVar5 = 0xffffffff8202c7b4;
  }
LAB_828fd0f8:
  fn_828FA8D8(param_2,param_4,0x7d5,uVar5,param_5);
  return 0xffffffff80004005;
}

