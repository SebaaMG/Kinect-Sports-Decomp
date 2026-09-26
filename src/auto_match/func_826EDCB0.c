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
extern int fn_8267BED0();
extern int fn_826EB7F8();
extern int fn_826EBF90();


void fn_826EDCB0(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 auStack_40 [16];
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    auStack_40[0] = 2;
    puVar2 = (undefined4 *)fn_8267BED0(param_1,0xc,auStack_40);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    *(undefined4 **)(param_1 + 0x6c) = puVar2;
  }
  puVar1 = *(uint **)(param_1 + 0x6c);
  uVar8 = (ulonglong)(uint)param_2[1];
  uVar7 = (ulonglong)puVar1[1];
  fn_826EBF90(puVar1,puVar1,uVar8);
  if (uVar7 < uVar8) {
    fn_826EB7F8(uVar7 * 0x18 + (ulonglong)*puVar1,uVar8 - uVar7);
  }
  uVar3 = 0;
  if (param_2[1] != 0) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      uVar3 = uVar3 + 1;
      iVar6 = iVar5 + *param_2;
      iVar5 = iVar5 + 0x28;
      puVar2 = (undefined4 *)(**(int **)(param_1 + 0x6c) + iVar4);
      iVar4 = iVar4 + 0x18;
      *puVar2 = *(undefined4 *)(iVar6 + 0x10);
      puVar2[1] = *(undefined4 *)(iVar6 + 0x14);
      puVar2[2] = *(undefined4 *)(iVar6 + 0x18);
      puVar2[3] = *(undefined4 *)(iVar6 + 0x1c);
      puVar2[4] = *(undefined4 *)(iVar6 + 0x20);
      puVar2[5] = *(undefined4 *)(iVar6 + 0x24);
    } while (uVar3 < (uint)param_2[1]);
  }
  return;
}

