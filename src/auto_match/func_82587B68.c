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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int lbl_831C0BB0;
extern unsigned int lbl_831C0BB8;
extern unsigned int lbl_831C0BBC;
extern unsigned int lbl_831C0BC0;
extern unsigned int lbl_831C0BC4;


longlong fn_82587B68(longlong param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &lbl_831C0BB0;
  iVar1 = (int)param_1;
  if ((iVar1 < lbl_831C0BB8) || (lbl_831C0BBC <= iVar1)) {
    iVar2 = 0;
    if (0 < lbl_831C0BC0) {
      piVar3 = &lbl_831C0BC4;
      do {
        ppuVar4 = (undefined **)*piVar3;
        if (((int)ppuVar4[2] <= iVar1) && (iVar1 < (int)ppuVar4[3])) goto LAB_82587bcc;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < lbl_831C0BC0);
    }
    ppuVar4 = (undefined **)0x0;
  }
LAB_82587bcc:
  return (param_1 - ZEXT48(ppuVar4[2])) * 0xc + ZEXT48(*ppuVar4);
}

