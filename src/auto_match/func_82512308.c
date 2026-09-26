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
extern int fn_823AB470();
extern int fn_82A1C0C8();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659B0;


void fn_82512308(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar5;
  int iVar6;
  undefined8 uVar4;
  undefined8 uVar7;
  int *piVar8;
  
  piVar8 = &lbl_83265988;
  uVar5 = fn_823AB470(lbl_83265988);
  if ((uVar5 != 0) && (uVar5 != 1)) {
    if (2 < uVar5) {
      return;
    }
    bVar2 = true;
    bVar3 = false;
    uVar5 = 1;
    if (1 < lbl_832659B0) {
      do {
        piVar8 = piVar8 + 1;
        iVar1 = *piVar8;
        if (bVar2) {
          iVar6 = fn_823AB470(iVar1);
          bVar2 = true;
          if (iVar6 != 2) goto LAB_82512374;
        }
        else {
LAB_82512374:
          bVar2 = false;
        }
        if ((bVar3) || (bVar3 = false, *(char *)(iVar1 + 0xd8) != '\0')) {
          bVar3 = true;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < lbl_832659B0);
    }
    if (bVar2) {
      return;
    }
    if (!bVar3) {
      uVar7 = 0x480000;
      uVar4 = 1;
      goto LAB_825123d8;
    }
  }
  uVar4 = 4;
  uVar7 = 0x80002;
LAB_825123d8:
  fn_82A1C0C8(uVar4,uVar7);
  return;
}

