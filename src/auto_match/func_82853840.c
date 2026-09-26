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
extern int fn_826310E0();
extern int fn_828461E8();


void fn_82853840(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_2 + 4) * 0x10;
  iVar3 = *(int *)(iVar4 + param_3);
  if (iVar3 != 0) {
    uVar1 = *param_1;
    uVar5 = -(uint)(param_1[0x3f] < *(uint *)(iVar3 + 0x20)) & param_1[0x3f];
    iVar6 = *(int *)(iVar3 + 0x24) + uVar5 * 0xc;
    fn_828461E8(iVar3,*(undefined4 *)(*(int *)(param_1[0x1a4f] + 0x4c) + iVar4 + 4),param_1[1]
                      ,uVar1 + 0x40,uVar5,*(undefined4 *)(uVar1 + 0x100),uVar1,0);
    uVar1 = *(uint *)(*(int *)(iVar6 + 4) + 0x10);
    if (-1 < (int)uVar1) {
      puVar2 = (ulonglong *)param_1[1];
      *(uint *)(puVar2 + (uVar1 + 0x78) * 2) = param_1[0x29];
      *(uint *)((int)puVar2 + uVar1 * 0x10 + 0x784) = param_1[0x2a];
      *(uint *)(puVar2 + uVar1 * 2 + 0xf1) = param_1[0x2b];
      *(uint *)((int)puVar2 + uVar1 * 0x10 + 0x78c) = param_1[0x2c];
      *puVar2 = 0x8000000000000000U >> ((ulonglong)(uVar1 >> 2) & 0x7f) | *puVar2;
    }
    uVar1 = *(uint *)(*(int *)(iVar6 + 4) + 0xc);
    if (-1 < (int)uVar1) {
      param_1[0x26] = uVar1;
    }
    uVar1 = *(uint *)(*(int *)(iVar6 + 4) + 0x14);
    if (-1 < (int)uVar1) {
      fn_826310E0(param_1[1],(ulonglong)uVar1,(ulonglong)*param_1 + 0xc0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar1 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar1 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar1 >> 2) & 0x7f));
      param_1[0x48] = *(uint *)(*(int *)(iVar6 + 4) + 0x14);
    }
    uVar1 = *(uint *)(*(int *)(iVar6 + 4) + 0x18);
    if (-1 < (int)uVar1) {
      param_1[0x28] = uVar1;
    }
    uVar1 = *(uint *)(*(int *)(iVar6 + 4) + 0x1c);
    if (-1 < (int)uVar1) {
      param_1[0x27] = uVar1;
    }
  }
  return;
}

