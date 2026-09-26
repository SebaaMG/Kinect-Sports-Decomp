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
extern int fn_82AC65F0();
extern int fn_82AC9F80();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD3A38();


void fn_82AD4F40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar5;
  undefined8 uVar4;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar5 = fn_82AD3A38(param_1,0,param_2);
  uVar4 = fn_82AD18C0(param_1,param_3,0);
  fn_82AD1978(uVar5,uVar4);
  *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) & 0xfff9ffff | 0x20000;
  iVar6 = fn_82AC65F0(param_2);
  uVar1 = *(uint *)(iVar6 + 0xc);
  puVar7 = (undefined4 *)(uVar1 + 4);
  iVar2 = *(int *)(uVar1 + 4);
  while( true ) {
    if (iVar2 == iVar6) break;
    puVar7 = (undefined4 *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 8);
  }
  uVar3 = uVar1 & 0xfffffffe;
  puVar9 = (uint *)(uVar3 + 0x24);
  puVar8 = (uint *)((uVar5 & 0xfffffffe) + 0x24);
  *puVar7 = *(undefined4 *)(iVar6 + 8);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(uVar5 + 4);
  *(int *)(uVar5 + 4) = iVar6;
  *(uint *)(iVar6 + 0xc) = uVar5;
  *(uint *)((*(uint *)(uVar3 + 0x28) & 0xfffffffe) + 0x24) = *puVar9;
  *(undefined4 *)(*puVar9 & 0xfffffffe) = *(undefined4 *)(uVar3 + 0x28);
  *puVar9 = *puVar8;
  *(uint *)(*puVar8 & 0xfffffffe) = uVar3;
  *(uint *)(uVar3 + 0x28) = uVar5 & 0xfffffffe;
  *puVar8 = uVar3 + 0x28;
  uVar4 = fn_82AC9F80(param_1,uVar1,7);
  fn_82AD1978(uVar5,uVar4);
  return;
}

