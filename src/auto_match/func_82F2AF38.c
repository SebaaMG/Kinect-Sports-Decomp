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
extern int fn_82F2A8A8();
extern int fn_82F2A9C8();
extern int fn_82F2AC28();
extern unsigned int iStack_c0;
extern unsigned int lbl_831A9CD0;


void fn_82F2AF38(int param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined2 *param_5,short *param_6,int *param_7,int *param_8)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined2 *puVar8;
  int *piStack0000002c;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  int *in_stack_0000006c;
  int *in_stack_00000074;
  int *in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined4 in_stack_0000008c;
  int iStack_c0;
  
  iStack_c0 = 0;
  piStack0000002c = param_4;
  piVar7 = param_4;
  do {
    piVar7 = piVar7 + 1;
    if (*(char *)((int)param_4 + iStack_c0 + 0x4a) == '\0') {
      if (*piVar7 != 0) {
        iVar6 = 0;
        if (0 < (longlong)*param_6 + -2) {
          puVar8 = param_5 + -2;
          do {
            uVar1 = puVar8[3];
            puVar8 = puVar8 + 2;
            uVar2 = *puVar8;
            iVar3 = fn_82F2A8A8(param_1,uVar1,uVar2,*(undefined4 *)(param_1 + 0x4e14),
                                 in_stack_00000084,in_stack_0000008c);
            iVar4 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4d14,in_stack_00000084,
                                 in_stack_0000008c);
            iVar5 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4d54,in_stack_00000084,
                                 in_stack_0000008c);
            iVar6 = iVar6 + 2;
            *param_7 = *param_7 + iVar3;
            *param_8 = *param_8 + iVar4;
            *in_stack_00000054 = *in_stack_00000054 + iVar5;
            param_4 = piStack0000002c;
          } while (iVar6 < *param_6 + -2);
        }
        uVar1 = (param_5 + iVar6)[1];
        uVar2 = param_5[iVar6];
        iVar6 = fn_82F2A9C8(param_1,uVar1,uVar2,*(undefined4 *)(param_1 + 20000),
                                  in_stack_00000084,in_stack_0000008c);
        iVar3 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4d94,in_stack_00000084,
                                  in_stack_0000008c);
        iVar4 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4dd4,in_stack_00000084,
                                  in_stack_0000008c);
        *param_7 = *param_7 + iVar6;
        *param_8 = *param_8 + iVar3;
        *in_stack_00000054 = *in_stack_00000054 + iVar4;
      }
    }
    else if (iStack_c0 < 4) {
      iVar6 = fn_82F2AC28(param_1,*param_5,&lbl_831A9CD0,0x77,param_4);
      *in_stack_00000074 = iVar6 + *in_stack_00000074;
      iVar6 = fn_82F2AC28(param_1,*param_5,0x831aa450,0x77,param_4);
      *in_stack_0000007c = iVar6 + *in_stack_0000007c;
      if (*piVar7 != 0) {
        iVar6 = 2;
        if (2 < *param_6 + -2) {
          puVar8 = param_5;
          do {
            uVar1 = puVar8[3];
            puVar8 = puVar8 + 2;
            uVar2 = *puVar8;
            iVar3 = fn_82F2A8A8(param_1,uVar1,uVar2,*(undefined4 *)(param_1 + 0x4e2c),
                                 in_stack_00000084,in_stack_0000008c);
            iVar4 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4c14,in_stack_00000084,
                                 in_stack_0000008c);
            iVar5 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4c54,in_stack_00000084,
                                 in_stack_0000008c);
            iVar6 = iVar6 + 2;
            *in_stack_0000005c = iVar3 + *in_stack_0000005c;
            *in_stack_00000064 = *in_stack_00000064 + iVar4;
            *in_stack_0000006c = *in_stack_0000006c + iVar5;
            param_4 = piStack0000002c;
          } while (iVar6 < *param_6 + -2);
        }
        uVar1 = (param_5 + iVar6)[1];
        uVar2 = param_5[iVar6];
        iVar6 = fn_82F2A9C8(param_1,uVar1,uVar2,*(undefined4 *)(param_1 + 0x4e38),
                                  in_stack_00000084,in_stack_0000008c);
        iVar3 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4c94,in_stack_00000084,
                                  in_stack_0000008c);
        iVar4 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4cd4,in_stack_00000084,
                                  in_stack_0000008c);
        *in_stack_0000005c = iVar6 + *in_stack_0000005c;
        *in_stack_00000064 = *in_stack_00000064 + iVar3;
        *in_stack_0000006c = *in_stack_0000006c + iVar4;
      }
    }
    else {
      iVar6 = fn_82F2AC28(param_1,*param_5,0x831aa090,0x77,param_4);
      *in_stack_00000074 = iVar6 + *in_stack_00000074;
      iVar6 = fn_82F2AC28(param_1,*param_5,0x831aa810);
      *in_stack_0000007c = iVar6 + *in_stack_0000007c;
      if (*piVar7 != 0) {
        iVar6 = 2;
        if (2 < *param_6 + -2) {
          puVar8 = param_5;
          do {
            uVar1 = puVar8[3];
            puVar8 = puVar8 + 2;
            uVar2 = *puVar8;
            iVar3 = fn_82F2A8A8(param_1,uVar1,uVar2,*(undefined4 *)(param_1 + 0x4e14),
                                 in_stack_00000084,in_stack_0000008c);
            iVar4 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4d14,in_stack_00000084,
                                 in_stack_0000008c);
            iVar5 = fn_82F2A8A8(param_1,uVar1,uVar2,param_1 + 0x4d54,in_stack_00000084,
                                 in_stack_0000008c);
            iVar6 = iVar6 + 2;
            *param_7 = *param_7 + iVar3;
            *param_8 = *param_8 + iVar4;
            *in_stack_00000054 = *in_stack_00000054 + iVar5;
            param_4 = piStack0000002c;
          } while (iVar6 < *param_6 + -2);
        }
        uVar1 = (param_5 + iVar6)[1];
        uVar2 = param_5[iVar6];
        iVar6 = fn_82F2A9C8(param_1,uVar1,uVar2,*(undefined4 *)(param_1 + 20000),
                                  in_stack_00000084,in_stack_0000008c);
        iVar3 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4d94,in_stack_00000084,
                                  in_stack_0000008c);
        iVar4 = fn_82F2A9C8(param_1,uVar1,uVar2,param_1 + 0x4dd4,in_stack_00000084,
                                  in_stack_0000008c);
        *param_7 = *param_7 + iVar6;
        *param_8 = *param_8 + iVar3;
        *in_stack_00000054 = *in_stack_00000054 + iVar4;
      }
    }
    iStack_c0 = iStack_c0 + 1;
    param_5 = param_5 + 0x80;
    param_6 = param_6 + 1;
  } while (iStack_c0 < 6);
  return;
}

