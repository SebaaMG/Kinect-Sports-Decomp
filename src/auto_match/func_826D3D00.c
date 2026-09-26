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
extern int fn_8267C498();
extern int fn_82681BF8();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826C59F8();
extern int fn_826D2B68();
extern unsigned int iStack_40;
extern unsigned int lbl_821AAD20;


/* WARNING: Type propagation algorithm not settling */

void fn_826D3D00(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  double dVar8;
  int aiStack_90 [2];
  longlong lStack_88;
  int aiStack_80 [16];
  int iStack_40;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  lVar4 = fn_826C59F8(param_1);
  if ((lVar4 != 0) && (5 < *(int *)(param_1 + 0x1c))) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    aiStack_90[1] = 0x10002;
    uVar5 = fn_826957D0(param_1,1);
    dVar8 = (double)fn_826972E0(uVar5,uVar2);
    lStack_88 = (longlong)(int)dVar8;
    fn_82681BF8((double)lbl_821AAD20,aiStack_80,aiStack_90 + 1,
                    (ulonglong)(uint)(int)dVar8 + 0x4000,1,0xffffffff831552e0,1,0xffffffff83155190);
    if ((-1 < iStack_40) && (iStack_40 < 0x7efffffe)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar5 = fn_826957D0(param_1,0);
      fn_82696D38(aiStack_90,uVar5,uVar2,0xffffffffffffffff,0);
      piVar6 = (int *)fn_826D2B68(lVar4,aiStack_80,aiStack_90,0,0,0xffffffffffffffff,1,0);
      if (piVar6 != (int *)0x0) {
        piVar6[1] = piVar6[1] + 1;
      }
      lVar4 = (ulonglong)*(uint *)(aiStack_90[0] + 8) - 1;
      *(int *)(aiStack_90[0] + 8) = (int)lVar4;
      if (lVar4 == 0) {
        fn_826944C8(aiStack_90[0]);
      }
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x14))(piVar6,0);
        piVar7 = (int *)(-(uint)((*(byte *)((int)piVar6 + 0x66) & 0x80) != 0) & (uint)piVar6);
        iVar3 = *piVar7;
        uVar5 = fn_826957D0(param_1,2);
        (**(code **)(iVar3 + 0xfc))(piVar7,0,uVar5,0);
        iVar3 = *piVar7;
        uVar5 = fn_826957D0(param_1,3);
        (**(code **)(iVar3 + 0xfc))(piVar7,1,uVar5,0);
        iVar3 = *piVar7;
        uVar5 = fn_826957D0(param_1,4);
        (**(code **)(iVar3 + 0xfc))(piVar7,8,uVar5,0);
        iVar3 = *piVar7;
        uVar5 = fn_826957D0(param_1,5);
        (**(code **)(iVar3 + 0xfc))(piVar7,9,uVar5,0);
        fn_82696480(*(undefined4 *)(param_1 + 4),piVar7);
        fn_8267C498(piVar6);
      }
    }
    if (aiStack_80[0] != 0) {
      fn_8267C498();
    }
  }
  return;
}

