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
extern int fn_8265C990();
extern int fn_82A1CFC8();
extern int fn_82A20618();
extern int fn_82A21368();
extern int fn_82A214B0();
extern int fn_82A24480();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219B9C;
extern unsigned int lbl_83219C4C;
extern unsigned int lbl_83219CB8;
extern unsigned int uRam83219c54;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82A247C0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uStack_50;
  ulonglong uStack_48;
  undefined1 auStack_40 [64];
  
  iVar1 = **(int **)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x14) < 0) {
    *(int *)(*(int *)(param_1 + 0x40) + 4) = *(int *)(param_1 + 0x14);
  }
  lVar4 = (ulonglong)**(uint **)(param_1 + 0x40) - 1;
  **(uint **)(param_1 + 0x40) = (uint)lVar4;
  if (lVar4 == 0) {
    uVar6 = *(uint *)(*(int *)(param_1 + 0x40) + 4) >> 0x1f ^ 1;
    RtlLeaveCriticalSection(0xffffffff83219ba0);
    (**(code **)(lbl_83219B8C + 4))(*(undefined4 *)(*(int *)(param_1 + 0xc) + 8));
    RtlEnterCriticalSection(0xffffffff83219ba0);
    if (uVar6 != 0) {
      if ((*(uint *)(**(int **)(param_1 + 0xc) + 8) & 0x7ff) != 0) {
        uVar6 = *(uint *)(iVar1 + 8);
        RtlLeaveCriticalSection(0xffffffff83219ba0);
        uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc);
        uStack_50 = (ulonglong)uVar6;
        lVar4 = NtSetInformationFile(uVar2,auStack_40,&uStack_50,8,0x14);
        if (-1 < lVar4) {
          uStack_48 = (ulonglong)uVar6;
          lVar4 = NtSetInformationFile(uVar2,auStack_40,&uStack_48,8,0x13);
        }
        RtlEnterCriticalSection(0xffffffff83219ba0);
        uVar6 = (uint)lVar4 >> 0x1f ^ 1;
      }
      if (uVar6 != 0) {
        uVar3 = *(uint *)(iVar1 + 0x1c);
        uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 8);
        *(uint *)(iVar1 + 0x1c) = uVar3 & 0xffffff9f | 0x40;
        *(undefined4 *)(iVar1 + 0x14) = uVar2;
        if ((uVar3 & 1) != 0) {
          lbl_83219CB8 = lbl_83219CB8 + 1;
        }
      }
    }
    RtlLeaveCriticalSection(0xffffffff83219ba0);
    (**(code **)(lbl_83219B8C + 4))(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
    RtlEnterCriticalSection(0xffffffff83219ba0);
    if (uVar6 == 0) {
      RtlLeaveCriticalSection(0xffffffff83219ba0);
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xffffffdf;
      if (lbl_83219C4C == 0) {
        fn_82A24480(**(undefined4 **)(param_1 + 0xc));
      }
      RtlEnterCriticalSection(0xffffffff83219ba0);
    }
    RtlLeaveCriticalSection(0xffffffff83219ba0);
    fn_82A21368(lbl_83219B94,iVar1);
    RtlEnterCriticalSection(0xffffffff83219ba0);
    fn_82A214B0(lbl_83219B94,**(undefined4 **)(param_1 + 0xc));
    fn_8265C990(*(undefined4 *)(param_1 + 0xc),lbl_8315D2EC);
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      uVar5 = (ulonglong)lbl_83219B9C;
      RtlEnterCriticalSection(uVar5 + 0xc);
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + -1;
      RtlLeaveCriticalSection(uVar5 + 0xc);
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x3c),lbl_8315D2EC);
    }
    fn_8265C990(*(undefined4 *)(param_1 + 0x40),lbl_8315D2EC);
    fn_8265C990(param_1,lbl_8315D2EC);
    RtlLeaveCriticalSection(0xffffffff83219ba0);
    fn_82A1CFC8();
    RtlEnterCriticalSection(0xffffffff83219ba0);
    uRam83219c54 = 0;
    fn_82A20618(2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      uVar5 = (ulonglong)lbl_83219B9C;
      RtlEnterCriticalSection(uVar5 + 0xc);
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + -1;
      RtlLeaveCriticalSection(uVar5 + 0xc);
    }
    fn_8265C990(param_1,lbl_8315D2EC);
  }
  return;
}

