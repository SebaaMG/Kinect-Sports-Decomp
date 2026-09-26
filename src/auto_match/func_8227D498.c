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
extern unsigned int *auStack_40;
extern int fn_8265C9E0();
extern int fn_829EFC50();
extern int fn_829EFD40();
extern int fn_82A1EFC0();
extern int iRam832975d0;
extern unsigned int lbl_831E4E38;
extern unsigned int uStack_30;


void fn_8227D498(void)

{
  int iVar1;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  
  if (iRam832975d0 == 0) {
    iVar1 = fn_8265C9E0(0x860);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x848) = 0;
      *(undefined4 *)(iVar1 + 0x84c) = 0;
      *(undefined4 *)(iVar1 + 0x850) = 0;
      *(undefined4 *)(iVar1 + 0x840) = 0;
      *(undefined4 *)(iVar1 + 0x844) = 0;
      fn_829EFD40(auStack_40);
      uStack_30 = lbl_831E4E38;
      fn_829EFC50(auStack_40);
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(iVar1,0,0x840);
    }
    iRam832975d0 = 0;
  }
  return;
}

