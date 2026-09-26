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
extern unsigned int *auStack_28;
extern int fn_82A1E228();
extern int fn_82A1F2F8();
extern int fn_82A20618();
extern int fn_82A20F98();
extern int fn_82A214B0();
extern int fn_82A21508();
extern int fn_82A22408();
extern int fn_82A226B0();
extern int fn_82A22760();
extern int fn_82A228A8();
extern int fn_82A23980();
extern int fn_82A24480();
extern int fn_82A25478();
extern unsigned int lbl_8315D2F0;
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219BFC;
extern unsigned int lbl_83219C30;
extern unsigned int lbl_83219C70;
extern unsigned int lbl_83219CB4;
extern unsigned int lbl_83219CB8;
extern unsigned int lbl_83219CBC;
extern unsigned int lbl_83219CC0;


void fn_82A25708(void)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lStack_30;
  ulonglong auStack_28 [5];
  
  if ((lbl_83219CB8 == 0) || (iVar2 = fn_82A226B0(), iVar2 == 0)) {
    if (lbl_83219CC0 != 0) {
      if (((lbl_83219C70 & 8) != 0) &&
         (iVar2 = fn_82A1F2F8(), 29999 < (uint)(iVar2 - lbl_83219CB4))) {
        RtlEnterCriticalSection(0xffffffff83219ba0);
        fn_82A228A8();
        lbl_83219CB4 = fn_82A1F2F8();
        RtlLeaveCriticalSection(0xffffffff83219ba0);
        return;
      }
      lVar6 = fn_82A1F2F8();
      lbl_83219CC0 = -(uint)(lVar6 - (ulonglong)lbl_83219CC0 < 30000) & lbl_83219CC0;
      return;
    }
    if (lbl_83219C30 == 0) {
      fn_82A20F98(auStack_28);
      uVar5 = auStack_28[0];
    }
    else {
      lStack_30 = 0;
      RtlEnterCriticalSection(0xffffffff83219ba0);
      fn_82A21508(lbl_83219B94,0xffffffff82a1f610,&lStack_30);
      RtlLeaveCriticalSection(0xffffffff83219ba0);
      uVar5 = lbl_83219C30 - lStack_30;
    }
    if ((longlong)uVar5 < 0) {
      if ((lbl_83219CBC != 0) && (iVar2 = fn_82A1F2F8(), (uint)(iVar2 - lbl_83219CBC) < 10000)) {
        return;
      }
      lbl_83219CBC = fn_82A1F2F8();
      lStack_30 = 0;
      lVar6 = -uVar5;
      lbl_83219CB8 = fn_82A22760(lVar6,&lStack_30,0x14,1,1);
      if (lStack_30 < lVar6) {
        iVar2 = fn_82A22760(lVar6,&lStack_30,0,0,1);
        lbl_83219CB8 = iVar2 + lbl_83219CB8;
      }
      goto LAB_82a25770;
    }
    RtlEnterCriticalSection(0xffffffff83219ba0);
    uVar1 = fn_82A23980();
    iVar2 = fn_82A22408(uVar5,uVar1,&lStack_30);
    RtlLeaveCriticalSection(0xffffffff83219ba0);
    if (iVar2 == 0) {
      if ((((U64)(lStack_30) >> 0) & 0xFFFFFFFF) == 0) {
        return;
      }
      fn_82A1E228(auStack_28);
      lbl_83219CC0 = (int)(auStack_28[0] / 10000000) - (int)lbl_8315D2F0;
      return;
    }
    iVar3 = fn_82A25478(iVar2);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = *(uint *)(iVar2 + 0x1c) | 8;
LAB_82a25760:
    *(uint *)(iVar2 + 0x1c) = uVar4;
  }
  else {
    iVar3 = fn_82A24480(iVar2);
    if (iVar3 != 0) {
      uVar4 = *(uint *)(iVar2 + 0x1c) | 4;
      goto LAB_82a25760;
    }
    lbl_83219BFC = (ulonglong)*(uint *)(iVar2 + 8) + lbl_83219BFC;
  }
  fn_82A214B0(lbl_83219B94,iVar2);
LAB_82a25770:
  fn_82A20618(2);
  return;
}

