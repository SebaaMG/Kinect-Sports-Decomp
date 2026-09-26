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
extern unsigned int *auStack_3c;
extern int fn_82AB15D0();
extern int fn_82B9C870();
extern int fn_82B9CE38();
extern int fn_82BA0C40();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC5580();
extern int fn_82BC8C78();
extern unsigned int lbl_820DEB14;
extern unsigned int uStack_40;


void fn_82BA2408(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  longlong lVar5;
  uint uStack_40;
  uint auStack_3c [15];
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = (**(code **)(**(int **)(iVar2 + 0x5d0) + 0x1c))();
  iVar2 = fn_82B9C870(*(undefined4 *)(param_1 + 0x10),0,uVar1,0xffffffff82b7c800,iVar2);
  if (iVar2 == 1) {
    iVar2 = fn_82B9CE38(*(undefined4 *)(param_1 + 0x10),&uStack_40,0xffffffff82b7c800,
                          *(undefined4 *)(param_1 + 0xc));
    if (iVar2 != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dedcc,0xffffffff820deb50,0x93c);
    }
    auStack_3c[0] = uStack_40 & 0xffff | 0x50000;
    fn_82BC8C78(param_1,uStack_40,auStack_3c,lbl_820DEB14,*(undefined4 *)(param_1 + 0xa4),1,0)
    ;
    piVar3 = (int *)fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
    lVar5 = 0;
    piVar3[0x14] = 6;
    piVar3[0xe] = 0;
    (**(code **)(*piVar3 + 0x54))(piVar3,0,0,1);
    (**(code **)(*piVar3 + 0x54))(piVar3,0,1,0);
    (**(code **)(*piVar3 + 0x54))(piVar3,0,2,1);
    (**(code **)(*piVar3 + 0x54))(piVar3,0,3,1);
    piVar3[0x15] = 0x19;
    piVar3[0xf] = uStack_40;
    do {
      (**(code **)(*piVar3 + 0x58))(piVar3,1,lVar5,0);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < 4);
    fn_82BA0C40(param_1,piVar3);
    fn_82BC5580(*(undefined4 *)(param_1 + 0xa8),piVar3);
    cVar4 = fn_82BC2580(piVar3);
    if (cVar4 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820decd0,0xffffffff820deb50,0x94e);
    }
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  return;
}

