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
extern int fn_82F04110();
extern int fn_82F27B98();
extern int fn_82F68CC0();


void fn_82F07788(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((((*(int *)(param_1 + 0x5268) != 0) && (*(int *)(param_1 + 0xaf0) != 2)) &&
      ((*(int *)(param_1 + 0x76b8) == 0 || (*(int *)(param_1 + 0x76bc) == 0)))) &&
     (iVar3 = fn_82F04110(param_1), iVar3 != 0)) {
    if (*(int *)(param_1 + 0x1eb8) == 0) {
      *(undefined4 *)(param_1 + 0x76bc) = 1;
    }
    uVar1 = *(uint *)(param_1 + 0x564);
    if (*(int *)(param_1 + 4) == 8) {
      fn_82F68CC0((ulonglong)*(uint *)(param_1 + 0x5278) + ((ulonglong)uVar1 & 0x1fffffff) * -8,
                   (ulonglong)*(uint *)(param_1 + 0x14) + ((ulonglong)uVar1 & 0x1fffffff) * -8,
                   (longlong)(*(int *)(param_1 + 0x56c) + 0x10) * (longlong)(int)uVar1);
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x568) & 0x3fffffff;
      fn_82F68CC0((ulonglong)*(uint *)(param_1 + 0x527c) + uVar2 * -4,
                   (ulonglong)*(uint *)(param_1 + 0x18) + uVar2 * -4,
                   (longlong)(*(int *)(param_1 + 0x570) + 8) *
                   (longlong)(int)*(uint *)(param_1 + 0x568));
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x568) & 0x3fffffff;
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x1c) + uVar2 * -4;
      lVar5 = (longlong)(*(int *)(param_1 + 0x570) + 8) * (longlong)(int)*(uint *)(param_1 + 0x568);
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x5280) + uVar2 * -4;
    }
    else {
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x5278),*(undefined4 *)(param_1 + 0x14),
                   (longlong)*(int *)(param_1 + 0x56c) * (longlong)(int)uVar1);
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x527c),*(undefined4 *)(param_1 + 0x18),
                   (longlong)*(int *)(param_1 + 0x570) * (longlong)*(int *)(param_1 + 0x568));
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x1c);
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x5280);
      lVar5 = (longlong)*(int *)(param_1 + 0x570) * (longlong)*(int *)(param_1 + 0x568);
    }
    fn_82F68CC0(uVar2,uVar4,lVar5);
    fn_82F27B98(param_1);
    (**(code **)(param_1 + 0x1bac))
              (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x564),
               *(undefined4 *)(param_1 + 0x564),*(undefined4 *)(param_1 + 0x1a94),param_2,
               *(undefined4 *)(param_1 + 0x56c));
  }
  return;
}

