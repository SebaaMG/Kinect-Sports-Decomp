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
extern int fn_82681898();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82739680();
extern unsigned int lbl_8200E890;
extern unsigned int lbl_82011DEC;
extern unsigned int lbl_82011DF0;


void fn_82739A30(int param_1)

{
  int iVar1;
  char cVar3;
  uint uVar2;
  int iVar4;
  int iVar5;
  double dVar6;
  
  cVar3 = fn_82695468(param_1,0x23);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eeb4,0,0);
  }
  else {
    iVar4 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = 0;
    }
    uVar2 = fn_82739680(*(undefined4 *)(iVar4 + 0x54));
    iVar4 = *(int *)(iVar4 + 0x58);
    if (iVar4 < *(int *)(&lbl_82011DF0 + (uVar2 & 0xff) * 0x30)) {
LAB_82739abc:
      dVar6 = (double)(longlong)(iVar4 + 1);
    }
    else {
      iVar5 = 1;
      do {
        iVar1 = ((uVar2 & 0xff) * 0xc + iVar5) * 4;
        if (iVar4 < *(int *)(&lbl_82011DF0 + iVar1)) {
          iVar4 = iVar4 - *(int *)(&lbl_82011DEC + iVar1);
          goto LAB_82739abc;
        }
        iVar5 = iVar5 + 1;
        dVar6 = lbl_8200E890;
      } while (iVar5 < 0xc);
    }
    fn_82681898(dVar6,*(undefined4 *)(param_1 + 4));
  }
  return;
}

