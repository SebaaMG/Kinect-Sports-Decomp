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
extern int fn_825117D8();
extern int fn_82517CB0();
extern int fn_8265B628();
extern int fn_8265BF48();
extern int fn_8287CA08();
extern int fn_8287FD98();
extern int fn_82887E60();
extern int fn_8288A320();
extern int fn_8288A340();
extern int fn_8288A3A8();
extern int fn_8288A3B8();
extern int fn_8288AF40();
extern int fn_8288B020();
extern int fn_8288B060();
extern int fn_828AD798();
extern int fn_82F63EC8();
extern unsigned int lbl_821912A4;
extern unsigned int lbl_821963D0;
extern unsigned int lbl_8326C06C;
extern unsigned int lbl_8326C290;
extern unsigned int lbl_8326C294;
extern unsigned int lbl_8326C298;
extern unsigned int lbl_8326C29C;
extern unsigned int lbl_8326C2A0;
extern unsigned int lbl_8326C2A4;
extern unsigned int lbl_83297800;
extern unsigned int lbl_83299074;
extern unsigned int lbl_832991AC;
extern unsigned int lbl_832991B0;
extern unsigned int lbl_832993E4;


void fn_82230C88(void)

{
  undefined8 uVar1;
  undefined2 uVar3;
  int iVar2;
  
  if ((lbl_832993E4 & 1) == 0) {
    lbl_832993E4 = lbl_832993E4 | 1;
    uVar1 = fn_8265B628();
    uVar3 = fn_8265BF48(uVar1,0);
    fn_8288AF40(0xffffffff83299074,8,uVar3,6,0xffffffff831d0eb0);
    lbl_832991AC = 8;
    lbl_83299074 = &lbl_821963D0;
    lbl_832991B0 = 9;
    fn_82F63EC8(0xffffffff8313a2a0);
  }
  fn_8288B020(0xffffffff83299074,0x1d,0);
  iVar2 = lbl_83297800;
  if (lbl_83297800 == 0) {
    iVar2 = fn_825117D8();
  }
  *(undefined ****)(iVar2 + 4) = &lbl_83299074;
  lbl_8326C2A4 = 0;
  lbl_8326C2A0 = 1;
  lbl_8326C29C = 0;
  lbl_8326C298 = 1;
  lbl_8326C294 = 0x10000006;
  lbl_8326C06C = 0x10000008;
  lbl_8326C290 = 0x10000007;
  fn_8288A340((double)lbl_821912A4,0xffffffff83299074);
  fn_828AD798(*(undefined4 *)(iVar2 + 4),0);
  fn_8288A320(*(undefined4 *)(iVar2 + 4),0);
  fn_8288B060(*(undefined4 *)(iVar2 + 4),0);
  fn_8288A3A8(*(undefined4 *)(iVar2 + 4));
  fn_8288A3B8(*(undefined4 *)(iVar2 + 4),0);
  fn_82887E60(0);
  fn_82517CB0();
  uVar1 = fn_8287FD98();
  fn_8287CA08(uVar1,0xf,0x3c);
  *(undefined1 *)(iVar2 + 8) = 1;
  return;
}

