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
extern unsigned int *auStack_60;
extern int fn_82BA0AC8();
extern int fn_82BAFE48();
extern int fn_82BC0618();
extern int fn_82BC06D0();
extern int fn_82BC24F0();
extern int fn_82BC2958();
extern int fn_82BC5538();
extern unsigned int iStack_50;


void fn_82BA0B10(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar4;
  undefined8 uVar3;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_60 [16];
  int iStack_50;
  
  uVar2 = fn_82BA0AC8();
  *(undefined1 *)(param_1 + 0x819) = 1;
  fn_82BC06D0(auStack_60,*(undefined4 *)(*(int *)(param_1 + 0xac) + 4));
  while( true ) {
    iVar1 = iStack_50;
    if (iStack_50 == 0) break;
    iVar6 = 0;
    piVar5 = (int *)(iStack_50 + 0x20);
    do {
      iVar7 = (iVar6 == 0 ^ 1) + 0x15;
      if ((*piVar5 == iVar7) && (*(int *)(iVar1 + 0xc) == 0)) {
        piVar4 = (int *)fn_82BC24F0(0x26,*(undefined4 *)(param_1 + 0xc));
        fn_82BC2958(piVar4,0,iVar1);
        fn_82BC2958(piVar4,1,uVar2);
        lVar8 = 0;
        do {
          (**(code **)(*piVar4 + 0x58))(piVar4,1,lVar8,0);
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < 4);
        fn_82BC2958(piVar4,2,iVar1);
        uVar3 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),iVar7,1);
        fn_82BC2958(piVar4,3,uVar3);
        fn_82BC5538(*(undefined4 *)(param_1 + 0xa4),piVar4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    fn_82BC0618(auStack_60);
  }
  return;
}

