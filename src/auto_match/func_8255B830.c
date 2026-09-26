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
extern int fn_828EA608();
extern int fn_828EB518();
extern int fn_82F691F0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_8327FFFC;
extern unsigned int lbl_83280000;
extern unsigned int lbl_8328026C;


void fn_8255B830(uint param_1)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  param_1 = param_1 & 0xff;
  if (param_1 == 0xff) {
    uVar2 = (ulonglong)lbl_83265988;
  }
  else {
    uVar2 = fn_828EB518(param_1);
  }
  iVar6 = param_1 * 0x280;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + iVar6;
    if (*(int *)(&lbl_83280000 + iVar5) != 0) {
      if ((uVar2 & 0xffffffff) != 0) {
        cVar1 = fn_828EA608(uVar2);
        if ((cVar1 != '\0') && ((ulonglong)*(uint *)(iVar5 + -0x7cd80008) == (uVar2 & 0xffffffff)))
        {
          *(uint *)(iVar6 + -0x7cd7fd90) = param_1;
          *(undefined4 *)(iVar6 + -0x7cd7fd8c) =
               *(undefined4 *)(&lbl_8327FFFC + iVar3 * 0xc + iVar6);
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar6 + -0x7cd7fdb0,0,0x1c);
        }
      }
      *(undefined4 *)(&lbl_83280000 + iVar5) = 0;
    }
    iVar4 = iVar4 + 0xc;
    iVar3 = iVar3 + 1;
    if (599 < iVar4) {
      *(undefined4 *)(&lbl_8328026C + iVar6) = 0;
      return;
    }
  } while( true );
}

