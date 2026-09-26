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
extern int fn_828142D8();
extern int fn_8281FDF0();
extern int fn_82820228();
extern unsigned int uStack_70;


undefined8 fn_82814728(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  uint uStack_70;
  int aiStack_6c [27];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = (uint)*(byte *)(param_1 + 0x79) * 0x14 + iVar1;
  uVar6 = 0;
  lVar9 = ((ulonglong)*(uint *)(iVar3 + 100) - (ulonglong)*(uint *)(iVar3 + 0x68)) +
          (ulonglong)*(uint *)(iVar3 + 0x60);
  if (*(char *)(iVar1 + 0x51) != '\0') {
    uVar7 = 0;
    do {
      puVar10 = (uint *)(uVar7 * 0x21 + *(int *)(param_1 + 0x30));
      *(int *)((int)puVar10 + 0x15) = (int)lVar9;
      uVar5 = (((ulonglong)*(uint *)(param_1 + 4) - lVar9) +
              (ulonglong)*(uint *)((int)puVar10 + 0x1d)) - 1 &
              ~((ulonglong)*(uint *)(param_1 + 4) - 1);
      *(int *)((int)puVar10 + 0x19) = (int)uVar5;
      lVar9 = (uVar5 - *(uint *)((int)puVar10 + 0x1d)) + lVar9;
      if (iVar2 == 0) {
LAB_828147e0:
        uStack_70 = *(uint *)((int)puVar10 + 9);
        uVar5 = (ulonglong)uStack_70;
      }
      else {
        fn_82820228(iVar2,uVar7 + 3,&uStack_70);
        uVar5 = (ulonglong)uStack_70;
        if (uVar5 == 0) goto LAB_828147e0;
      }
      lVar8 = 0;
      if (param_2 == '\0') {
        lVar8 = lVar9 + 0x44;
      }
      fn_828142D8((ulonglong)*(uint *)(param_1 + 0x34) + (ulonglong)*puVar10,aiStack_6c);
      if (aiStack_6c[0] == 0) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x800;
LAB_828148a0:
        uVar6 = 1;
        break;
      }
      iVar3 = (**(code **)(aiStack_6c[0] + 0xc))
                        (*(undefined4 *)(param_1 + 0x18),lVar8 + uVar5,
                         1 << (*(byte *)(puVar10 + 1) & 0x3f),lVar8);
      *(int *)((int)puVar10 + 0xd) = iVar3;
      if (iVar3 == 0) goto LAB_828148a0;
      uVar7 = uVar7 + 1 & 0xff;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
      iVar3 = 1 << (*(byte *)(puVar10 + 1) & 0x3f);
      *(uint *)((int)puVar10 + 0x11) =
           ((*(int *)((int)puVar10 + 0xd) + iVar3) - 1U & ~(iVar3 - 1U)) -
           *(int *)((int)puVar10 + 0xd);
    } while (uVar7 < *(byte *)(iVar1 + 0x51));
  }
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  uVar4 = fn_8281FDF0(param_1,0xffffffff8201e098);
  *(undefined1 *)(param_1 + 0x78) = uVar4;
  return uVar6;
}

