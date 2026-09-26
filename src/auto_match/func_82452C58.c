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
extern int fn_8242C1B8();
extern int fn_82441EF0();


void fn_82452C58(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 9) {
LAB_82452ca8:
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(**(undefined4 **)(param_2 + 0x40));
  }
  if (iVar1 != 10) {
    if (iVar1 < 0xc) {
      return;
    }
    if (0xe < iVar1) {
      if (iVar1 != 0xf) {
        return;
      }
      goto LAB_82452ca8;
    }
  }
  fn_82441EF0(param_1,*(undefined4 *)(param_2 + 0x44),**(undefined4 **)(param_2 + 0x40));
  return;
}

