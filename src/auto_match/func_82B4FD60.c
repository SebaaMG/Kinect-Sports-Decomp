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
extern unsigned int *auStack_40;
extern int fn_82ABE870();
extern int fn_82AF87E0();
extern int fn_82B20BC0();
extern int fn_82B46498();
extern unsigned int iStack_38;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B4FD60(int param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_40 [8];
  int iStack_38;
  
  fn_82B20BC0(param_2);
  fn_82B20BC0(*(undefined4 *)(param_1 + 0x240));
  uVar8 = (*(uint **)(param_1 + 0x244))[1];
  if (((uVar8 & 1) == 0) && (uVar8 != 0)) {
    if ((uVar8 & 1) == 0) {
      iVar6 = (**(uint **)(param_1 + 0x244) & 0xfffffffe) - 4;
    }
    else {
      iVar6 = 0;
    }
    iStack_38 = 0;
    iVar6 = *(int *)(iVar6 + 8) * 0xc + iVar6;
    puVar7 = (undefined1 *)(iVar6 + 4);
    uVar8 = *(uint *)(*(int *)(iVar6 + 4) + 4);
    uVar8 = -(uint)((uVar8 & 1) == 0) & uVar8;
    while( true ) {
      if ((uVar8 == 0) || (bVar4 = false, iStack_38 == *(int *)(uVar8 + 8))) {
        bVar4 = true;
      }
      if (bVar4) break;
      puVar5 = (undefined8 *)fn_82ABE870(auStack_40);
      puVar1 = *(uint **)(param_1 + 0x240);
      uVar9 = *puVar5;
      if ((puVar1[1] & 1) == 0) {
        uVar3 = *puVar1 & 0xfffffffe;
        iVar6 = uVar3 - 4;
        if ((iVar6 == 0) || (*(uint *)(uVar3 + 8) < *(int *)(uVar3 + 4) + 1U)) goto LAB_82b4fe58;
      }
      else {
LAB_82b4fe58:
        iVar6 = fn_82AF87E0(puVar1,1);
      }
      iVar2 = *(int *)(iVar6 + 8);
      *(int *)(iVar6 + 8) = iVar2 + 1;
      *(undefined8 *)((iVar2 + 2) * 8 + iVar6) = uVar9;
    }
  }
  else {
    puVar7 = auStack_40;
    iStack_38 = 0;
  }
  fn_82B46498(param_1,puVar7);
  return;
}

