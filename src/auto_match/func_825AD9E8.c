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
extern unsigned int *auStack_50;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82236200();
extern int fn_8265CA20();
extern int fn_8289D8D0();
extern int fn_828E5538();
extern int fn_828E9D28();
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


int fn_825AD9E8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined8 uVar3;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [16];
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if (*(int **)(param_2 + 0x20) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_2 + 0x20) + 0x10))();
  }
  if (iVar4 == 0) {
    if (*(int **)(param_2 + 0x20) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_2 + 0x20) + 0x14))();
    }
    if (iVar4 == 0) {
      if (*(uint *)(param_2 + 0x10) < 5) {
        iStack_40 = param_2 + 0xc;
      }
      else {
        iStack_40 = *(int *)(param_2 + 0xc);
      }
      goto LAB_825ada98;
    }
  }
  uVar3 = fn_8289D8D0(*(undefined4 *)(param_2 + 0x28));
  iStack_40 = fn_82236200(param_2,uVar3);
LAB_825ada98:
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_3c = 6;
  fn_828E9D28(auStack_50,iStack_40,6);
  puVar1 = (undefined4 *)((int)&fStack_60 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  dVar5 = (double)fn_828E5538(auStack_50,10,5);
  fStack_60 = (float)dVar5;
  dVar5 = (double)fn_828E5538(auStack_50,6,6);
  fStack_5c = (float)dVar5;
  dVar5 = (double)fn_828E5538(auStack_50,10,5);
  fStack_58 = (float)dVar5;
  puVar1 = (undefined4 *)((int)&fStack_60 + in_r0 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  if (iStack_38 != 0) {
    fn_8265CA20();
  }
  return param_1;
}

