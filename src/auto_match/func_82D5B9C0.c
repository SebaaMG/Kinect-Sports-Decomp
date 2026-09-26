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
extern unsigned int *auStack_260;
extern unsigned int iStack_268;
extern unsigned int iStack_270;
extern unsigned int iStack_278;
extern unsigned int iStack_280;
extern unsigned int uStack_26c;
extern unsigned int uStack_27c;


undefined8
fn_82D5B9C0(int param_1,int *param_2,int *param_3,undefined8 param_4,undefined8 param_5,
             byte *param_6,undefined8 param_7)

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
  int iStack_280;
  uint uStack_27c;
  int iStack_278;
  int *piStack_274;
  int iStack_270;
  uint uStack_26c;
  int iStack_268;
  int *piStack_264;
  undefined1 auStack_260 [608];
  
  iVar3 = *param_2;
  piVar8 = param_2;
  if (*(int *)(iVar3 + 0xc) == 0x17) {
    iVar5 = 1;
    bVar1 = *param_6;
    pbVar6 = param_6;
    if (1 < param_6[8]) {
      do {
        if ((uint)pbVar6[2] != (uint)bVar1) goto LAB_82d5bb2c;
        iVar5 = iVar5 + 1;
        pbVar6 = pbVar6 + 2;
      } while (iVar5 < (int)(uint)param_6[8]);
    }
    iStack_270 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x14))(iVar3 + 0x14,bVar1,auStack_260);
    iStack_268 = param_2[2];
    piVar8 = &iStack_270;
    uStack_26c = (uint)bVar1;
    piStack_264 = param_2;
  }
  iVar3 = *param_3;
  piVar9 = param_3;
  if (*(int *)(iVar3 + 0xc) == 0x17) {
    bVar1 = param_6[8];
    uVar7 = bVar1 + 1;
    bVar2 = param_6[(uint)bVar1 * 2];
    if (uVar7 < (uint)param_6[9] + (uint)bVar1) {
      pbVar6 = param_6 + uVar7 * 2;
      do {
        if ((uint)*pbVar6 != (uint)bVar2) {
LAB_82d5bb2c:
          *(undefined1 *)(param_1 + 0x10) = 1;
          return 0xffffffffffffffff;
        }
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 2;
      } while ((int)uVar7 < (int)((uint)param_6[9] + (uint)bVar1));
    }
    iStack_280 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x14))(iVar3 + 0x14,bVar2,auStack_260);
    iStack_278 = param_3[2];
    piVar9 = &iStack_280;
    uStack_27c = (uint)bVar2;
    piStack_274 = param_3;
  }
  uVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                    (*(int **)(param_1 + 0xc),piVar8,piVar9,param_4,param_5,param_6,param_7);
  return uVar4;
}

