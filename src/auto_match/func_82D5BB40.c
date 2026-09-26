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
extern unsigned int *auStack_270;
extern unsigned int iStack_278;
extern unsigned int iStack_280;
extern unsigned int iStack_288;
extern unsigned int iStack_290;
extern unsigned int uStack_27c;
extern unsigned int uStack_28c;


undefined8
fn_82D5BB40(undefined8 param_1,int param_2,int *param_3,int *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,byte *param_9)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 in_stack_00000054;
  int iStack_290;
  uint uStack_28c;
  int iStack_288;
  int *piStack_284;
  int iStack_280;
  uint uStack_27c;
  int iStack_278;
  int *piStack_274;
  undefined1 auStack_270 [624];
  
  iVar3 = *param_3;
  piVar8 = param_3;
  if (*(int *)(iVar3 + 0xc) == 0x17) {
    iVar5 = 1;
    bVar1 = *param_9;
    pbVar6 = param_9;
    if (1 < param_9[8]) {
      do {
        if ((uint)pbVar6[2] != (uint)bVar1) goto LAB_82d5bccc;
        iVar5 = iVar5 + 1;
        pbVar6 = pbVar6 + 2;
      } while (iVar5 < (int)(uint)param_9[8]);
    }
    iStack_280 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x14))(iVar3 + 0x14,bVar1,auStack_270);
    iStack_278 = param_3[2];
    piVar8 = &iStack_280;
    uStack_27c = (uint)bVar1;
    piStack_274 = param_3;
  }
  iVar3 = *param_4;
  piVar9 = param_4;
  if (*(int *)(iVar3 + 0xc) == 0x17) {
    bVar1 = param_9[8];
    uVar7 = bVar1 + 1;
    bVar2 = param_9[(uint)bVar1 * 2];
    if (uVar7 < (uint)param_9[9] + (uint)bVar1) {
      pbVar6 = param_9 + uVar7 * 2;
      do {
        if ((uint)*pbVar6 != (uint)bVar2) {
LAB_82d5bccc:
          *(undefined1 *)(param_2 + 0x10) = 1;
          return 1;
        }
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 2;
      } while ((int)uVar7 < (int)((uint)param_9[9] + (uint)bVar1));
    }
    iStack_290 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x14))(iVar3 + 0x14,bVar2,auStack_270);
    iStack_288 = param_4[2];
    piVar9 = &iStack_290;
    uStack_28c = (uint)bVar2;
    piStack_284 = param_4;
  }
  uVar4 = (**(code **)(**(int **)(param_2 + 0xc) + 0x1c))
                    (param_1,*(int **)(param_2 + 0xc),piVar8,piVar9,param_5,param_6,
                     in_stack_00000054,param_8,param_9);
  return uVar4;
}

