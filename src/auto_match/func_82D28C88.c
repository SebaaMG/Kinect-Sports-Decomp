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
extern unsigned int *auStack_280;
extern unsigned int *auStack_2b0;
extern int fn_82CE5410();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82D27BE8();
extern int fn_82D27D00();
extern unsigned int *lbl_8323B464;


void fn_82D28C88(undefined8 param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_2b0 [48];
  undefined1 auStack_280 [640];
  
  iVar2 = fn_82CE5410();
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x7e0);
  *(undefined2 *)(iVar2 + 4) = 0x7e0;
  uVar1 = fn_82D27D00();
  fn_82D27BE8(uVar1,param_2);
  fn_82CEE578(auStack_2b0,auStack_280,0x200);
  fn_82CEDB38(auStack_2b0,0xffffffff82134b7c);
  (**(code **)(*lbl_8323B464 + 0xc))
            (lbl_8323B464,0,0xffffffffffffffff,auStack_280,0xffffffff8213492c,0x7cd);
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_2b0);
}

