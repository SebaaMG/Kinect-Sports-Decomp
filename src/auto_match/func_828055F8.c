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
extern unsigned int lbl_821AAD20;


void fn_828055F8(int param_1,undefined4 *param_2,int *param_3,int *param_4,int param_5,
                  ulonglong param_6,uint *param_7,uint param_8)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int in_stack_00000054;
  int *in_stack_0000005c;
  byte *in_stack_00000064;
  
  uVar7 = lbl_821AAD20;
  uVar9 = 0x80;
  iVar10 = param_8 << 2;
  in_stack_00000054 = in_stack_00000054 << 2;
  do {
    if (*(ushort *)(param_1 + 0x1e) <= param_8) {
      return;
    }
    if ((param_6 & 0xff & uVar9) == 0) {
      fVar1 = *(float *)(*(int *)(param_1 + 8) + iVar10);
LAB_82805770:
      iVar3 = in_stack_0000005c[1];
      iVar4 = in_stack_0000005c[2];
      iVar5 = in_stack_0000005c[3];
      *(float *)(in_stack_00000054 + *in_stack_0000005c) = fVar1;
      *(float *)(iVar3 + in_stack_00000054) = fVar1;
      *(float *)(iVar4 + in_stack_00000054) = fVar1;
      *(float *)(iVar5 + in_stack_00000054) = fVar1;
    }
    else {
      piVar2 = (int *)*param_2;
      if (*(char *)(param_1 + 0x26) == '\0') {
        piVar8 = (int *)((int)piVar2 + 2);
        lVar11 = (longlong)*(short *)piVar2;
      }
      else {
        piVar8 = piVar2 + 1;
        lVar11 = (longlong)*piVar2;
      }
      *param_2 = piVar8;
      if ((param_6 & 0xff & uVar9 >> 3) != 0) {
        fVar1 = *(float *)(*(int *)(param_1 + 4) + iVar10) * (float)lVar11;
        goto LAB_82805770;
      }
      if (param_7 != (uint *)0x0) {
        uVar6 = *param_7 >> 3 & 0x1ffffffc;
        *(uint *)(uVar6 + *(int *)(param_5 + 0x2c)) =
             1 << (*param_7 & 0x1f) | *(uint *)(uVar6 + *(int *)(param_5 + 0x2c));
      }
      if (*(char *)(param_1 + 0x26) == '\0') {
        *(byte *)*param_4 = (*(byte *)*param_3 >> ((*in_stack_00000064 & 0xf) << 2) & 0xf) + 1;
        *param_4 = *param_4 + 1;
        *param_3 = (uint)*in_stack_00000064 + *param_3;
        *in_stack_00000064 = *in_stack_00000064 == 0;
      }
      else {
        *(byte *)*param_4 = *(byte *)*param_3 + 1;
        *param_4 = *param_4 + 1;
        *param_3 = *param_3 + 1;
      }
      iVar3 = in_stack_0000005c[1];
      iVar4 = in_stack_0000005c[2];
      iVar5 = in_stack_0000005c[3];
      *(undefined4 *)(in_stack_00000054 + *in_stack_0000005c) = uVar7;
      *(undefined4 *)(iVar3 + in_stack_00000054) = uVar7;
      *(undefined4 *)(iVar4 + in_stack_00000054) = uVar7;
      *(undefined4 *)(iVar5 + in_stack_00000054) = uVar7;
    }
    in_stack_00000054 = in_stack_00000054 + 4;
    if (param_7 != (uint *)0x0) {
      *param_7 = *param_7 + 1;
    }
    uVar9 = uVar9 >> 1;
    param_8 = param_8 + 1;
    iVar10 = iVar10 + 4;
    if (uVar9 == 0x10) {
      return;
    }
  } while( true );
}

