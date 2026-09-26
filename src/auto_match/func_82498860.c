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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_824916D0();
extern int fn_82492768();
extern int fn_82496080();
extern int fn_82498D90();
extern unsigned int stack0x00000000;
extern unsigned int uStack00000024;
extern unsigned int uStack_64;
extern unsigned int uStack_66;
extern unsigned int uStack_67;
extern unsigned int uStack_68;
extern U64 storeVectorElementWordIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82498860(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar7;
  int iVar6;
  int iVar8;
  int iVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uStack00000024;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined4 uStack_64;
  
  uVar5 = ZEXT48(&stack0x00000000);
  iVar6 = *(int *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar8 = 0;
  iVar9 = 0;
  uStack00000024 = param_3;
  if ((iVar6 != 0) && (cVar7 = fn_8223AAC0(iVar6), cVar7 != '\0')) {
    iVar8 = iVar1;
    iVar9 = iVar6;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 100) + 0x44);
  fn_824916D0(uVar5 - 0x78,(ulonglong)*(uint *)(iVar8 + 0x1c) + 0x1a4);
  uVar3 = storeVectorElementWordIndexed(in_vs32,0,uVar5 - 100);
  *(undefined4 *)(uVar5 - 100) = uVar3;
  uVar3 = storeVectorElementWordIndexed(in_vs45,uVar5 - 100,4);
  uVar4 = storeVectorElementWordIndexed(in_vs44,uVar5 - 100,8);
  iVar6 = fn_82498D90(param_1 + 0x30,uVar5 + 0x24);
  *(undefined4 *)(iVar6 + 4) = param_3;
  fn_82496080(iVar6 + 8,uVar5 - 0x78);
  *(undefined1 *)(iVar6 + 0x18) = uStack_68;
  *(undefined1 *)(iVar6 + 0x19) = uStack_67;
  *(undefined1 *)(iVar6 + 0x1a) = uStack_66;
  *(undefined4 *)(iVar6 + 0x1c) = uStack_64;
  *(undefined4 *)(iVar6 + 0x20) = uVar3;
  *(undefined4 *)(iVar6 + 0x28) = uVar2;
  *(undefined4 *)(iVar6 + 0x24) = uVar4;
  fn_82492768(uVar5 - 0x80);
  if (iVar9 != 0) {
    fn_822315A0(iVar9);
  }
  return;
}

