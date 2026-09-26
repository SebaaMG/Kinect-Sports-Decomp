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
extern unsigned int *auStack_10;
extern unsigned int *auStack_c;
extern int fn_8265CF70();
extern int fn_8265D3D0();
extern int fn_8265ED50();
extern int fn_8265F570();
extern int fn_8265FA58();
extern int fn_82665A98();
extern int fn_826660E8();
extern int fn_82666560();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_8266AA68();
extern int fn_8266AC20();
extern int fn_8266C340();
extern unsigned int iStack_18;
extern unsigned int lbl_831E7A98;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;


void fn_8266A888(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  char cVar4;
  int iVar3;
  undefined4 uStack_1c;
  int iStack_18;
  uint uStack_14;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  uVar1 = fn_8265CF70(0xffffffff831e7a74);
  fn_826660E8(0xffffffff831e7b08,uVar1);
  fn_8266AA68(0xffffffff831e7b08);
  if (lbl_831E7A98 == 0x5c) {
    iStack_18 = fn_82665A98(0xffffffff831e7a9c);
    if (-1 < iStack_18) {
      fn_8266AC20(0xffffffff831e7b08,iStack_18);
      uStack_14 = fn_8265ED50(0xffffffff831e7a9c);
      if (uStack_14 == 0) {
        fn_8266C340(0xffffffff820015c0,0xffffffff82002724,0x1e2,0xffffffff8200276c);
      }
      if (uStack_14 != 0) {
        fn_8265F570((ulonglong)uStack_14 + 0x3c);
        iStack_18 = fn_82665A98();
        if (-1 < iStack_18) {
          fn_82666560(0xffffffff831e7b08,&iStack_18);
        }
      }
    }
  }
  puVar2 = (undefined4 *)fn_82668D40(auStack_10,0xffffffff831e7af8);
  uStack_1c = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_c,0xffffffff831e7af8);
    cVar4 = fn_82668EA0(&uStack_1c,uVar1);
    if (cVar4 == '\0') break;
    puVar2 = (undefined4 *)fn_8265FA58(&uStack_1c,0);
    fn_8265F570(*puVar2);
    iStack_18 = fn_82665A98();
    if (-1 < iStack_18) {
      fn_8266AC20(0xffffffff831e7b08,iStack_18);
    }
    fn_8265D3D0(&uStack_1c);
  }
  iVar3 = fn_8265CF70(0xffffffff831e7a74);
  for (iStack_18 = 0; iStack_18 < iVar3; iStack_18 = iStack_18 + 1) {
    fn_8266AC20(0xffffffff831e7b08,iStack_18);
  }
  return;
}

