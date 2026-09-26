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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_826A1A78();
extern int fn_826A2AB8();
extern int fn_826A2CB0();
extern unsigned int uStack_28;


void fn_826A3B48(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar5;
  char cVar7;
  ulonglong uVar3;
  char *pcVar6;
  undefined8 uVar4;
  double dVar8;
  undefined1 auStack_40 [8];
  longlong lStack_38;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  if (((*(int **)(param_1 + 8) == (int *)0x0) ||
      (iVar5 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar5 != 7)) ||
     (cVar7 = (**(code **)(**(int **)(param_1 + 8) + 0x40))(), cVar7 != '\0')) {
    uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x48,0);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_826A2AB8(uVar3,*(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 0;
    }
    if (iVar5 != 0) {
      *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
    }
  }
  auStack_30[0] = 4;
  auStack_40[0] = 1;
  uStack_28 = 0;
  (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))
            (iVar5 + 0x10,*(int *)(param_1 + 0x18),
             (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x250,auStack_30,auStack_40);
  fn_82696330(auStack_30);
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      pcVar6 = (char *)fn_826957D0(param_1,0);
      if ((*pcVar6 == '\x03') || (bVar2 = false, *pcVar6 == '\x04')) {
        bVar2 = true;
      }
      if (bVar2) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        dVar8 = (double)fn_826972E0(uVar4,uVar1);
        lStack_38 = (longlong)(int)dVar8;
        fn_826A2CB0(iVar5,(int)dVar8);
        goto LAB_826a3cc8;
      }
    }
    fn_826A1A78(iVar5,param_1);
  }
LAB_826a3cc8:
  fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar5);
  fn_826824B0(iVar5);
  return;
}

