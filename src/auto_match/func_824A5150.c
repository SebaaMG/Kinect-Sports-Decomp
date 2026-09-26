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
extern unsigned int *auStack_38;
extern unsigned int fStack_28;
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_824A5150(int param_1,int *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_r0;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [8];
  float afStack_30 [2];
  float fStack_28;
  
  (**(code **)*param_2)(param_2,auStack_38,&uStack_40);
  (**(code **)(*param_2 + 4))(param_2,uStack_40,&iStack_3c);
  fVar1 = *(float *)(param_1 + 0x3c);
  puVar2 = (undefined4 *)(*(int *)(iStack_3c + 0x40) + 0xc0U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  iVar4 = ((-(uint)(*(char *)(param_1 + 0x38) != '\0') & 5) + 10) * 0x40 +
          *(int *)(iStack_3c + 0x40);
  puVar3 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (undefined4 *)(iVar4 + 0x10U & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  uVar5 = (uint)(fVar1 < fStack_28 - fStack_28);
  *(uint *)(param_1 + 0x44) = uVar5;
  if (((uVar5 == 0) || (afStack_30[0] < -*(float *)(param_1 + 0x40))) ||
     (*(float *)(param_1 + 0x40) <= afStack_30[0])) {
    puVar2 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
  }
  else {
    puVar2 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
  }
  return;
}

