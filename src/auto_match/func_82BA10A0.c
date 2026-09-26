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
extern int fn_82B7BD28();
extern int fn_82BAFE48();
extern int fn_82BC0088();
extern int fn_82BC0DD8();
extern int fn_82BC2580();
extern int fn_82BC2958();
extern int fn_82BC2E10();
extern int fn_82BC3EF8();
extern int fn_82BC5538();


void fn_82BA10A0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char cVar7;
  longlong lVar8;
  
  uVar4 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0x17,0);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x1c);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x20);
  puVar5 = (undefined4 *)fn_82B7BD28(uVar1,0x3c4);
  *puVar5 = uVar1;
  if (puVar5 + 1 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)fn_82BC3EF8(puVar5 + 1,*(undefined4 *)(param_1 + 0xc));
  }
  fn_82BC2958(piVar6,0,uVar2);
  fn_82BC2958(piVar6,1,uVar3);
  fn_82BC2958(piVar6,2,uVar4);
  lVar8 = 0;
  do {
    (**(code **)(*piVar6 + 0x58))(piVar6,2,lVar8,0);
    lVar8 = lVar8 + 1;
  } while ((int)lVar8 < 4);
  fn_82BC0DD8(uVar3,*(undefined4 *)(param_1 + 0x6c),piVar6);
  fn_82BC2E10(*(undefined4 *)(param_1 + 0x6c));
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x60))();
  fn_82BC5538(*(undefined4 *)(param_1 + 0xa8),piVar6);
  cVar7 = fn_82BC2580(piVar6);
  if (cVar7 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dece8,0xffffffff820deb50,0x4ae);
  }
  *(int **)(param_1 + 0x6c) = piVar6;
  puVar5 = (undefined4 *)
           fn_82BC0088(*(int *)(param_1 + 0x60),*(undefined4 *)(*(int *)(param_1 + 0x60) + 4))
  ;
  *puVar5 = piVar6;
  return;
}

