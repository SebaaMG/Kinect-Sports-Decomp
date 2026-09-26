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
extern int fn_82F2B558();
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;


void fn_82ED7E90(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,longlong param_5
                  ,longlong param_6,int *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  int *in_stack_0000006c;
  int *in_stack_00000084;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  uint uStack_a8;
  longlong lStack_a0;
  
  lStack_a0 = (ulonglong)*(uint *)(param_1 + 0x1e54) + param_4 * 0x114;
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    param_3 = param_3 - param_2;
    uStack_b0 = 0;
    uStack_b4 = (uint)param_3;
    do {
      uStack_b8 = (uint)uStack_b0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        do {
          iVar2 = (int)lStack_a0;
          iVar1 = *(int *)(iVar2 + 0x14);
          iStack_d0 = (int)uStack_b0;
          uVar4 = *(uint *)(iVar2 + 8) | *(uint *)(iVar2 + 0xc) | *(uint *)(iVar2 + 0x10) |
                  *(uint *)(iVar2 + 0x18) | *(uint *)(iVar2 + 4);
          iStack_cc = iStack_d0;
          iStack_c8 = iStack_d0;
          iStack_c4 = iStack_d0;
          iStack_c0 = iStack_d0;
          iStack_bc = iStack_d0;
          uStack_a8 = uVar4;
          fn_82F2B558(param_1,lStack_a0 + 4,param_5,param_6,&iStack_d0,&iStack_c8,&iStack_c4,
                          &iStack_cc);
          *param_7 = *param_7 + iStack_d0;
          uVar6 = iStack_cc + iStack_d0;
          *param_8 = *param_8 + iStack_c8;
          *in_stack_00000054 = *in_stack_00000054 + iStack_c4;
          *in_stack_0000005c = *in_stack_0000005c + iStack_cc;
          uVar3 = iStack_c0 + iStack_c8;
          *in_stack_00000064 = iStack_c0 + *in_stack_00000064;
          uVar5 = iStack_bc + iStack_c4;
          *in_stack_0000006c = *in_stack_0000006c + iStack_bc;
          puVar7 = (uint *)lStack_a0;
          if (uVar4 == 0 && iVar1 == 0) {
            uVar6 = *puVar7 & 0xff3fffff;
LAB_82ed809c:
            *puVar7 = uVar6;
          }
          else {
            iVar1 = *in_stack_00000084;
            if (uVar3 < uVar6) {
              if (uVar5 < uVar3) goto LAB_82ed805c;
              *in_stack_00000084 = iVar1 + uVar3 + 2;
              uVar6 = *puVar7 & 0xff3fffff | 0x400000;
              goto LAB_82ed809c;
            }
            if (uVar5 < uVar6) {
LAB_82ed805c:
              *in_stack_00000084 = iVar1 + uVar5 + 2;
              uVar6 = *puVar7 & 0xff3fffff | 0x800000;
              goto LAB_82ed809c;
            }
            *in_stack_00000084 = iVar1 + uVar6 + 1;
            *puVar7 = *puVar7 & 0xff3fffff;
          }
          lStack_a0 = lStack_a0 + 0x114;
          param_5 = param_5 + 0x600;
          uStack_b8 = uStack_b8 + 1;
          param_6 = param_6 + 0xc;
        } while (uStack_b8 < *(uint *)(param_1 + 0x2d0));
        param_3 = (ulonglong)uStack_b4;
      }
      param_3 = param_3 - 1;
      uStack_b4 = (uint)param_3;
    } while (param_3 != 0);
  }
  return;
}

