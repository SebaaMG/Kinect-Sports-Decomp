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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229E090();
extern int fn_8249ABC0();
extern int fn_8249D278();
extern int fn_824FC500();
extern int fn_82529320();
extern int fn_8265CA20();
extern int fn_82672C20();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82474FE8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  double dVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  
  iVar2 = lbl_8327F844;
  if (lbl_8327F844 != 0) {
    *(undefined4 *)(lbl_8327F844 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = 0;
  }
  iVar2 = fn_8249ABC0();
  puVar1 = *(undefined4 **)(iVar2 + 0xb0);
  if (puVar1 != (undefined4 *)0x0) {
    uStack_50 = 0;
    uStack_4c = 0;
    fn_82273CD8(&uStack_50,2);
    uStack_48 = 0;
    fn_82672C20(*puVar1,0xffffffff821aa9d4,&uStack_50,1);
    fn_82273C88(&uStack_50);
  }
  iVar2 = fn_8249ABC0();
  if (*(int *)(iVar2 + 0x88) == 0) {
    fn_8249ABC0();
    iVar2 = fn_8249ABC0();
    *(undefined4 *)(iVar2 + 0x88) = 1;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    if (*(int *)(iVar2 + 0xb4) != 0) {
      fn_8229E090(*(int *)(iVar2 + 0xb4),0,0);
      *(undefined4 *)(iVar2 + 0xb4) = 0;
    }
  }
  if (*(int *)(param_1 + 0x9c) != -1) {
    iVar2 = fn_8249ABC0();
    fn_8249D278(*(undefined4 *)(iVar2 + 0xec),*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  }
  piVar4 = (int *)(param_1 + 0x84);
  piVar5 = (int *)(param_1 + 0x54);
  lVar3 = 2;
  dVar6 = (double)lbl_821CC160;
  do {
    iVar2 = *piVar5;
    if (iVar2 != 0) {
      fn_824FC500(iVar2);
      fn_8265CA20(iVar2);
      piVar5[1] = (int)(float)dVar6;
      piVar5[2] = (int)(float)dVar6;
      *piVar5 = 0;
      piVar5[3] = (int)(float)dVar6;
      piVar5[5] = 0;
      piVar5[4] = (int)(float)dVar6;
    }
    if (*piVar4 != 0) {
      fn_82529320(*piVar4,0);
      piVar4[1] = (int)(float)dVar6;
      *piVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar5 = piVar5 + 6;
    piVar4 = piVar4 + 2;
  } while (lVar3 != 0);
  if (*(int *)(param_1 + 0x94) != 0) {
    fn_82529320(*(int *)(param_1 + 0x94),0);
    *(float *)(param_1 + 0x98) = (float)dVar6;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  return;
}

