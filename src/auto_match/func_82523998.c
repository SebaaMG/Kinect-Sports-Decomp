extern unsigned int *puRam8327f254;
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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_82520158();
extern int fn_82525F28();
extern int fn_8259CA88();
extern int fn_8265C940();
extern int fn_8265C9E0();
extern int fn_82A1EFC0();
extern int fn_82A81FE8();
extern int fn_82A822A8();
extern unsigned int lbl_821C3058;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_832767EC;


void fn_82523998(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];

  uVar1 = lbl_8320A898;
  if (puRam8327f254 == (undefined4 *)0x0) {
    puRam8327f254 = (undefined4 *)fn_8265C9E0(4);
    if (puRam8327f254 == (undefined4 *)0x0) {
      puRam8327f254 = (undefined4 *)0x0;
    }
    else {
      *puRam8327f254 = &lbl_821C3058;
    }
  }
  iVar2 = fn_82A81FE8(1,2,5,4,uVar1);
  if (-1 < iVar2) {
    fn_8259CA88();
    lbl_832767EC = fn_8265C940(0x2000,0x21006000);
    fn_82A822A8(0,0,0x2000);
    fn_82520158(0xffffffff821c2f5c,auStack_1c,1);
    fn_82520158(0xffffffff821c2f80,auStack_20,1);
    fn_82525F28(auStack_1c,auStack_20);
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(0xffffffff832767f0,0,0x8a60);
  }
  return;
}
