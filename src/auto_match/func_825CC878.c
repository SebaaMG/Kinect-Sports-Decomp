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
extern int fn_8262FE50();
extern int fn_82637B30();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_8263A1B8();
extern int fn_8263A508();


void fn_825CC878(int param_1,longlong param_2,longlong param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  param_3 = param_3 + -4;
  lVar4 = param_2 + 0x3148;
  lVar5 = 3;
  do {
    iVar3 = *(int *)lVar4;
    if (iVar3 != 0) {
      fn_8262FE50(iVar3);
    }
    lVar5 = lVar5 + -1;
    param_3 = param_3 + 4;
    *(int *)param_3 = iVar3;
    lVar4 = lVar4 + 4;
  } while (lVar5 != 0);
  fn_8263A1B8(param_2,0,*(undefined4 *)(param_1 + 0x68));
  iVar1 = (int)param_2;
  iVar3 = *(int *)(iVar1 + 0x3158);
  if (iVar3 != 0) {
    fn_8262FE50(iVar3);
  }
  *param_4 = iVar3;
  fn_8263A508(param_2,0);
  *(undefined4 *)(iVar1 + 0x2f08) = 0xf;
  *(uint *)(iVar1 + 0x28dc) =
       (-(uint)(*(int *)(iVar1 + 0x314c) != 0) & 0xf) << 4 | *(uint *)(iVar1 + 0x28dc) & 0xffffff0f;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  *(undefined4 *)(iVar1 + 0x2f0c) = 0xf;
  *(uint *)(iVar1 + 0x28dc) =
       (-(uint)(*(int *)(iVar1 + 0x3150) != 0) & 0xf) << 8 | *(uint *)(iVar1 + 0x28dc) & 0xfffff0ff;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  fn_82637B30(param_2,0);
  lVar5 = 0;
  lVar4 = param_2 + 0x468;
  *(uint *)(iVar1 + 0x293c) = *(uint *)(iVar1 + 0x293c) & 0xfffffff7;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40200;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffffffb;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
  do {
    uVar2 = fn_82639528(param_2,lVar5,0);
    fn_82639380(uVar2,lVar5);
    uVar6 = lVar5 + 0x20;
    lVar5 = lVar5 + 1;
    uVar6 = 0x8000000000000000 >> (uVar6 & 0x7f);
    iVar3 = (int)lVar4;
    *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) & 0xfe7fffff;
    *(ulonglong *)(iVar1 + 0x18) = uVar6 | *(ulonglong *)(iVar1 + 0x18);
    *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) & 0xffffe3ff | 0x800;
    *(ulonglong *)(iVar1 + 0x18) = uVar6 | *(ulonglong *)(iVar1 + 0x18);
    lVar4 = lVar4 + 0x18;
    *(uint *)lVar4 = *(uint *)(iVar3 + 0x18) & 0xffff1fff | 0x4000;
    *(ulonglong *)(iVar1 + 0x18) = uVar6 | *(ulonglong *)(iVar1 + 0x18);
  } while ((int)lVar5 < 3);
  return;
}

