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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82CE5040();
extern int fn_82DBE7C8();
extern int fn_82DBE8C8();


void fn_82D959A8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  iVar4 = fn_82DBE7C8(*(undefined4 *)(param_1 + 0xc));
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  puVar2 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  iVar5 = fn_82DBE8C8(uVar9);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  puVar2 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  uVar9 = *(undefined4 *)(iVar1 + 0x18);
  fn_82CE5040(param_2,*(undefined4 *)(iVar4 + 0x18),auStack_40);
  fn_82CE5040(param_3,uVar9,auStack_30);
  return;
}

