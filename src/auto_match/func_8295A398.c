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
extern int fn_82935220();
extern int fn_82935240();
extern int fn_82935258();
extern int fn_829352D0();
extern int fn_829355B8();
extern int fn_82958950();
extern int fn_82975B00();
extern int fn_82976860();
extern int fn_82F63CA0();


longlong fn_8295A398(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int *apiStack_50 [4];
  undefined1 auStack_40 [64];
  
  apiStack_50[0] = (int *)0x0;
  fn_82935220(auStack_40,0x53455250);
  lVar1 = fn_82976860(param_1);
  if (-1 < lVar1) {
    lVar1 = (**(code **)(**(int **)(param_1 + 0xe4) + 8))(*(int **)(param_1 + 0xe4),apiStack_50);
    if (-1 < lVar1) {
      if ((int)lVar1 == 0) {
        uVar2 = (**(code **)(*apiStack_50[0] + 0x10))();
        uVar3 = (**(code **)(*apiStack_50[0] + 0xc))(apiStack_50[0]);
        lVar1 = fn_829352D0(auStack_40,uVar3,uVar2,1,0,0);
        if (lVar1 < 0) goto LAB_8295a4f4;
      }
      uVar4 = fn_82935240(auStack_40);
      if ((uVar4 & 0xffffffff) < 0x8001) {
        lVar1 = fn_82958950(param_1,uVar4);
        if (-1 < lVar1) {
          fn_82F63CA0((uVar4 + 1 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x110),
                       (ulonglong)*(uint *)(param_1 + 0x110) + 4,
                       ((ulonglong)*(uint *)(param_1 + 0x114) - 1 & 0x3fffffff) << 2);
          lVar1 = fn_829355B8(auStack_40,(ulonglong)*(uint *)(param_1 + 0x110) + 4,uVar4);
          if (-1 < lVar1) {
            lVar1 = 0;
            iVar5 = *(int *)(param_1 + 0x114) + (int)uVar4;
            *(int *)(param_1 + 0x114) = iVar5;
            *(int *)(param_1 + 0x124) = (int)uVar4 + *(int *)(param_1 + 0x124);
            *(int *)(param_1 + 0x120) = iVar5;
          }
        }
      }
      else {
        fn_82975B00(param_1,0,0x11c4,0xffffffff820380f4);
        lVar1 = -0x7fffbffb;
      }
    }
  }
LAB_8295a4f4:
  if (apiStack_50[0] != (int *)0x0) {
    (**(code **)(*apiStack_50[0] + 8))();
    apiStack_50[0] = (int *)0x0;
  }
  fn_82935258(auStack_40);
  return lVar1;
}

