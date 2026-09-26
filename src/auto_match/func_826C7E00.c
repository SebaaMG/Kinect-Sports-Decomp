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
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_82696AD0();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_8269A418();
extern int fn_8269B0E8();
extern int fn_826C59F8();


void fn_826C7E00(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  int aiStack_40 [2];
  longlong lStack_38;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  uVar8 = 0;
  *puVar1 = 0;
  lVar3 = fn_826C59F8(param_1);
  if ((lVar3 != 0) && (1 < *(int *)(param_1 + 0x1c))) {
    if (*(int *)(param_1 + 0x1c) == 3) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar8 = fn_826957D0(param_1,2);
      uVar8 = fn_82696AD0(uVar8,uVar2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    fn_82696D38(aiStack_40,uVar4,uVar2,0xffffffffffffffff,0);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,1);
    dVar9 = (double)fn_826972E0(uVar4,uVar2);
    lStack_38 = (longlong)(int)dVar9;
    iVar5 = fn_8269B0E8(lVar3,aiStack_40,(ulonglong)(uint)(int)dVar9 + 0x4000,uVar8);
    if (iVar5 != 0) {
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    }
    lVar7 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
    *(int *)(aiStack_40[0] + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(aiStack_40[0]);
    }
    uVar6 = fn_8269A418(lVar3);
    if (5 < uVar6) {
      fn_82696480(*(undefined4 *)(param_1 + 4),iVar5);
    }
    if (iVar5 != 0) {
      fn_8267C498(iVar5);
    }
  }
  return;
}

