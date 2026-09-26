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
extern unsigned int *auStack_150;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_d0;
extern int fn_82AA05D8();
extern int fn_82AA1FC8();
extern int fn_82F63F40();
extern int fn_82F68CC0();
extern unsigned int iStack_1d4;
extern unsigned int iStack_1f8;
extern unsigned int iStack_1fc;
extern unsigned int iStack_200;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int *uStack_1f4;


void fn_82AA2370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  int iStack_1d4;
  undefined1 auStack_1d0 [128];
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [208];
  
  fn_82F68CC0(&iStack_200,param_5,0x30);
  uVar2 = 0xffffffff820d29ec;
  if (uStack_1e0 == 1) {
    if (uStack_1dc != 0) {
      uVar2 = 0xffffffff820d31dc;
    }
  }
  else {
    uVar2 = 0xffffffff820d31e8;
  }
  fn_82F63F40(auStack_1d0,uVar2,param_3,param_2,iStack_200,param_4);
  if (uStack_1e0 == 1) {
    if (uStack_1dc == 0) {
      fn_82AA1FC8(param_1,auStack_1d0,&iStack_200);
      if (uStack_1e0 != 1) goto LAB_82aa2430;
      if (uStack_1dc == 0) {
        return;
      }
    }
    fn_82F63F40(auStack_150,0xffffffff820d29ec,param_3,param_2,iStack_200,param_4);
    piVar4 = (int *)(*(int *)(param_8 + 0xc) + param_6);
    uVar5 = uStack_1f4;
    for (uVar3 = (ulonglong)uStack_1dc; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar7 = piVar4[1] + param_6;
      iStack_200 = *piVar4 + param_6;
      uStack_1e4 = (uint)*(ushort *)(iVar7 + 6);
      uStack_1e8 = (uint)*(ushort *)(iVar7 + 4);
      uStack_1f0 = (uint)*(ushort *)(piVar4[1] + param_6);
      uStack_1ec = (uint)*(ushort *)(iVar7 + 2);
      uStack_1e0 = (uint)*(ushort *)(iVar7 + 8);
      uStack_1dc = (uint)*(ushort *)(iVar7 + 10);
      uStack_1f4 = fn_82AA05D8(&iStack_200,param_6,iVar7);
      if (uVar5 < uStack_1f4) {
        uStack_1f4 = uVar5;
      }
      uVar5 = uVar5 - uStack_1f4;
      fn_82AA2370(param_1,0xffffffff821c7f2c,auStack_150,0xffffffff82196582,&iStack_200,param_6,
                    param_7,iVar7);
      iStack_1f8 = iStack_1f8 + uStack_1f4;
      if (iStack_1d4 != 0) {
        iStack_1d4 = ((-(uint)(iStack_1fc != 0) & 3) + 1) * uStack_1f4 * 4 + iStack_1d4;
      }
      piVar4 = piVar4 + 2;
    }
  }
  else {
LAB_82aa2430:
    fn_82F63F40(auStack_150,0xffffffff821c8538,param_3,param_2,param_4);
    uVar5 = uStack_1e0;
    uStack_1e0 = 1;
    uVar1 = fn_82AA05D8(&iStack_200,param_6,param_8);
    uVar3 = 0;
    uVar6 = uStack_1f4;
    uStack_1f4 = uVar1;
    if (uVar5 != 0) {
      do {
        fn_82F63F40(auStack_d0,0xffffffff820d31d4,uVar3);
        if (uVar6 < uStack_1f4) {
          uStack_1f4 = uVar6;
        }
        uVar6 = uVar6 - uStack_1f4;
        fn_82AA2370(param_1,0xffffffff82196582,auStack_150,auStack_d0,&iStack_200,param_6,param_7,
                      param_8);
        iStack_1f8 = iStack_1f8 + uStack_1f4;
        if (iStack_1d4 != 0) {
          iStack_1d4 = ((-(uint)(iStack_1fc != 0) & 3) + 1) * uStack_1f4 * 4 + iStack_1d4;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (ulonglong)uVar5);
    }
  }
  return;
}

