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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_60;


void fn_82294200(int param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 uStack_60;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  char cStack_38;
  undefined1 auStack_30 [48];
  
  iVar3 = param_2 * 0x1c + param_1;
  if (*(int *)(iVar3 + 0x40) != (int)param_3) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    puVar2 = (undefined4 *)((int)&uStack_60 + 4);
    lVar5 = 2;
    do {
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
      *puVar2 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_82273CD8(auStack_50,3);
    uStack_60 = (longlong)(param_2 + 1);
    dStack_48 = (double)uStack_60;
    fn_82273CD8(auStack_40,2);
    cStack_38 = '\x01' - (param_3 == 0);
    fn_82672C20(*puVar1,0xffffffff821ab978,auStack_50,2);
    puVar4 = auStack_30;
    lVar5 = 1;
    do {
      puVar4 = puVar4 + -0x10;
      fn_82273C88(puVar4);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
    *(int *)(iVar3 + 0x40) = (int)param_3;
  }
  return;
}

