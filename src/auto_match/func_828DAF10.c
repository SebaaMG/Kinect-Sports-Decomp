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
extern int fn_82381BC0();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_828BDDA0();
extern int fn_828BE158();
extern int fn_828D2DB8();
extern unsigned int lbl_82025900;
extern unsigned int lbl_82025908;


void fn_828DAF10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  int aiStack_40 [16];
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x210);
  aiStack_40[0] = *piVar1;
  if ((int *)aiStack_40[0] != piVar1) {
    do {
      uVar2 = *(undefined4 *)(aiStack_40[0] + 0x10);
      puVar4 = (undefined4 *)fn_8265C9E0(0x98);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        fn_828BDDA0();
        *puVar4 = &lbl_82025908;
        puVar4[0x14] = &lbl_82025900;
        puVar4[0x20] = 2;
      }
      fn_82886518(puVar4,0xffffffffffffffff,0xffffffffffffffff);
      uVar3 = fn_82897BD0(uVar2);
      fn_828BE158(*(undefined4 *)(param_1 + 8),puVar4,uVar3,0);
      fn_82381BC0(aiStack_40);
    } while (aiStack_40[0] != *(int *)(*(int *)(param_1 + 8) + 0x210));
  }
  fn_828D2DB8(param_1,9);
  return;
}

