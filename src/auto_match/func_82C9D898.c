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
extern int iRam83234c80;
extern unsigned int lbl_83232478;


ulonglong fn_82C9D898(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iRam83234c80 = iRam83234c80 + 1;
  if (iRam83234c80 != 1) {
    return (ulonglong)lbl_83232478;
  }
  iVar2 = -0x1400;
  lVar3 = 0x2800;
  lbl_83232478 = 0x83233880;
  iRam83234c80 = 1;
  do {
    if (iVar2 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0xff;
      if (iVar2 < 0x100) {
        iVar1 = iVar2;
      }
    }
    *(char *)(iVar2 + -0x7cdcc780) = (char)iVar1;
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return 0xffffffff83233880;
}

