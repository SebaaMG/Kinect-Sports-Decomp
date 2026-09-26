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
extern int fn_82ABE250();
extern int fn_82ABE870();
extern int fn_82AF87E0();
extern int fn_82B503A8();
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int uStack_3c;


void fn_82B50E90(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  
  puVar5 = (uint *)fn_82ABE250(param_1,8,3);
  iStack_38 = 0;
  puVar5[1] = (uint)puVar5 | 1;
  *puVar5 = (uint)(puVar5 + 1) | 1;
  iStack_40 = *(int *)(param_1 + 0x240);
  uStack_3c = -(uint)((*(uint *)(iStack_40 + 4) & 1) == 0) & *(uint *)(iStack_40 + 4);
  do {
    if (uStack_3c == 0) {
LAB_82b50f08:
      bVar3 = true;
    }
    else {
      bVar3 = false;
      if (iStack_38 == *(int *)(uStack_3c + 8)) goto LAB_82b50f08;
    }
    if (bVar3) {
      puVar8 = (undefined4 *)fn_82B503A8(*(undefined4 *)(param_1 + 0x244));
      *puVar8 = puVar5;
      puVar8[1] = *(undefined4 *)(param_1 + 0x20);
      uVar2 = puVar8[2];
      uVar4 = *(uint *)(param_1 + 0x28) >> 0x1d & 1;
      puVar8[2] = uVar4 | uVar2 & 0xfffffffe;
      puVar8[2] = *(uint *)(param_1 + 0x28) & 2 | uVar4 | uVar2 & 0xfffffffc;
      return;
    }
    puVar6 = (undefined8 *)fn_82ABE870(&iStack_40);
    uVar9 = *puVar6;
    if ((puVar5[1] & 1) == 0) {
      uVar2 = *puVar5 & 0xfffffffe;
      iVar7 = uVar2 - 4;
      if ((iVar7 == 0) || (*(uint *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U)) goto LAB_82b50f50;
    }
    else {
LAB_82b50f50:
      iVar7 = fn_82AF87E0(puVar5,1);
    }
    iVar1 = *(int *)(iVar7 + 8);
    *(int *)(iVar7 + 8) = iVar1 + 1;
    *(undefined8 *)((iVar1 + 2) * 8 + iVar7) = uVar9;
  } while( true );
}

