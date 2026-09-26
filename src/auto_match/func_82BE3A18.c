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
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82BE1E28();
extern int fn_82BE2308();
extern int fn_82BE3908();
extern int fn_82BE5240();
extern int fn_82BE8600();
extern int fn_82BE9190();
extern int fn_82BE91C8();
extern int fn_82BE9220();
extern int fn_82BE9320();
extern int fn_82BE93D0();
extern int fn_82BE9460();
extern int fn_82BE94F0();
extern int fn_82BE9510();
extern int fn_82BE9548();
extern int fn_82BE9560();
extern int fn_82BE97E0();
extern int fn_82BE99F0();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEA938();
extern int fn_82BEB678();
extern int fn_82BEE040();
extern int fn_82F68CC0();
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_8322B130;
extern unsigned int lbl_8322B138;
extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1DC;
extern unsigned int lbl_8322B224;
extern unsigned int uStack_72;
extern unsigned int uStack_74;


uint fn_82BE3A18(ulonglong param_1,int param_2)

{
  uint uVar1;
  int iVar4;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int *piStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  ushort uStack_74;
  ushort uStack_72;
  
  iVar4 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e8fa0);
  if (iVar4 == 0) {
    uVar5 = 0x69;
  }
  else {
    if (lbl_8322B130 == 0) {
      uVar5 = 200;
    }
    else {
      lbl_8322B138 = thunk_FUN_82a1bb18();
      *(undefined4 *)(lbl_8322B130 + 4) = 0;
      if ((*(int *)(lbl_8322B130 + 0x10) != 0) && (iVar4 = fn_82BE3908(), iVar4 == 0)) {
        uVar2 = fn_82BEB678(lbl_8322B130 + 0xe0);
        *(undefined8 *)(lbl_8322B130 + 0x150) = uVar2;
        uVar6 = *(longlong *)(lbl_8322B130 + 0x150) - *(longlong *)(lbl_8322B130 + 0x148);
        *(ushort *)(lbl_8322B130 + 0x11c) = *(ushort *)(lbl_8322B130 + 0x11c) & 0xfbff;
        if (1000 < uVar6) {
          *(ushort *)(lbl_8322B130 + 0x11c) = *(ushort *)(lbl_8322B130 + 0x11c) | 0x400;
        }
        uVar5 = 0;
        lVar7 = 1;
        if ((param_2 == 0) && (uVar6 < 2)) {
          fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8fa0);
          return 0xd0;
        }
        fn_82BE9510(0);
        fn_82BE9548(0);
        if ((param_1 & 0xffffffff) != 0) {
          fn_82F68CC0(&iStack_90,param_1,0x20);
          fn_82BE9320(iStack_90);
          fn_82BE93D0(iStack_8c);
          fn_82BE9460(iStack_88);
          if (piStack_84 != (int *)0x0) {
            fn_82BE9220(piStack_84);
            fn_82BE9510(1);
            if (((uint)uStack_74 < (uint)piStack_84[2]) || ((uint)uStack_72 < (uint)piStack_84[3]))
            {
              fn_82BE9510(0);
            }
            if ((piStack_84[2] == *piStack_84) || (piStack_84[3] == piStack_84[1])) {
              fn_82BE9510(0);
            }
          }
          fn_82BE9190((uint)uStack_74);
          fn_82BE91C8((uint)uStack_72);
          if ((((iStack_90 != 0) && (iStack_8c != 0)) && (iStack_88 != 0)) &&
             ((piStack_84 != (int *)0x0 && (iVar4 = fn_82BE94F0(), iVar4 != 0)))) {
            fn_82BE9560();
            fn_82BE97E0((double)fStack_80,(double)fStack_7c,(double)fStack_78);
            fn_82BE9548(1);
            fn_82BE99F0();
          }
        }
        fn_82BE8600(lbl_8322B1DC);
        uVar1 = *(uint *)(lbl_8322B1DC + 4);
        if (uVar1 != 0) {
          fn_82BE5240(lbl_8322B130,uVar1,0xffffffff82196582);
        }
        fn_82BE1E28(lbl_8322B130);
        iVar4 = *(int *)(lbl_8322B130 + 0x180);
        if (iVar4 != 0) {
          if (*(int *)(iVar4 + 0x10) == 0) {
            fn_82BE5240(lbl_8322B130,*(undefined4 *)(iVar4 + 4),0xffffffff82196582);
            lVar7 = 0;
            *(undefined4 *)(lbl_8322B130 + 0x180) = 0;
            if (lbl_8322B1C8 == 0) {
              *(undefined4 *)(lbl_8322B130 + 0x10) = 0;
            }
            else {
              *(undefined4 *)(lbl_8322B130 + 0x10) = 0xb;
            }
          }
          else {
            lVar7 = fn_82BEA938();
            if (lVar7 == 0) {
              uVar5 = *(uint *)(*(int *)(lbl_8322B130 + 0x180) + 4);
            }
          }
        }
        if ((lbl_8322B224 != 0) && (*(int *)(lbl_8322B224 + 0x58) != 0)) {
          fn_82BEE040();
        }
        if (((*(longlong *)(lbl_8322B130 + 0x138) != 0) &&
            (lVar3 = fn_82BEB678(lbl_8322B130 + 0xe0),
            *(ulonglong *)(lbl_8322B130 + 0x138) <
            (ulonglong)(lVar3 - *(longlong *)(lbl_8322B130 + 0x140)))) &&
           (*(int *)(lbl_8322B130 + 0x10) != 4)) {
          fn_82BE2308();
          uVar2 = fn_82BEB678(lbl_8322B130 + 0xe0);
          *(undefined8 *)(lbl_8322B130 + 0x140) = uVar2;
        }
        *(undefined8 *)(lbl_8322B130 + 0x148) = *(undefined8 *)(lbl_8322B130 + 0x150);
        *(undefined8 *)(lbl_8322B130 + 0x150) = 0;
        fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8fa0);
        if (uVar1 != 0) {
          return uVar1;
        }
        return -(uint)(lVar7 == 0) & uVar5;
      }
      uVar5 = 0xce;
    }
    fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8fa0);
  }
  return uVar5;
}

