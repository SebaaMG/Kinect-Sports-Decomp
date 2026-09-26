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
extern unsigned int *auStack_440;
extern unsigned int *auStack_570;
extern unsigned int *auStack_580;
extern unsigned int *auStack_670;
extern unsigned int *auStack_680;
extern unsigned int *auStack_8a0;
extern unsigned int *auStack_9a0;
extern int fn_82F2A8A8();
extern int fn_82F2A9C8();
extern unsigned int iStack_9a4;
extern unsigned int uStack_9a8;
extern unsigned int uStack_9ac;


void fn_82E9AC18(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  short asStack_9b0 [2];
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  int iStack_9a4;
  undefined2 auStack_9a0 [128];
  undefined1 auStack_8a0 [544];
  undefined1 auStack_680 [16];
  undefined1 auStack_670 [240];
  undefined1 auStack_580 [16];
  undefined1 auStack_570 [304];
  undefined1 auStack_440 [1088];
  
  iVar7 = 0;
  uStack_9a8 = 0;
  uStack_9ac = 0;
  uVar1 = *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 0x1385) * 4 + param_1);
  uVar2 = *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 5000) * 4 + param_1);
  iStack_9a4 = 0;
  iVar8 = 0;
  iVar5 = 0;
  (**(code **)(param_1 + 0x6f80))(param_2,param_3,param_4,param_5,auStack_680,param_6,param_7);
  (**(code **)(param_1 + 0x1f8c))(auStack_680,param_6,auStack_8a0,auStack_440);
  (**(code **)(param_1 + 0x2010))
            (param_1,auStack_9a0,asStack_9b0,auStack_8a0,*(undefined4 *)(param_1 + 0x2048),
             &iStack_9a4,0x40,*(undefined4 *)(param_1 + 0x2070));
  if (asStack_9b0[0] != 0) {
    if (0 < (longlong)asStack_9b0[0] + -2) {
      piVar6 = &iStack_9a4;
      do {
        puVar3 = (undefined2 *)((int)piVar6 + 6);
        piVar6 = piVar6 + 1;
        iVar4 = fn_82F2A8A8(param_1,*puVar3,*(undefined2 *)piVar6,uVar1,&uStack_9a8,&uStack_9ac);
        iVar5 = iVar5 + 2;
        iVar8 = iVar4 + iVar8;
      } while (iVar5 < asStack_9b0[0] + -2);
    }
    iVar5 = fn_82F2A9C8(param_1,auStack_9a0[iVar5 + 1],auStack_9a0[iVar5],uVar2,&uStack_9a8,
                              &uStack_9ac);
    iVar8 = iVar5 + iVar8;
    iVar5 = 1;
  }
  if (8 < (int)param_6) {
    (**(code **)(param_1 + 0x1f8c))(auStack_670,param_6,auStack_8a0,auStack_440);
    (**(code **)(param_1 + 0x2010))
              (param_1,auStack_9a0,asStack_9b0,auStack_8a0,*(undefined4 *)(param_1 + 0x2048),
               &iStack_9a4,0x40,*(undefined4 *)(param_1 + 0x2070));
    if (asStack_9b0[0] != 0) {
      iVar5 = 0;
      if (0 < (longlong)asStack_9b0[0] + -2) {
        piVar6 = &iStack_9a4;
        do {
          puVar3 = (undefined2 *)((int)piVar6 + 6);
          piVar6 = piVar6 + 1;
          iVar4 = fn_82F2A8A8(param_1,*puVar3,*(undefined2 *)piVar6,uVar1,&uStack_9a8,&uStack_9ac);
          iVar5 = iVar5 + 2;
          iVar8 = iVar4 + iVar8;
        } while (iVar5 < asStack_9b0[0] + -2);
      }
      iVar5 = fn_82F2A9C8(param_1,auStack_9a0[iVar5 + 1],auStack_9a0[iVar5],uVar2,&uStack_9a8,
                                &uStack_9ac);
      iVar8 = iVar5 + iVar8;
      iVar5 = 1;
    }
    if (8 < (int)param_7) {
      (**(code **)(param_1 + 0x1f8c))(auStack_580,param_6,auStack_8a0,auStack_440);
      (**(code **)(param_1 + 0x2010))
                (param_1,auStack_9a0,asStack_9b0,auStack_8a0,*(undefined4 *)(param_1 + 0x2048),
                 &iStack_9a4,0x40,*(undefined4 *)(param_1 + 0x2070));
      if (asStack_9b0[0] != 0) {
        iVar5 = 0;
        if (0 < (longlong)asStack_9b0[0] + -2) {
          piVar6 = &iStack_9a4;
          do {
            puVar3 = (undefined2 *)((int)piVar6 + 6);
            piVar6 = piVar6 + 1;
            iVar4 = fn_82F2A8A8(param_1,*puVar3,*(undefined2 *)piVar6,uVar1,&uStack_9a8,&uStack_9ac
                                );
            iVar5 = iVar5 + 2;
            iVar8 = iVar4 + iVar8;
          } while (iVar5 < asStack_9b0[0] + -2);
        }
        iVar5 = fn_82F2A9C8(param_1,auStack_9a0[iVar5 + 1],auStack_9a0[iVar5],uVar2,
                                  &uStack_9a8,&uStack_9ac);
        iVar8 = iVar5 + iVar8;
        iVar5 = 1;
      }
      (**(code **)(param_1 + 0x1f8c))(auStack_570,param_6,auStack_8a0,auStack_440);
      (**(code **)(param_1 + 0x2010))
                (param_1,auStack_9a0,asStack_9b0,auStack_8a0,*(undefined4 *)(param_1 + 0x2048),
                 &iStack_9a4,0x40,*(undefined4 *)(param_1 + 0x2070));
      if (asStack_9b0[0] != 0) {
        if (0 < (longlong)asStack_9b0[0] + -2) {
          piVar6 = &iStack_9a4;
          do {
            puVar3 = (undefined2 *)((int)piVar6 + 6);
            piVar6 = piVar6 + 1;
            iVar5 = fn_82F2A8A8(param_1,*puVar3,*(undefined2 *)piVar6,uVar1,&uStack_9a8,&uStack_9ac
                                );
            iVar7 = iVar7 + 2;
            iVar8 = iVar5 + iVar8;
          } while (iVar7 < asStack_9b0[0] + -2);
        }
        iVar5 = fn_82F2A9C8(param_1,auStack_9a0[iVar7 + 1],auStack_9a0[iVar7],uVar2,
                                  &uStack_9a8,&uStack_9ac);
        iVar8 = iVar5 + iVar8;
        iVar5 = 1;
      }
    }
  }
  *in_stack_00000054 = iVar8;
  *in_stack_0000005c = iStack_9a4 >> 8;
  *in_stack_00000064 = iVar5;
  return;
}

