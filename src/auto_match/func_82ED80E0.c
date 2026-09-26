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
extern int fn_82F2AF38();
extern unsigned int iStack_b0;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int uStack00000024;
extern unsigned int uStack_b8;


void fn_82ED80E0(int param_1,ulonglong param_2,uint param_3,longlong param_4,longlong param_5,
                  longlong param_6,int *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uStack00000024;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  int *in_stack_0000006c;
  int *in_stack_000000bc;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  ulonglong uStack_b8;
  int iStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  longlong lStack_a0;
  
  lStack_a0 = (ulonglong)*(uint *)(param_1 + 0x1e54) + param_4 * 0x114;
  if ((param_2 & 0xffffffff) < (ulonglong)param_3) {
    uVar10 = 0;
    uStack00000024 = param_3;
    do {
      uStack_b8 = uVar10;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        do {
          iVar6 = (int)lStack_a0;
          iVar1 = *(int *)(iVar6 + 4);
          iVar2 = *(int *)(iVar6 + 8);
          piStack_ac = &iStack_cc;
          iVar3 = *(int *)(iVar6 + 0xc);
          piStack_a8 = &iStack_c4;
          iVar4 = *(int *)(iVar6 + 0x10);
          iVar5 = *(int *)(iVar6 + 0x18);
          iVar6 = *(int *)(iVar6 + 0x14);
          iStack_d0 = (int)uStack_b8;
          iStack_cc = iStack_d0;
          iStack_c8 = iStack_d0;
          iStack_c4 = iStack_d0;
          iStack_c0 = iStack_d0;
          iStack_bc = iStack_d0;
          iStack_b0 = iVar6;
          fn_82F2AF38(param_1,uVar10,param_2,lStack_a0,param_5,param_6,&iStack_d0,&iStack_c8);
          *param_7 = *param_7 + iStack_d0;
          uVar7 = iStack_cc + iStack_d0;
          *param_8 = *param_8 + iStack_c8;
          uVar8 = iStack_c0 + iStack_c8;
          *in_stack_00000054 = *in_stack_00000054 + iStack_c4;
          *in_stack_0000005c = iStack_cc + *in_stack_0000005c;
          *in_stack_00000064 = *in_stack_00000064 + iStack_c0;
          uVar9 = iStack_bc + iStack_c4;
          *in_stack_0000006c = *in_stack_0000006c + iStack_bc;
          puVar11 = (uint *)lStack_a0;
          if (((((iVar1 == 0 && iVar2 == 0) && iVar3 == 0) && iVar4 == 0) && iVar5 == 0) &&
              iVar6 == 0) {
            *puVar11 = *puVar11 & 0xff3fffff;
          }
          else {
            iVar1 = *in_stack_000000bc;
            if (uVar8 < uVar7) {
              if (uVar9 < uVar8) goto LAB_82ed82cc;
              *in_stack_000000bc = iVar1 + uVar8 + 2;
              *puVar11 = *puVar11 & 0xff3fffff | 0x400000;
            }
            else if (uVar9 < uVar7) {
LAB_82ed82cc:
              *in_stack_000000bc = iVar1 + uVar9 + 2;
              *puVar11 = *puVar11 & 0xff3fffff | 0x800000;
            }
            else {
              *in_stack_000000bc = iVar1 + uVar7 + 1;
              *puVar11 = *puVar11 & 0xff3fffff;
            }
          }
          uVar10 = uVar10 + 1;
          lStack_a0 = lStack_a0 + 0x114;
          param_5 = param_5 + 0x600;
          param_6 = param_6 + 0xc;
          param_3 = uStack00000024;
        } while ((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2d0));
      }
      param_2 = param_2 + 1;
      uVar10 = uStack_b8;
    } while ((param_2 & 0xffffffff) < (ulonglong)param_3);
  }
  return;
}

