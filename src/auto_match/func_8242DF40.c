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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_220;
extern unsigned int *auStack_420;
extern unsigned int *auStack_450;
extern unsigned int *auStack_460;
extern int fn_822315A0();
extern int fn_8229EC50();
extern int fn_8229ED70();
extern int fn_8229EE18();
extern int fn_82358FD8();
extern int fn_823599A8();
extern int fn_82359C18();
extern int fn_8242C1B8();
extern int fn_8242E3E0();
extern int fn_824325E8();
extern int fn_824F3D58();
extern int fn_82522588();
extern unsigned int iStack_44c;
extern unsigned int iStack_454;
extern unsigned int lbl_821B9094;
extern unsigned int uStack_43c;


void fn_8242DF40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 auStack_460 [2];
  undefined4 *puStack_458;
  int iStack_454;
  undefined1 auStack_450 [4];
  int iStack_44c;
  undefined **ppuStack_440;
  undefined8 uStack_43c;
  undefined ***pppuStack_430;
  undefined1 auStack_420 [512];
  undefined1 auStack_220 [544];
  
  for (uVar5 = (ulonglong)*(uint *)(param_1 + 0x30);
      (uVar5 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x34); uVar5 = uVar5 + 8) {
    iVar3 = *(int *)(param_1 + 0x174);
    puVar2 = (undefined4 *)fn_82522588(auStack_450,uVar5);
    fn_824325E8(*puVar2,*(undefined4 *)(iVar3 + 0x170));
    if (iStack_44c != 0) {
      fn_822315A0();
    }
  }
  fn_82358FD8(param_1,auStack_420,0x100,0xffffffff821aadb8);
  if ((*(int *)(*(int *)(param_1 + 0x174) + 0x120) == 0) ||
     (iVar3 = fn_8242E3E0(param_1), iVar3 != 0)) {
    fn_8229EC50(*(undefined4 *)(*(int *)(param_1 + 0x94) + 0x5c),auStack_420);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x174);
    if (*(int *)(iVar3 + 0x124) == 0) {
      if (*(int *)(iVar3 + 0x128) == 0) {
        fn_8229EE18(*(undefined4 *)(*(int *)(param_1 + 0x94) + 0x5c),auStack_420,iVar3 + 0x130
                         );
        goto LAB_8242e054;
      }
      uVar4 = 0xffffffff821b8e58;
    }
    else {
      uVar4 = 0xffffffff821b8e3c;
    }
    fn_82358FD8(param_1,auStack_220,0x100,uVar4);
    fn_8229ED70(*(undefined4 *)(*(int *)(param_1 + 0x94) + 0x5c),auStack_420,auStack_220,
                    (ulonglong)*(uint *)(param_1 + 0x174) + 0x130);
  }
LAB_8242e054:
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x5c) + 0x1d4) == -1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
    iVar3 = *(int *)(*(int *)(iVar3 + 0x1d4) * 4 + *(int *)(iVar3 + 0x1c4));
  }
  if (*(int *)(*(int *)(iVar3 + 0x40) + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(param_1);
  }
  if (1 < (uint)(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 3)) {
    auStack_460[0] = 0;
    pppuStack_430 = &ppuStack_440;
    puStack_458 = auStack_460;
    ppuStack_440 = &lbl_821B9094;
    uStack_43c = CONCAT44(puStack_458,param_1);
    iStack_454 = param_1;
    fn_823599A8(param_1,&ppuStack_440);
    fn_82359C18(&ppuStack_440);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
  iVar1 = **(int **)(iVar3 + 0x1e0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1d0) == 0)) {
    *(undefined4 *)(iVar1 + 0x1d0) = 1;
  }
  *(undefined4 *)(*(int *)(iVar3 + 0x1e0) + 0x2c) = 0;
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x9c) + 0xd54) + 0x20) != 0) {
    fn_824F3D58();
  }
  return;
}

