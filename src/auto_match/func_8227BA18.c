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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_11c;
extern unsigned int *auStack_140;
extern unsigned int *auStack_ae;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_8227C0A8();
extern int fn_8227C1A8();
extern int fn_82672C20();
extern int fn_82F691F0();
extern unsigned int iStack_13c;
extern unsigned int lbl_820E975C;
extern unsigned int uStack_b0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8227BA18(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_140 [4];
  int iStack_13c;
  undefined4 auStack_11c [3];
  undefined1 auStack_110 [8];
  double dStack_108;
  undefined1 auStack_100 [8];
  double dStack_f8;
  undefined1 auStack_f0 [64];
  undefined2 uStack_b0;
  undefined1 auStack_ae [174];
  
  iVar1 = fn_8227C0A8();
  if (iVar1 != 0) {
    fn_8227C1A8(param_1);
  }
  if (*(int *)(param_1 + 0xa88) != 0) {
    uStack_b0 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_ae,0,0x3e);
  }
  iVar1 = *(int *)(param_1 + 0xa7c);
  if ((iVar1 != -1) && (*(int *)(param_1 + 0xa80) != -1)) {
    puVar2 = auStack_11c;
    lVar4 = 2;
    do {
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
      *puVar2 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    dVar5 = (double)(longlong)iVar1;
    fn_82273CD8(auStack_110,3);
    dVar6 = (double)(longlong)*(int *)(param_1 + 0xa80);
    dStack_108 = dVar5;
    fn_82273CD8(auStack_100,3);
    dStack_f8 = dVar6;
    puVar2 = (undefined4 *)fn_82279C58(auStack_140,param_1);
    fn_82672C20(*puVar2,0xffffffff821a8524,auStack_110,2);
    if (iStack_13c != 0) {
      fn_822315A0();
    }
    puVar3 = auStack_f0;
    lVar4 = 1;
    do {
      puVar3 = puVar3 + -0x10;
      fn_82273C88(puVar3);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0xa78) = 0;
  return;
}

