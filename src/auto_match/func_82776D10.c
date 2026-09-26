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
extern int fn_8276D860();
extern int fn_827742D0();
extern int fn_82774430();
extern int fn_82774D50();
extern int fn_82774DB8();
extern int fn_82775EB0();
extern int fn_827B8208();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82776D10(int param_1,ulonglong param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack0000001c;
  uint uStack_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  byte bStack_49;
  
  iVar3 = *(int *)(param_1 + 4);
  uStack0000001c = (undefined4)param_2;
  RtlEnterCriticalSection(iVar3 + 0x9e4);
  iVar4 = fn_82774D50(iVar3 + 0x8e0,&stack0x0000001c);
  if (iVar4 != 0) {
    fn_827B8208(iVar3 + 0x40,param_2);
    fn_8276D860(param_2,iVar3 + 8);
    fn_82774430(iVar3 + 0x8e0,&stack0x0000001c);
    for (iVar4 = *(int *)(iVar3 + 0x3c); iVar4 != iVar3 + 0x38; iVar4 = *(int *)(iVar4 + 4)) {
      iVar1 = *(int *)(iVar4 + 8);
      bVar5 = false;
      if ((iVar1 != 0) && (uVar6 = 0, *(int *)(iVar1 + 0x14) != 0)) {
        iVar7 = 0;
        do {
          if ((ulonglong)*(uint *)(*(int *)(iVar1 + 0x10) + iVar7) == (param_2 & 0xffffffff)) {
            bVar5 = true;
            break;
          }
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 0x1c;
        } while (uVar6 < *(uint *)(*(int *)(iVar4 + 8) + 0x14));
      }
      if (bVar5) {
        if (iVar1 != 0) {
          fn_82775EB0(iVar1,1);
        }
        *(undefined4 *)(iVar4 + 8) = 0;
      }
    }
  }
  piVar8 = *(int **)(iVar3 + 0x8fc);
  if (*(int **)(iVar3 + 0x8fc) != (int *)(iVar3 + 0x8f8)) {
    do {
      piVar2 = (int *)piVar8[1];
      if ((ulonglong)(uint)piVar8[2] == (param_2 & 0xffffffff)) {
        uStack_4c = *(undefined2 *)(piVar8 + 3);
        uStack_4a = *(undefined1 *)((int)piVar8 + 0xe);
        bStack_49 = *(byte *)((int)piVar8 + 0xf) & 3;
        uStack_50 = piVar8[2];
        fn_82774DB8(iVar3 + 0x900,&uStack_50);
        *(int *)(*piVar8 + 4) = piVar8[1];
        *(int *)piVar8[1] = *piVar8;
        fn_827742D0(piVar8,0);
        *piVar8 = *(int *)(iVar3 + 0x8f0);
        *(int **)(iVar3 + 0x8f0) = piVar8;
      }
      piVar8 = piVar2;
    } while (piVar2 != (int *)(iVar3 + 0x8f8));
  }
  RtlLeaveCriticalSection(iVar3 + 0x9e4);
  return;
}

