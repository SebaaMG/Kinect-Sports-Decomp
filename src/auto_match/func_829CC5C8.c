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
extern unsigned int *auStack_1130;
extern int fn_82A1EFC0();
extern int fn_82F6A528();
extern int fn_82F6A574();
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_832171C8;


void fn_829CC5C8(void)

{
  int iVar1;
  undefined4 auStack_1130 [1100];
  
  fn_82F6A528();
  auStack_1130[0] = 0xe;
  iVar1 = (*(code *)lbl_8315C3E8)(auStack_1130);
  if (-1 < iVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(lbl_832171C8,0,0x4000);
  }
  fn_82F6A574();
  return;
}

