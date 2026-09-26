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
extern int fn_82630750();
extern int fn_826308A0();
extern unsigned int uStack_38;


void fn_82853A60(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  int iVar9;
  uint uStack_38;
  
  iVar9 = *(int *)(param_2 + 8) * 0x3c + *(int *)(*(int *)(param_3 + 0x48) + 0x40);
  iVar1 = *(int *)(iVar9 + 0x34);
  if (*(int *)(param_1 + 0x6940) != 0) {
    fn_826308A0(*(undefined4 *)(param_1 + 4),0,*(int *)(param_1 + 0x6940),0);
  }
  iVar1 = iVar1 * 8;
  uVar2 = *(uint *)(param_2 + 0x14);
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar4 = *(uint *)(param_2 + 0x1c);
  uVar5 = *(uint *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x9c);
  uVar7 = *(uint *)(param_2 + 0x20);
  puVar8 = *(ulonglong **)(param_1 + 4);
  *(undefined4 *)((int)puVar8 + uVar6 * 0x10 + 0x784) = 0x4b000000;
  *(undefined4 *)(puVar8 + (uVar6 + 0x78) * 2) = 0x40000000;
  *(uint *)(puVar8 + uVar6 * 2 + 0xf1) =
       (((uVar2 & 1) << 3 | 0x4b00 | uVar3 & 7) << 8 | uVar4 & 0x3f) << 8 | uVar7 & 7 |
       uStack_38 & 0xc0f8;
  *(uint *)((int)puVar8 + uVar6 * 0x10 + 0x78c) = uVar5 & 0x7fffff | 0x4b000000;
  *puVar8 = 0x8000000000000000U >> ((ulonglong)(uVar6 >> 2) & 0x7f) | *puVar8;
  fn_82630750(*(undefined4 *)(param_1 + 4),0,*(undefined4 *)(*(int *)(iVar9 + 0x30) + iVar1),0
                   );
  *(undefined4 *)(param_1 + 0x6940) = *(undefined4 *)(*(int *)(iVar9 + 0x30) + iVar1);
  return;
}

