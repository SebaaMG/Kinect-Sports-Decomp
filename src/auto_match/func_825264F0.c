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
extern int fn_82A1BE48();
extern int fn_82A1BEE0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_83296204;


void fn_825264F0(uint param_1)

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
  iVar4 = param_1 * 0x170;
  iVar6 = 0;
  iVar3 = 0;
  do {
    iVar5 = iVar3 + iVar4;
    if (*(int *)(iVar5 + -0x7cd69df0) != 0) {
      if ((((uVar2 & 0xffffffff) != 0) && (cVar1 = fn_828EA608(uVar2), cVar1 != '\0')) &&
         ((ulonglong)*(uint *)(&lbl_83296204 + iVar5) == (uVar2 & 0xffffffff))) {
        iVar6 = iVar6 * 0x14 + iVar4;
        if (*(char *)(iVar6 + -0x7cd69dec) == '\0') {
          fn_82A1BE48(param_1,*(undefined4 *)(iVar6 + -0x7cd69df8),
                            *(undefined4 *)(iVar6 + -0x7cd69df4),iVar4 + -0x7cd69cd0);
        }
        else {
          fn_82A1BEE0(param_1,*(undefined4 *)(iVar6 + -0x7cd69df8),4,iVar6 + -0x7cd69df4,
                            iVar4 + -0x7cd69cd0);
        }
        *(undefined4 *)(iVar6 + -0x7cd69df0) = 0;
        *(undefined4 *)(iVar4 + -0x7cd69cb4) = 1;
        return;
      }
      *(undefined4 *)(iVar5 + -0x7cd69df0) = 0;
    }
    iVar3 = iVar3 + 0x14;
    iVar6 = iVar6 + 1;
    if (299 < iVar3) {
      *(undefined4 *)(iVar4 + -0x7cd69cb4) = 0;
      return;
    }
  } while( true );
}

