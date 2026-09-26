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
extern int fn_82BC5AC0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_40;


void fn_82BA2EC0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  undefined4 uStack_40;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar2 = fn_82BC5AC0(*(undefined4 *)(param_1 + 0xa8));
    if (iVar2 != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded2c,0xffffffff820deb50,0xa2c);
    }
    iVar5 = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0xa8) + 0x3c);
    for (uVar4 = 1; uVar4 <= *(uint *)(iVar2 + 4); uVar4 = uVar4 + 1) {
      uStack_40 = *(undefined4 *)(*(int *)(iVar2 + 8) + iVar5);
      iVar5 = iVar5 + 4;
    }
    iVar2 = fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(iVar2 + 0x50) = 5;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    dVar6 = (double)lbl_821AAD20;
    fn_82BC34D8(dVar6,dVar6,dVar6,iVar2,param_1,1);
    fn_82BA0C40(param_1,iVar2);
    fn_82BC5538(uStack_40,iVar2);
    cVar3 = fn_82BC2580(iVar2);
    if (cVar3 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820decd0,0xffffffff820deb50,0xa38);
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xa8) + 0x1c);
  iVar5 = *(int *)(iVar2 + 8);
  while( true ) {
    iVar1 = iVar5;
    if (iVar1 == 0) {
      return;
    }
    if (((*(uint *)(iVar2 + 0xe4) & 1) != 0) && (*(int *)(iVar2 + 0x50) == 5)) break;
    iVar5 = *(int *)(iVar1 + 8);
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x74) = iVar2;
  return;
}

