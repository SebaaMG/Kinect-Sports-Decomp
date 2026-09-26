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
extern unsigned int *auStack_4c;
extern int fn_82C939D8();
extern int fn_82CB9388();
extern int fn_82CB9450();
extern int fn_82CBA280();
extern int fn_82CBA370();
extern int fn_82CBA440();
extern int fn_82F691F0();
extern unsigned int uStack_50;


void fn_82C93B58(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  int iVar1;
  longlong lVar2;
  uint uStack_50;
  uint auStack_4c [19];
  
  if ((*(int *)(param_1 + 0x120) != 2) || (*(int *)(param_1 + 0x50cc) != 0)) {
    if ((**(uint **)(param_1 + 0x164) & 4) != 4) {
      iVar1 = (int)((((longlong)(int)param_6 * (longlong)*(int *)(param_1 + 0x88) & 0x7fffffffU) * 2
                     + param_5 & 0x7fffffff) << 2);
      auStack_4c[0] = (uint)*(short *)(*(int *)(param_1 + 0x6f0) + iVar1);
      uStack_50 = (uint)*(short *)(*(int *)(param_1 + 0x6f4) + iVar1);
      if (*(int *)(param_1 + 0x3cb0) == 7) {
        fn_82CB9450();
      }
      else {
        fn_82CB9388(param_1,auStack_4c,&uStack_50,param_5,param_6);
      }
      iVar1 = *(int *)(param_1 + 0xcc);
      fn_82C939D8(param_1,(longlong)(((int)uStack_50 >> 2) + (int)((param_6 & 0xffffffff) << 4)) *
                            (longlong)iVar1 + (ulonglong)*(uint *)(param_1 + 0xee4) +
                            (longlong)((int)auStack_4c[0] >> 2) + (param_5 & 0xfffffff) * 0x10,iVar1
                    ,param_2,iVar1,auStack_4c[0] & 3,uStack_50 & 3,*(undefined4 *)(param_1 + 0x1cc))
      ;
      iVar1 = (int)(((longlong)(int)param_6 * (longlong)*(int *)(param_1 + 0x88) + param_5 &
                    0xffffffff) << 1);
      auStack_4c[0] = (uint)*(short *)(*(int *)(param_1 + 0x6f8) + iVar1);
      uStack_50 = (uint)*(short *)(*(int *)(param_1 + 0x6fc) + iVar1);
      if (*(int *)(param_1 + 0x3cb0) == 7) {
        if (*(int *)(param_1 + 0x56a8) == 0) {
          fn_82CBA370(param_1,param_5,param_6,auStack_4c,&uStack_50);
        }
        else {
          fn_82CBA280();
        }
      }
      iVar1 = *(int *)(param_1 + 0xd0);
      lVar2 = (longlong)
              (int)(((int)uStack_50 >> 2) + (int)((param_6 & 0xffffffff) << 3) +
                   *(uint *)(param_1 + 0x4fb4)) * (longlong)iVar1 +
              (longlong)((int)auStack_4c[0] >> 2) + (param_5 & 0x1fffffff) * 8 +
              (ulonglong)*(uint *)(param_1 + 0x4fb4);
      fn_82CBA440(param_1,(ulonglong)*(uint *)(param_1 + 0xed0) + lVar2,iVar1,param_3,iVar1,
                        auStack_4c[0] & 3,uStack_50 & 3,0);
      fn_82CBA440(param_1,(ulonglong)*(uint *)(param_1 + 0xed4) + lVar2,
                        *(undefined4 *)(param_1 + 0xd0),param_4,*(undefined4 *)(param_1 + 0xd0),
                        auStack_4c[0] & 3,uStack_50 & 3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2,0x80,0x10);
}

