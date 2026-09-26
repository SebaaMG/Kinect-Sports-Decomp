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
extern int fn_8267C498();
extern int fn_8268F7C0();
extern int fn_82722C50();
extern int fn_82729B90();
extern int fn_8278FDC8();
extern int fn_827912D8();
extern int fn_82796EF8();
extern int fn_827A2EC8();
extern int fn_827A2F40();
extern int fn_827A3A50();


void fn_82729D40(int param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar6;
  undefined8 uVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 0x114);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x14), iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    if ((param_2 & 0xffffffff) == 0) {
      param_2 = (ulonglong)*(uint *)(iVar1 + 0x14);
      param_3 = fn_8278FDC8(iVar1 + 0x14);
    }
    else if ((int)param_3 == -1) {
      param_3 = thunk_FUN_82f64ce0(param_2);
    }
    if ((*(int *)(*(int *)(param_1 + 0xa0) + 0x108) != 0) &&
       (lVar4 = fn_827912D8(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 8)),
       (ulonglong)*(uint *)(*(int *)(param_1 + 0xa0) + 0x108) < (lVar4 + param_3 & 0xffffffffU))) {
      uVar2 = *(uint *)(*(int *)(param_1 + 0xa0) + 0x108);
      param_3 = fn_827912D8(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 8));
      param_3 = (ulonglong)uVar2 - param_3;
    }
    iVar3 = *(int *)(iVar1 + 0x30);
    iVar6 = fn_8268F7C0(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x114));
    if (iVar3 != iVar6) {
      uVar5 = fn_8268F7C0(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x114));
      fn_827A2F40(iVar1,uVar5);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0xa0) + 8);
    fn_82796EF8(iVar3,param_2,*(undefined4 *)(iVar1 + 0x30),param_3,1,*(undefined4 *)(iVar1 + 8)
                    ,*(undefined4 *)(iVar3 + 0x18));
    fn_827A2EC8(iVar1,0xffffffff820e975c,0xffffffffffffffff);
    param_3 = (ulonglong)*(uint *)(iVar1 + 0x30) + param_3;
    fn_827A2F40(iVar1,param_3);
    fn_827A3A50(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x114),param_3,0);
    fn_82722C50(param_1);
    fn_82729B90(param_1);
    fn_8267C498(iVar1);
  }
  return;
}

