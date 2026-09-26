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
extern unsigned int lbl_82011DF0;


void fn_82739960(int param_1)

{
  char cVar2;
  ulonglong uVar1;
  longlong lVar3;
  int iVar4;
  double dVar5;
  
  cVar2 = fn_82695468(param_1,0x23);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eeb4,0,0);
  }
  else {
    iVar4 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = 0;
    }
    lVar3 = 0;
    uVar1 = fn_82739680(*(undefined4 *)(iVar4 + 0x54));
    do {
      if (*(int *)(iVar4 + 0x58) <
          *(int *)(&lbl_82011DF0 + (int)(((uVar1 & 0xff) * 0xc + lVar3 & 0xffffffff) << 2))) {
        dVar5 = (double)(longlong)(int)lVar3;
        break;
      }
      lVar3 = lVar3 + 1;
      dVar5 = lbl_8200E890;
    } while ((int)lVar3 < 0xc);
    fn_82681898(dVar5,*(undefined4 *)(param_1 + 4));
  }
  return;
}

