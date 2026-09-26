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
extern int fn_82A8BA40();
extern int fn_82A8BAA0();
extern int fn_82F691F0();
extern unsigned int lbl_82027070;


void fn_82A8BB10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 1;
  iVar3 = param_1 + 4;
  do {
    fn_82A8BAA0(iVar3);
    lVar4 = lVar4 + -1;
    iVar3 = iVar3 + 0x2bec;
  } while (-1 < lVar4);
  fn_82A8BA40(param_1 + 0x57dc);
  *(undefined4 *)(param_1 + 0x5920) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x5924);
  *(undefined4 *)(param_1 + 0x5924) = 0;
  lVar4 = 5;
  do {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    *puVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x5988) = param_2;
  *(undefined4 *)(param_1 + 0x598c) = param_3;
  *(undefined4 *)(param_1 + 0x5964) = 0;
  *(undefined4 *)(param_1 + 0x5974) = 0;
  *(undefined4 *)(param_1 + 0x5978) = 0;
  uVar1 = lbl_82027070;
  *(undefined4 *)(param_1 + 0x597c) = 0;
  *(undefined4 *)(param_1 + 0x5968) = uVar1;
  *(undefined4 *)(param_1 + 0x5980) = 0;
  *(undefined4 *)(param_1 + 0x5984) = 0;
  *(undefined4 *)(param_1 + 0x5970) = 0;
  *(undefined4 *)(param_1 + 0x596c) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1,0,0x2bec);
}

