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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82E49100();
extern int fn_82E50330();
extern int fn_82E50D88();
extern int fn_82E50FA0();
extern unsigned int uStack_58;
extern unsigned int uStack_70;


longlong fn_82E63FC0(int param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  uint uStack_70;
  int aiStack_6c [3];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_82E50D88(param_1 + 8);
  uVar2 = 0;
  aiStack_6c[0] = 0;
  if (param_2 == (int *)0x0) {
    lVar5 = -0x7fffbffd;
  }
  else {
    piVar4 = (int *)(param_1 + -4);
    uStack_58 = 0;
    lVar5 = (**(code **)(*(int *)(param_1 + -4) + 0xc))(piVar4,&uStack_70);
    if (-1 < lVar5) {
      uVar3 = 0;
      if (uStack_70 != 0) {
        do {
          lVar5 = (**(code **)(*piVar4 + 0x10))(piVar4,uVar3,auStack_50);
          if (lVar5 < 0) goto LAB_82e64194;
          iVar1 = (**(code **)(*piVar4 + 0x14))(piVar4,auStack_50,auStack_60);
          if (-1 < iVar1) {
            aiStack_6c[0] = aiStack_6c[0] + 1;
          }
          uVar3 = uVar3 + 1;
        } while ((uVar3 & 0xffffffff) < (ulonglong)uStack_70);
      }
      lVar5 = (**(code **)(*param_2 + 0x10))(param_2,aiStack_6c,4,0);
      if ((-1 < lVar5) && (uStack_70 != 0)) {
        do {
          lVar5 = (**(code **)(*piVar4 + 0x10))(piVar4,uVar2,auStack_50);
          if (lVar5 < 0) break;
          iVar1 = (**(code **)(*piVar4 + 0x14))(piVar4,auStack_50,auStack_60);
          if (-1 < iVar1) {
            lVar5 = (**(code **)(*param_2 + 0x10))(param_2,auStack_50,0x10,0);
            if (lVar5 < 0) break;
            lVar5 = (**(code **)(*param_2 + 0x10))(param_2,auStack_40,4,0);
            if (lVar5 < 0) break;
            lVar5 = fn_82E49100(param_2,auStack_60);
            fn_82E50330(auStack_60);
          }
          uVar2 = uVar2 + 1;
        } while ((uVar2 & 0xffffffff) < (ulonglong)uStack_70);
      }
    }
  }
LAB_82e64194:
  fn_82E50FA0(param_1 + 8);
  return lVar5;
}

