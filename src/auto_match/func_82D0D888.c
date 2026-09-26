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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D18590();
extern unsigned int iStack_5c;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined8 fn_82D0D888(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_2[2] == 0x10) {
    puVar7 = *(undefined4 **)(param_1 + 8);
    uVar8 = param_2[1];
    uVar9 = *param_2;
    *puVar7 = *param_3;
    puVar7[1] = param_3[1];
    puVar7[2] = param_3[2];
    puVar7[3] = param_3[3];
    uVar3 = fn_82D18590(*(undefined4 *)(param_1 + 8),uVar9,uVar8,0,0);
  }
  else {
    puVar7 = (undefined4 *)*param_2;
    iVar5 = param_2[1];
    uStack_60 = 0;
    iStack_5c = 0;
    uStack_58 = 0x80000000;
    iVar4 = fn_82CE5410();
    if ((int)(uStack_58 & 0x3fffffff) < iVar5) {
      iVar6 = (uStack_58 & 0x3fffffff) << 1;
      if (iVar6 <= iVar5) {
        iVar6 = iVar5;
      }
      fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),&uStack_60,iVar6,0x10);
    }
    iVar4 = 0;
    if (0 < (int)param_2[1]) {
      iVar6 = 0;
      uStack_44 = lbl_821AAD20;
      do {
        uStack_48 = puVar7[2];
        uStack_50 = *puVar7;
        uStack_4c = puVar7[1];
        iVar4 = iVar4 + 1;
        puVar1 = (undefined4 *)((int)&uStack_50 + in_r0 & 0xfffffff0);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar2 = (undefined4 *)(iVar6 + uStack_60 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        iVar6 = iVar6 + 0x10;
        puVar7 = (undefined4 *)((int)puVar7 + param_2[2]);
      } while (iVar4 < (int)param_2[1]);
    }
    puVar7 = *(undefined4 **)(param_1 + 8);
    *puVar7 = *param_3;
    puVar7[1] = param_3[1];
    puVar7[2] = param_3[2];
    puVar7[3] = param_3[3];
    iStack_5c = iVar5;
    uVar3 = fn_82D18590(*(undefined4 *)(param_1 + 8),-(uint)(iVar5 != 0) & uStack_60,iVar5,0,0
                             );
    iVar5 = fn_82CE5410();
    iStack_5c = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),uStack_60,uStack_58 & 0x3fffffff,0x10);
    }
  }
  return uVar3;
}

