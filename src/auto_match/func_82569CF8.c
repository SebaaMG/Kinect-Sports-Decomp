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
extern unsigned int *auStack_48;
extern int fn_82522D98();
extern int fn_82549610();
extern int fn_82569B10();
extern int fn_8256B190();
extern int fn_8259C738();
extern int fn_82837D98();
extern int fn_828385E0();
extern int fn_8284C860();
extern int fn_82A1BB18();
extern int fn_82A1DD38();
extern unsigned int uStack_34;
extern unsigned int uStack_50;


undefined8 fn_82569CF8(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  char cVar9;
  ulonglong uVar7;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uStack_50;
  undefined4 auStack_48 [2];
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  
  uVar6 = fn_82569B10();
  fn_82549610(auStack_48,uVar6);
  iVar5 = (int)in_r0;
  uVar6 = 1;
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0x14), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      uVar6 = fn_828385E0(*(undefined4 *)(*(int *)(iVar1 + 8) + 0x14));
      if (*(int *)(iVar1 + 0x10) == 0) {
        uVar8 = fn_82522D98();
        *(undefined4 *)(iVar1 + 0x10) = uVar8;
      }
      fn_82A1DD38(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(*(int *)(iVar1 + 8) + 0x14),
                        uVar6);
      uVar10 = 0;
      iVar2 = *(int *)(iVar1 + 8);
      cVar9 = fn_8284C860(*(undefined4 *)(iVar2 + 0x14));
      iVar5 = (int)in_r0;
      if (cVar9 != '\0') {
        do {
          fn_82837D98(*(undefined4 *)(iVar2 + 0x14),uVar10,&uStack_50);
          uVar10 = uVar10 + 1;
          *(uint *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x2c) = *(uint *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x2c) & 0xffffffc3 | 4;
          uVar7 = fn_8284C860(*(undefined4 *)(iVar2 + 0x14));
          iVar5 = (int)in_r0;
        } while ((uVar10 & 0xffffffff) < (uVar7 & 0xff));
      }
    }
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xf7;
    uStack_50 = (ulonglong)*(byte *)(*(int *)(*(int *)(iVar1 + 8) + 0x14) + 0x30);
    uVar6 = fn_8256B190((double)uStack_50,param_1);
    uStack_34 = (((U64)(uStack_50) >> 0) & 0xFFFFFFFF);
    puVar3 = (undefined4 *)((uint)(auStack_40 + iVar5) & 0xfffffff0);
    uVar8 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar4 = (undefined4 *)(iVar5 + param_2 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar8;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
  }
  fn_82A1BB18();
  fn_8259C738(auStack_48[0]);
  return uVar6;
}

