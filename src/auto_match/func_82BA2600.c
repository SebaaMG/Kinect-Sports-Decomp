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
extern unsigned int fStack_40;
extern int fn_82AB15D0();
extern int fn_82B9D7D8();
extern int fn_82B9EBF0();
extern int fn_82BA0C40();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC2958();
extern int fn_82BC34D8();
extern int fn_82BC5628();
extern unsigned int lbl_821AAD20;


void fn_82BA2600(int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  double dVar7;
  float fStack_40;
  float afStack_3c [15];
  
  bVar2 = false;
  lVar6 = 0;
  fStack_40 = lbl_821AAD20;
  afStack_3c[0] = lbl_821AAD20;
  do {
    iVar4 = *(int *)(param_1 + 0xc);
    uVar3 = (**(code **)(**(int **)(iVar4 + 0x5d0) + 0x1c))();
    iVar4 = fn_82B9EBF0(*(undefined4 *)(param_1 + 0x10),lVar6,uVar3,0xffffffff82b7c800,iVar4);
    lVar6 = lVar6 + 1;
    bVar2 = (bool)(iVar4 == 1 | bVar2);
  } while ((int)lVar6 < 5);
  if (((*(char *)(param_1 + 0x7e) != '\0') && (*(char *)(*(int *)(param_2 + 4) + 3) != '\x03')) &&
     (bVar2)) {
    fn_82B9D7D8(*(undefined4 *)(param_1 + 0x10),0,afStack_3c,0xffffffff82b7c800,
                  *(undefined4 *)(param_1 + 0xc));
    fn_82B9D7D8(*(undefined4 *)(param_1 + 0x10),0,&fStack_40,0xffffffff82b7c800,
                  *(undefined4 *)(param_1 + 0xc));
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x20);
    uVar3 = fn_82BC24F0(0x17,*(undefined4 *)(param_1 + 0xc));
    fn_82BC2958(uVar3,0,uVar1);
    fn_82BC2958(uVar3,1,uVar1);
    dVar7 = (double)fStack_40;
    fn_82BC34D8(dVar7,dVar7,dVar7,uVar3,param_1,2);
    fn_82BA0C40(param_1,uVar3);
    fn_82BC5628(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x78),uVar3);
    cVar5 = fn_82BC2580(uVar3);
    if (cVar5 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dedf4,0xffffffff820deb50,0x975);
    }
    uVar3 = fn_82BC24F0(0x19,*(undefined4 *)(param_1 + 0xc));
    fn_82BC2958(uVar3,0,uVar1);
    fn_82BC2958(uVar3,1,uVar1);
    dVar7 = (double)afStack_3c[0];
    fn_82BC34D8(dVar7,dVar7,dVar7,uVar3,param_1,2);
    fn_82BA0C40(param_1,uVar3);
    fn_82BC5628(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x78),uVar3);
    cVar5 = fn_82BC2580(uVar3);
    if (cVar5 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dede4,0xffffffff820deb50,0x97d);
    }
  }
  return;
}

