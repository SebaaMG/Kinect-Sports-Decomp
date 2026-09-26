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
extern unsigned int *auStack_60;
extern int fn_824916D0();
extern int fn_82491E88();
extern int fn_82496080();
extern int fn_825279F8();
extern unsigned int stack0x00000000;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;
extern unsigned int uStack_78;
extern U64 storeVectorElementWordIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82494E90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  ulonglong uVar5;
  int iVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_78;
  undefined1 auStack_60 [32];
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined4 uStack_3c;
  
  uVar5 = ZEXT48(&stack0x00000000);
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    iVar6 = fn_825279F8(iVar1);
    if ((iVar6 == 0) || (iVar6 == 3)) {
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x90) + 0x1b8);
      if (iVar6 != 0) {
        *(undefined1 *)(iVar6 + 3) = 1;
      }
      *(undefined4 *)(param_1 + 0x98) = 1;
    }
    iVar6 = *(int *)(param_1 + 0x90);
    uVar2 = *(undefined4 *)(iVar1 + 0x1ac);
    puVar3 = (undefined4 *)(iVar6 + 0xc0U & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar9 = puVar3[2];
    uVar11 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar9;
    puVar4[3] = uVar11;
    uVar7 = *(undefined4 *)(iVar6 + 0x1d0);
    fn_824916D0(uVar5 - 0x50,uVar2);
    uVar2 = storeVectorElementWordIndexed(in_vs32,0,uVar5 - 0x78);
    *(undefined4 *)(uVar5 - 0x78) = uVar2;
    uVar2 = storeVectorElementWordIndexed(in_vs45,uVar5 - 0x78,4);
    uVar9 = storeVectorElementWordIndexed(in_vs44,uVar5 - 0x78,8);
    puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    uVar11 = *puVar3;
    uVar8 = puVar3[1];
    uVar10 = puVar3[2];
    uVar12 = puVar3[3];
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = uStack_78;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = uVar9;
    puVar3 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
    *puVar3 = uVar11;
    puVar3[1] = uVar8;
    puVar3[2] = uVar10;
    puVar3[3] = uVar12;
    uStack_3c = uVar7;
    fn_82496080(param_1 + 0x40,uVar5 - 0x50);
    *(undefined1 *)(param_1 + 0x50) = uStack_40;
    *(undefined1 *)(param_1 + 0x51) = uStack_3f;
    *(undefined1 *)(param_1 + 0x52) = uStack_3e;
    *(undefined4 *)(param_1 + 0x54) = uStack_3c;
    fn_82491E88(uVar5 - 0x50);
  }
  return;
}

