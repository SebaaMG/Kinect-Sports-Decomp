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
extern int fn_82522D98();
extern int fn_82569B10();
extern int fn_825B3A50();
extern int fn_825BCD10();


void fn_825B7290(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  fn_825B3A50(2,0xffffffff8260bea0,0,0xffffffff8260bef0);
  fn_825B3A50(0x20,0xffffffff8255fc70,0,0xffffffff82ba02a8);
  fn_825B3A50(1,0xffffffff82547ea0,0,0xffffffff82ba02a8);
  fn_825B3A50(4,0xffffffff82574110,0xffffffff82574180,0xffffffff825741f8);
  fn_825B3A50(5,0xffffffff825a4d38,0,0xffffffff825a4dd0);
  fn_825B3A50(8,0xffffffff82559818,0,0xffffffff82559890);
  fn_825B3A50(0x73,0xffffffff82559818,0,0xffffffff82559890);
  fn_825B3A50(0x16,0xffffffff825e4990,0,0xffffffff82ba02a8);
  fn_825B3A50(0x11,0xffffffff825fd970,0,0xffffffff82ba02a8);
  fn_825B3A50(0xe,0xffffffff8260bef8,0xffffffff8260c0d8,0xffffffff8260bf98);
  fn_825B3A50(0x61,0,0,0);
  fn_825B3A50(0x41,0xffffffff8260c0d8,0,0xffffffff82ba02a8);
  fn_825B3A50(0x42,0xffffffff8260c0d8,0,0xffffffff82ba02a8);
  fn_825B3A50(0x6e,0xffffffff8260c000,0xffffffff8260c0d8,0xffffffff8260c0f0);
  fn_825B3A50(0x6a,0,0,0);
  puVar1 = (undefined4 *)fn_82569B10();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = fn_825BCD10(0x400,0x2c);
  iVar3 = fn_82569B10();
  *(undefined4 *)(iVar3 + 100) = uVar2;
  iVar3 = fn_82569B10();
  iVar4 = fn_82569B10();
  *(undefined4 *)(iVar3 + 0x3c) = **(undefined4 **)(iVar4 + 0x14);
  iVar3 = fn_82569B10();
  *(undefined1 *)(iVar3 + 0x40) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0x2010);
}

