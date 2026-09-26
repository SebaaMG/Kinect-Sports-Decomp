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
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;


void fn_824E8D48(void)

{
  int iVar1;
  int iVar2;
  
  fn_82F6A548();
  iVar1 = lbl_8320A898;
  if (lbl_8329618C == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0xd54), iVar2 != 0)) {
    *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
    fn_82631920(lbl_8320A898,*(undefined4 *)(iVar2 + 0x44));
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,*(undefined4 *)(iVar2 + 0x60));
  }
  fn_82F6A594(1);
  return;
}

