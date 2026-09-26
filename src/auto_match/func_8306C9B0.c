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
extern int fn_82F691F0();
extern int fn_8306DEF0();
extern int fn_8306E128();
extern int fn_8306E7F8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_821AAD20;


void fn_8306C9B0(undefined8 param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  RtlEnterCriticalSection(param_2 + 0x1b1c);
  if ((param_4 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_4,0,0x1c0);
  }
  uVar1 = fn_8306E7F8(param_1,(double)lbl_821AAD20,(double)lbl_82005718);
  fn_8306DEF0(param_2 + 0x78);
  fn_8306E128(uVar1,*(undefined4 *)(param_2 + 0x1b18));
  RtlLeaveCriticalSection(param_2 + 0x1b1c);
  return;
}

