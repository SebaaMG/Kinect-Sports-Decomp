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
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int iStack_260;
extern unsigned int lbl_82139734;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;


undefined4 *
fn_82D6C808(undefined4 *param_1,undefined4 *param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int *piVar3;
  longlong lVar1;
  int iVar4;
  undefined8 uVar2;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_270 [16];
  int iStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 *puStack_254;
  undefined1 auStack_250 [592];
  
  param_1[2] = (int)param_5;
  *param_1 = &lbl_82139734;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[5] = 0x80000004;
  param_1[3] = param_1 + 6;
  param_1[4] = 0;
  uStack_258 = param_2[2];
  puStack_254 = param_2;
  piVar3 = (int *)(**(code **)(*(int *)*param_2 + 0x10))();
  lVar1 = (**(code **)(*piVar3 + 4))();
  iVar4 = fn_82CE5410();
  if ((int)(param_1[5] & 0x3fffffff) < (int)lVar1) {
    lVar8 = ((ulonglong)(uint)param_1[5] & 0x3fffffff) << 1;
    if ((int)lVar8 <= (int)lVar1) {
      lVar8 = lVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),param_1 + 3,lVar8,8);
  }
  uVar2 = (**(code **)(*piVar3 + 8))(piVar3);
  iVar4 = (int)uVar2;
  while (iVar4 != -1) {
    iStack_260 = (**(code **)(*piVar3 + 0x14))(piVar3,uVar2,auStack_250);
    uStack_25c = (int)uVar2;
    pcVar5 = (char *)(**(code **)(*(int *)(param_4[3] + 0xc) + 4))
                               (auStack_270,param_4[3] + 0xc,param_4,param_3,param_2,piVar3,uVar2);
    if (*pcVar5 != '\0') {
      iVar4 = param_1[4];
      param_1[4] = iVar4 + 1;
      puVar9 = (undefined4 *)(iVar4 * 8 + param_1[3]);
      iVar4 = *param_4;
      iVar7 = iVar4 + 0x5a0;
      if (param_4[5] == 0) {
        iVar7 = iVar4 + 0x1a0;
      }
      uVar6 = (**(code **)((uint)*(byte *)(*(int *)(iStack_260 + 0xc) * 0x20 + iVar7 +
                                          *(int *)(*param_3 + 0xc)) * 0x14 + iVar4 + 0x9a0))
                        (&iStack_260,param_3,param_4,param_5);
      puVar9[1] = uVar6;
      *puVar9 = (int)uVar2;
    }
    uVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,uVar2);
    iVar4 = (int)uVar2;
  }
  return param_1;
}

