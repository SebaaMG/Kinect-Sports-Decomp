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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8225F670();
extern int fn_8225F748();
extern int fn_825122A8();
extern int fn_82A1C048();
extern int fn_82A1EFC0();
extern int fn_82E1CAD0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;


void fn_8225F970(void)

{
  char *pcVar1;
  char cVar3;
  int iVar2;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [112];
  
  pcVar1 = (char *)fn_8225F670();
  iVar2 = lbl_83265988;
  if (*pcVar1 == '\0') {
    iVar2 = fn_8225F670();
    *(undefined1 *)(iVar2 + 1) = 1;
    iVar2 = fn_8225F670();
    if (*(char *)(iVar2 + 2) != '\0') {
      fn_8225F670();
      fn_8225F748();
    }
  }
  else if ((((lbl_832659CD != '\0') && (lbl_83265988 != 0)) &&
           (*(char *)(lbl_83265988 + 0xd8) == '\0')) &&
          (cVar3 = fn_82E1CAD0(1), cVar3 != '\0')) {
    auStack_80[0] = 0;
    fn_825122A8(iVar2,auStack_80);
    fn_82A1C048();
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(auStack_70,0,0x20);
  }
  return;
}

