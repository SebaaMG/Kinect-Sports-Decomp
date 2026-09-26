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
extern unsigned int __imp__ExThreadObjectType;
extern unsigned int *auStack_60;
extern int fn_8265C940();
extern int fn_82A1E0C0();
extern int fn_831426EC();


undefined8 fn_8264F4C0(int param_1)

{
  int iVar2;
  ulonglong uVar1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 auStack_60 [24];
  
  if ((*(uint *)(param_1 + 0x5e88) & 0x100) == 0) {
    iVar2 = fn_8265C940(200,0xffffffffb5800000);
    *(int *)(param_1 + 0x2ec8) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x2b08) = 0;
    uVar4 = 0;
    lVar7 = 6;
    do {
      if ((0x1000000 << (uVar4 & 0x3f) & *(uint *)(param_1 + 0x5e88)) != 0) {
        iVar2 = iVar2 + 1;
      }
      uVar4 = uVar4 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(undefined4 *)(param_1 + 0x2b18) = 0xc0000000;
    uVar4 = 0xffffffff;
    *(int *)(param_1 + 0x2aec) = iVar2;
    *(undefined4 *)(param_1 + 0x2af0) = 0;
    *(undefined4 *)(param_1 + 0x2ac8) = *(undefined4 *)(param_1 + 0x3b04);
    *(undefined4 *)(param_1 + 0x2ad0) = *(undefined4 *)(param_1 + 0x3b08);
    if ((*(uint *)(param_1 + 0x5e88) & 0x4000000) != 0) {
      uVar4 = 2;
      *(undefined4 *)(param_1 + 0x2c3c) = 2;
    }
    uVar6 = 0;
    uVar5 = 0x7f000000;
    iVar2 = param_1 + 0x2c84;
    do {
      if ((0x1000000 << (uVar6 & 0x3f) & *(uint *)(param_1 + 0x5e88)) != 0) {
        if ((int)uVar4 < 0) {
          *(uint *)(param_1 + 0x2c3c) = uVar6;
          uVar4 = uVar6;
        }
        *(uint *)(iVar2 + -0x40) = uVar6;
        *(uint *)(iVar2 + -0x28) = uVar5;
        *(int *)(iVar2 + -0x44) = param_1 + 0x2ac4;
        *(uint *)(iVar2 + -0x2c) = uVar5 + 0x41000000 | 2;
        *(undefined1 *)(iVar2 + -8) = 0;
        *(undefined4 *)(iVar2 + -4) = 0;
        *(int *)iVar2 = iVar2;
        *(int *)(iVar2 + 4) = iVar2;
        fn_831426EC(iVar2 + -0x24,0xffffffff8264ef18,iVar2 + -0x44);
        *(char *)(iVar2 + -0x21) = (char)uVar6 + '\x01';
        uVar1 = fn_82A1E0C0(0,0x10000,0xffffffff8264ed80,iVar2 + -0x44,0,iVar2 + 0xc);
        *(int *)(iVar2 + 8) = (int)uVar1;
        if ((uVar1 & 0xffffffff) == 0) {
          return 0;
        }
        iVar3 = ObReferenceObjectByHandle(uVar1,__imp__ExThreadObjectType,auStack_60);
        if (-1 < iVar3) {
          KeSetBasePriorityThread(auStack_60[0],0x11);
          ObDereferenceObject(auStack_60[0]);
        }
      }
      uVar5 = uVar5 + 0x80;
      uVar6 = uVar6 + 1;
      iVar2 = iVar2 + 0x6c;
    } while (uVar5 < 0x7f000300);
  }
  return 1;
}

