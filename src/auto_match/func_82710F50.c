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
extern int fn_82681838();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82710AD8();


void fn_82710F50(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar5;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  int aiStack_40 [2];
  longlong lStack_38;
  
  cVar5 = fn_82695468(param_1,8);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff82005ea4,0,0);
  }
  else {
    lVar6 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar6 = 0;
    }
    uVar9 = 0;
    lVar7 = -1;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      dVar10 = (double)fn_826972E0(uVar3,uVar2);
      uVar1 = (uint)dVar10;
      lStack_38 = (longlong)(int)uVar1;
      uVar9 = (ulonglong)uVar1;
      if ((int)uVar1 < 0) {
        lVar4 = fn_82693A98(lVar6 + 0x30);
        uVar9 = lVar4 + uVar9;
      }
    }
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,1);
      dVar10 = (double)fn_826972E0(uVar3,uVar2);
      uVar1 = (uint)dVar10;
      lStack_38 = (longlong)(int)uVar1;
      uVar8 = (ulonglong)uVar1;
      if ((int)uVar1 < 0) {
        lVar7 = fn_82693A98(lVar6 + 0x30);
        uVar8 = lVar7 + uVar8;
      }
      if ((int)uVar8 < (int)uVar9) {
        fn_82681838(*(undefined4 *)(param_1 + 4),
                          (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
        return;
      }
      lVar7 = uVar8 - uVar9;
    }
    uVar3 = fn_82710AD8(aiStack_40,lVar6 + 0x30,uVar9,lVar7);
    fn_82681838(*(undefined4 *)(param_1 + 4),uVar3);
    lVar6 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
    *(int *)(aiStack_40[0] + 8) = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(aiStack_40[0]);
    }
  }
  return;
}

