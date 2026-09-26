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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_826438C0();
extern int fn_82A1EFC0();


void fn_825D5998(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_40 [4];
  undefined4 auStack_3c [15];
  
  fn_82520158(0xffffffff821c9860,auStack_40,0);
  fn_82520158(0xffffffff821c9880,auStack_3c,0);
  uVar1 = fn_8251F720(auStack_40,0);
  iVar2 = fn_82631830();
  *param_1 = iVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_8251F720(auStack_3c,0);
  iVar2 = fn_82631488();
  param_1[1] = iVar2;
  fn_8251FA58(uVar1);
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    auStack_3c[0] = 0x10;
    uVar1 = fn_82631BF8(0xffffffff831bfcb4);
    fn_826438C0(*param_1,0,uVar1,auStack_3c,0);
    fn_8262FEC8(uVar1);
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(param_1 + 2,0,0x60);
  }
  return;
}

