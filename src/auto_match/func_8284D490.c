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
extern unsigned int *auStack_50;
extern int fn_828176F0();
extern int fn_82817868();
extern int fn_828505C0();
extern int fn_82850DC0();
extern int fn_82F691F0();


void fn_8284D490(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 auStack_50 [20];
  
  fn_828176F0(*(undefined4 *)(param_1 + 0x124),0xffffffff8201f54c,auStack_50);
  iVar1 = fn_82817868(auStack_50[0]);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar4 = 0;
    do {
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar4 + *param_2) = *(undefined4 *)(*(int *)(param_1 + 0x98) + iVar4);
      iVar4 = iVar4 + 4;
    } while (uVar2 < *(uint *)(param_1 + 0x1c));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 300) != 0) {
    iVar4 = 0;
    iVar5 = 0;
    iVar3 = 0;
    do {
      *(undefined4 *)(iVar3 + param_2[0x13]) =
           *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x128) + 4);
      *(undefined4 *)(iVar3 + param_2[0x13] + 8) =
           *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x128) + 0xc);
      if (*(int *)(iVar3 + param_2[0x13]) != 0) {
        *(undefined4 *)(param_2[0x14] + iVar4) =
             *(undefined4 *)(*(int *)(iVar5 + *(int *)(param_1 + 0x128) + 4) + 0x30);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x10;
      iVar5 = iVar5 + 0x20;
      iVar4 = iVar4 + 4;
    } while (uVar2 < *(uint *)(param_1 + 300));
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    param_2[1] = 0;
  }
  else {
    param_2[1] = (iVar1 + 0xfU & 0xfffffff0) + (int)param_2;
    fn_828505C0(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_2[2],0xff,*(undefined4 *)(param_1 + 0x34));
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  if (*(int *)(param_1 + 0x178) != 0) {
    lVar6 = 0;
    do {
      fn_82850DC0(param_1,param_2,lVar6);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < 2);
  }
  if (*(int *)(param_1 + 0x94) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_2[7],0xff);
  }
  param_2[7] = 0;
  param_2[0xf] = 0;
  return;
}

