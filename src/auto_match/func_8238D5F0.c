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
extern int fn_82278B40();
extern int fn_822AF138();
extern int fn_82373268();
extern int fn_823815D0();
extern unsigned int lbl_831CAB58;


void fn_8238D5F0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = lbl_831CAB58;
  fn_82278B40((ulonglong)*(uint *)(param_1 + 8) + 0x9a0);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x7e4);
  fn_823815D0(uVar1,0,0xffffffffffffffff,0x15);
  fn_823815D0(uVar1,1,0xffffffffffffffff,0x15);
  fn_82373268(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
  fn_822AF138(**(undefined4 **)(*(int *)(param_1 + 8) + 0xc),6);
}

