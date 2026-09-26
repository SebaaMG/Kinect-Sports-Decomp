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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_82230218();
extern int fn_822883D0();
extern int fn_82289670();
extern int fn_8228ABB8();
extern int fn_8228ACD0();
extern int fn_8234F298();


void fn_8228A020(int *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [44];
  
  iVar1 = param_1[3];
  uVar5 = 0;
  fn_82289670(iVar1,*(undefined4 *)(iVar1 + 0x6a0));
  iVar2 = *param_1;
  *(undefined4 *)(*(int *)(iVar1 + 0x6a0) * 0x40 + iVar1 + 0x6a8) = 3;
  iVar4 = *(int *)(iVar1 + 0x6a0) * 0x40 + iVar1;
  if (iVar2 == 0) {
    *(undefined8 *)(iVar4 + 0x6b0) = *(undefined8 *)param_1[2];
    fn_82230218(*(int *)(iVar1 + 0x6a0) * 0x40 + iVar1 + 0x6c8,(ulonglong)(uint)param_1[2] + 8
                      ,0,0xffffffffffffffff);
    uVar5 = (**(code **)(**(int **)(param_1[1] + 0x8c0) + 100))();
    *(undefined8 *)(iVar1 + 0x1208) = *(undefined8 *)param_1[2];
  }
  else {
    *(undefined8 *)(iVar4 + 0x6b0) = 0;
    *(undefined8 *)(iVar1 + 0x1208) = 0;
  }
  uVar3 = (ulonglong)*(uint *)(iVar1 + 0x6a0);
  if ((uVar5 & 0xffffffff) == 0) {
    fn_8228ACD0(iVar1,uVar3,iVar1 + 0x520);
  }
  else {
    if (*(int *)(*(int *)(iVar1 + 0x11f0) + 0x18b8) == 1) {
      uVar3 = -((ulonglong)(uVar3 < 2) - 1);
    }
    fn_8234F298(*(int *)(iVar1 + 0x11f0) + 0x234,uVar3,auStack_2c,auStack_30);
    fn_8228ABB8(iVar1,*(undefined4 *)(iVar1 + 0x6a0),uVar5,auStack_2c,auStack_30);
  }
  fn_822883D0(iVar1,*(int *)(iVar1 + 0x6a0),
                    *(undefined4 *)((*(int *)(iVar1 + 0x6a0) + 0x1b) * 0x40 + iVar1));
  *(undefined4 *)(iVar1 + 0x604) = 1;
  return;
}

