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
extern int fn_82AB15D0();
extern int fn_82BA0C40();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC34D8();
extern int fn_82BC5538();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82BA1980(int param_1)

{
  int iVar1;
  char cVar2;
  double dVar3;
  
  iVar1 = fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0x17;
  dVar3 = (double)lbl_821AAD20;
  fn_82BC34D8(dVar3,dVar3,dVar3,(double)lbl_82002AE0,iVar1,param_1,1);
  fn_82BA0C40(param_1,iVar1);
  fn_82BC5538(*(undefined4 *)(param_1 + 0xa8),iVar1);
  cVar2 = fn_82BC2580(iVar1);
  if (cVar2 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820decd0,0xffffffff820deb50,0x5a5);
  }
  return;
}

