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
extern unsigned int fStack_70;
extern int fn_829D6198();
extern int fn_829D6C98();
extern int fn_829DC748();
extern int fn_829E0040();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_832179FC;
extern unsigned int *lbl_83217A00;
extern unsigned int uStack_6c;


void fn_829D8B10(int *param_1)

{
  int iVar2;
  longlong lVar1;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  float fStack_70;
  undefined4 uStack_6c;
  float afStack_68 [26];
  
  iVar7 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar7);
  if (((7 < (uint)param_1[6]) || (*(int *)(param_1[6] * 0x18 + lbl_832179FC + 8) != 0)) &&
     (iVar2 = fn_829E0040(param_1[4] * 0x11fb0 + lbl_832179FC + 0xa10), iVar2 != 0)) {
    RtlLeaveCriticalSection(iVar7);
    iVar7 = lbl_832179FC;
    iVar6 = lbl_832179FC + 0x8f3e0;
    *(undefined1 *)(lbl_832179FC + 0x8f401) = 0;
    *(undefined1 *)(iVar7 + 0x8f400) = 0;
    iVar2 = lbl_832179FC + 0x8f4e0;
    *(undefined4 *)(lbl_832179FC + 0x8f500) = 0;
    lVar1 = fn_829D6C98(iVar2);
    lVar5 = 0;
    uVar4 = 0;
    dVar8 = (double)lbl_82005C88;
    dVar9 = dVar8;
    while (lVar1 != 0) {
      fStack_70 = (float)dVar8;
      uStack_6c = 0;
      *(char *)(iVar7 + 0x8f400) = *(char *)(iVar7 + 0x8f400) + '\x01';
      iVar3 = fn_829D6198(lVar1,param_1,iVar6,&fStack_70,&uStack_6c);
      if ((iVar3 != 0) && ((double)fStack_70 < dVar9)) {
        lVar5 = lVar1;
        dVar9 = (double)fStack_70;
        uVar4 = uStack_6c;
      }
      lVar1 = fn_829D6C98(iVar2);
    }
    fn_829DC748(uVar4,afStack_68);
    if ((double)afStack_68[0] <= dVar9) {
      return;
    }
    *(longlong *)(param_1 + 10) = lVar5;
    if (lbl_83217A00 != (int *)0x0) {
      (**(code **)(*lbl_83217A00 + 0x24))(lbl_83217A00,lVar5,param_1[6]);
    }
    if (param_1[2] < 0) {
      return;
    }
    if (*param_1 != 2) {
      return;
    }
    DbgPrint(0xffffffff82057678,lVar5,param_1[6]);
    iVar7 = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(iVar7);
    *(undefined4 *)(param_1[6] * 0x18 + lbl_832179FC + 0x14) = 1;
    param_1[0x40] = 1;
  }
  RtlLeaveCriticalSection(iVar7);
  return;
}

