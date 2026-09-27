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
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696BC8();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_82711100();


void fn_827114B0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar5;
  undefined8 uVar4;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  double dVar10;
  undefined4 *apuStack_40 [2];
  longlong alStack_38;
  
  cVar5 = fn_82695468(param_1,8);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff82005ea4,0,0);
  }
  else {
    lVar7 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar7 = 0;
    }
    uVar8 = 0;
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
    puVar1[2] = puVar1[2] + 1;
    puVar9 = puVar1;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar8 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(apuStack_40,uVar4,uVar8,0xffffffffffffffff,0);
      puVar9 = apuStack_40[0];
      apuStack_40[0][2] = apuStack_40[0][2] + 1;
      uVar6 = puVar1[2];
      puVar1[2] = (int)((ulonglong)uVar6 - 1);
      if ((ulonglong)uVar6 - 1 == 0) {
        fn_826944C8(puVar1);
      }
      uVar6 = apuStack_40[0][2];
      apuStack_40[0][2] = (int)((ulonglong)uVar6 - 1);
      if ((ulonglong)uVar6 - 1 == 0) {
        fn_826944C8(apuStack_40[0]);
      }
      uVar8 = *puVar9;
    }
    uVar6 = 0x3fffffff;
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,1);
      dVar10 = (double)fn_826972E0(uVar4,uVar2);
      uVar6 = (uint)dVar10;
      alStack_38 = (longlong)(int)uVar6;
      uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & uVar6;
    }
    fn_82711100(&alStack_38,*(undefined4 *)(param_1 + 0x18),lVar7 + 0x30,uVar8,uVar6);
    iVar3 = ((uint)((ulonglong)(alStack_38) >> 32));
    fn_82696BC8(*(undefined4 *)(param_1 + 4),((uint)((ulonglong)(alStack_38) >> 32)));
    if (iVar3 != 0) {
      fn_826824B0(iVar3);
    }
    uVar6 = puVar9[2];
    puVar9[2] = (int)((ulonglong)uVar6 - 1);
    if ((ulonglong)uVar6 - 1 == 0) {
      fn_826944C8(puVar9);
    }
  }
  return;
}

