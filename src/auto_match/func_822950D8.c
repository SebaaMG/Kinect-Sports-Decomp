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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_822959F8();
extern int fn_82297868();
extern int fn_82297DB0();


undefined8 fn_822950D8(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  if (((*(uint *)(param_2 + 0x40) & 2) == 0) && (uVar5 = **(uint **)(param_2 + 0x24), uVar5 != 0)) {
    if (uVar5 <= *(uint *)(param_2 + 0x3c)) {
      uVar5 = *(uint *)(param_2 + 0x3c);
    }
    iVar1 = **(int **)(param_2 + 0x14);
    fn_82297DB0(auStack_80,0,0);
    fn_82297868(auStack_80,iVar1,(int)(uVar5 - iVar1) >> 1);
    fn_822959F8(param_1,auStack_80);
    puVar4 = auStack_80;
  }
  else {
    if ((*(uint *)(param_2 + 0x40) & 4) == 0) {
      iVar1 = **(int **)(param_2 + 0x20);
      if (iVar1 != 0) {
        iVar2 = **(int **)(param_2 + 0x30);
        iVar3 = **(int **)(param_2 + 0x10);
        fn_82297DB0(auStack_60,0,0);
        fn_82297868(auStack_60,iVar3,(iVar2 * 2 - iVar3) + iVar1 >> 1);
        fn_822959F8(param_1,auStack_60);
        puVar4 = auStack_60;
        goto LAB_822951e4;
      }
    }
    fn_82297DB0(auStack_40,0,0);
    fn_822959F8(param_1,auStack_40);
    puVar4 = auStack_40;
  }
LAB_822951e4:
  fn_82297DB0(puVar4,1,0);
  return param_1;
}

