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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_ac;
extern int fn_82C64E00();
extern int fn_82C66328();
extern int fn_82CAF338();
extern int fn_82CAF7F8();
extern int fn_82CBD918();
extern unsigned int iStack_b0;
extern unsigned int lbl_820FDD78;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;


void fn_82C68D68(int param_1,uint *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
                  short *param_6,longlong param_7,undefined8 param_8)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  short *psVar7;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  int iStack_b0;
  undefined1 auStack_ac [4];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 auStack_a0 [40];
  
  auStack_a0[2] = (undefined4)param_8;
  auStack_a0[0] = in_stack_0000005c;
  auStack_a0[1] = in_stack_00000054;
  auStack_a0[3] = in_stack_0000005c;
  if (*(int *)(param_1 + 0x18c) == 0) {
    uStack_a4 = *(undefined4 *)(param_1 + 0xb64);
    uStack_a8 = *(undefined4 *)(param_1 + 0xb70);
  }
  else {
    uVar6 = *param_2 >> 0x16 & 3;
    uStack_a4 = *(undefined4 *)((uVar6 + 0x2df) * 4 + param_1);
    uStack_a8 = *(undefined4 *)((uVar6 + 0x2e2) * 4 + param_1);
  }
  uVar6 = 0;
  iVar1 = iStack_b0;
  while( true ) {
    iStack_b0 = iVar1;
    psVar7 = param_6;
    lVar5 = param_7;
    if (*(int *)(param_1 + 0x3cb0) < 3) {
      if (*(int *)(param_1 + 0x3cb0) == 2) {
        fn_82C64E00(param_1,&iStack_b0,0xffffffff82109af0,7);
      }
      else {
        fn_82C66328(param_1,&iStack_b0,0xffffffff8210ddf0,0xb);
      }
    }
    else {
      fn_82CBD918(param_1,&iStack_b0,*(undefined4 *)(param_1 + 0x830),0x77,
                        *(undefined4 *)(param_1 + 300));
    }
    if (iStack_b0 != 0) break;
    psVar2 = (short *)fn_82CAF7F8(param_1,lVar5,param_8,in_stack_00000054,auStack_a0[uVar6],
                                   auStack_ac);
    if (*(int *)(param_1 + 0x3cb0) == 0) {
      sVar3 = (short)(*(int *)(&lbl_820FDD78 + (*(uint *)(param_1 + 300) & 0x3f) * 4) * (int)*psVar2
                      + 0x20000 >> 0x12) + (short)**(undefined4 **)(param_1 + 0x6e4);
      *psVar7 = sVar3;
      sVar3 = sVar3 * (short)*(undefined4 *)(param_1 + 300);
      *psVar7 = sVar3;
      **(int **)(param_1 + 0x6e4) = (int)sVar3;
    }
    else {
      sVar3 = *psVar2 + (short)**(undefined4 **)(param_1 + 0x6e4);
      *psVar7 = sVar3;
      **(int **)(param_1 + 0x6e4) = *(int *)(param_1 + 300) * (int)sVar3;
    }
    iStack_b0 = fn_82CAF338(param_1,&uStack_a8,param_2,param_3,*(undefined4 *)(param_1 + 0xcc)
                                  ,uVar6,psVar7,psVar2);
    if (iStack_b0 != 0) {
      return;
    }
    uVar4 = 8;
    if (uVar6 == 1) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0xec);
    }
    uVar6 = uVar6 + 1;
    param_3 = uVar4 + param_3;
    param_6 = psVar7 + 0x10;
    param_7 = lVar5 + 0x18;
    iVar1 = 0;
    if (3 < uVar6) {
      if (*(int *)(param_1 + 0x3cb0) < 3) {
        if (*(int *)(param_1 + 0x3cb0) == 2) {
          fn_82C64E00(param_1,&iStack_b0,0xffffffff82109bf0,8);
        }
        else {
          fn_82C66328(param_1,&iStack_b0,0xffffffff8210edf0,0xc);
        }
      }
      else {
        fn_82CBD918(param_1,&iStack_b0,*(undefined4 *)(param_1 + 0x834),0x77,
                          *(undefined4 *)(param_1 + 0x130));
      }
      if (iStack_b0 == 0) {
        psVar2 = (short *)fn_82CAF7F8(param_1,lVar5 + 0x18,param_8,in_stack_00000054,
                                       in_stack_0000005c,auStack_ac);
        if (*(int *)(param_1 + 0x3cb0) == 0) {
          sVar3 = (short)(*(int *)(&lbl_820FDD78 + (*(uint *)(param_1 + 0x130) & 0x3f) * 4) *
                          (int)*psVar2 + 0x20000 >> 0x12) +
                  (short)**(undefined4 **)(param_1 + 0x6e4);
          *param_6 = sVar3;
          sVar3 = sVar3 * (short)*(undefined4 *)(param_1 + 0x130);
          *param_6 = sVar3;
          **(int **)(param_1 + 0x6e4) = (int)sVar3;
        }
        else {
          sVar3 = *psVar2 + (short)**(undefined4 **)(param_1 + 0x6e4);
          *param_6 = sVar3;
          **(int **)(param_1 + 0x6e4) = (int)sVar3 * *(int *)(param_1 + 0x130);
        }
        if (*(int *)(param_1 + 0x3cb0) == 0) {
          iStack_b0 = fn_82CAF338(param_1,&uStack_a8,param_2,param_4,
                                        *(undefined4 *)(param_1 + 0xd0),4,param_6);
        }
        else {
          iStack_b0 = fn_82CAF338(param_1,&uStack_a4,param_2,param_4,
                                        *(undefined4 *)(param_1 + 0xd0),4,param_6);
        }
        if (iStack_b0 == 0) {
          psVar7 = psVar7 + 0x20;
          if (*(int *)(param_1 + 0x3cb0) < 3) {
            if (*(int *)(param_1 + 0x3cb0) == 2) {
              fn_82C64E00(param_1,&iStack_b0,0xffffffff82109bf0,8);
            }
            else {
              fn_82C66328(param_1,&iStack_b0,0xffffffff8210edf0,0xc);
            }
          }
          else {
            fn_82CBD918(param_1,&iStack_b0,*(undefined4 *)(param_1 + 0x834),0x77,
                              *(undefined4 *)(param_1 + 0x130));
          }
          if (iStack_b0 == 0) {
            psVar2 = (short *)fn_82CAF7F8(param_1,lVar5 + 0x30,param_8,in_stack_00000054,
                                           in_stack_0000005c,auStack_ac);
            if (*(int *)(param_1 + 0x3cb0) == 0) {
              sVar3 = (short)(*(int *)(&lbl_820FDD78 + (*(uint *)(param_1 + 0x130) & 0x3f) * 4) *
                              (int)*psVar2 + 0x20000 >> 0x12) +
                      (short)**(undefined4 **)(param_1 + 0x6e4);
              *psVar7 = sVar3;
              sVar3 = sVar3 * (short)*(undefined4 *)(param_1 + 0x130);
              *psVar7 = sVar3;
              **(int **)(param_1 + 0x6e4) = (int)sVar3;
            }
            else {
              sVar3 = *psVar2 + (short)**(undefined4 **)(param_1 + 0x6e4);
              *psVar7 = sVar3;
              **(int **)(param_1 + 0x6e4) = (int)sVar3 * *(int *)(param_1 + 0x130);
            }
            if (*(int *)(param_1 + 0x3cb0) == 0) {
              fn_82CAF338(param_1,&uStack_a8,param_2,param_5,*(undefined4 *)(param_1 + 0xd0),5
                                ,psVar7);
            }
            else {
              fn_82CAF338(param_1,&uStack_a4,param_2,param_5,*(undefined4 *)(param_1 + 0xd0),5
                                ,psVar7);
            }
          }
        }
      }
      return;
    }
  }
  return;
}

