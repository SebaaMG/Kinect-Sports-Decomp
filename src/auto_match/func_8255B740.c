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
extern int fn_823AB478();
extern int fn_8255B938();
extern int fn_828EA5F8();
extern int fn_828EA600();
extern int fn_828EA610();
extern unsigned int lbl_832809F8;
extern unsigned int lbl_832809FC;
extern unsigned int lbl_83280A00;
extern unsigned int lbl_83280A50;


void fn_8255B740(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar3;
  uint uVar2;
  int iVar4;
  int iVar5;
  
  cVar3 = fn_828EA5F8();
  if ((((cVar3 != '\0') && (cVar3 = fn_828EA600(param_1), cVar3 == '\0')) &&
      (cVar3 = fn_828EA610(param_1), cVar3 == '\0')) && (*(char *)(param_1 + 0xd8) == '\0')) {
    uVar2 = fn_823AB478(param_1);
    iVar4 = 0;
    iVar1 = uVar2 * 100;
    iVar5 = 0;
    do {
      if (*(int *)(&lbl_83280A00 + iVar5 + iVar1) == 0) {
        iVar4 = iVar4 * 0xc + iVar1;
        *(undefined4 *)(&lbl_83280A00 + iVar4) = 1;
        *(undefined4 *)(&lbl_832809FC + iVar4) = param_2;
        *(int *)(&lbl_832809F8 + iVar4) = param_1;
        if (*(int *)(&lbl_83280A50 + iVar1) != 0) {
          return;
        }
        fn_8255B938(uVar2 & 0xff);
        return;
      }
      iVar5 = iVar5 + 0xc;
      iVar4 = iVar4 + 1;
    } while (iVar5 < 0x3c);
  }
  return;
}

