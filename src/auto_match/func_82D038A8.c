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
extern int fn_82D02A58();
extern int fn_82D02B68();


void fn_82D038A8(int param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar5 = (int)param_2;
    lVar4 = param_2 - 0x10;
    uVar2 = (ulonglong)*(uint *)(iVar5 + -0xc) & 0xfffffffc;
    uVar6 = uVar2 + lVar4;
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) - (int)uVar2;
    *(uint *)(param_1 + 0xc0) =
         (*(int *)(param_1 + 0xc0) - (*(uint *)(iVar5 + -0xc) & 0xfffffffc)) + 0x10;
    if ((*(uint *)(iVar5 + -0xc) & 1) == 0) {
      uVar1 = *(uint *)lVar4;
      lVar4 = lVar4 - (ulonglong)uVar1;
      param_1 = fn_82D02B68(param_1,lVar4);
      uVar2 = uVar1 + uVar2;
    }
    uVar3 = (uint)uVar2;
    uVar1 = *(uint *)((int)uVar6 + 4);
    iVar5 = (int)lVar4;
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar6 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x10)) {
        *(int *)(param_1 + 0x10) = iVar5;
        uVar3 = uVar3 + *(int *)(param_1 + 0x14);
        *(uint *)(param_1 + 0x14) = uVar3;
        *(uint *)(iVar5 + 4) = uVar3 | 1;
        return;
      }
      uVar3 = (uVar1 & 0xfffffffc) + uVar3;
      param_1 = fn_82D02B68(param_1,uVar6);
      *(uint *)((int)lVar4 + 4) = uVar3 | 1;
    }
    else {
      *(uint *)((int)uVar6 + 4) = uVar1 & 0xfffffffe;
      *(uint *)(iVar5 + 4) = uVar3 | 1;
    }
    *(uint *)(uVar3 + (int)lVar4) = uVar3;
    fn_82D02A58(param_1,lVar4);
  }
  return;
}

