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
extern int fn_8265CA20();
extern int fn_828150C8();
extern int fn_82822368();
extern int fn_828223C8();
extern int fn_828253D0();
extern int fn_82825ED8();
extern int fn_82826050();
extern int fn_828260B8();
extern int fn_828282D8();
extern int fn_82829B70();
extern int fn_828351A0();
extern int fn_8286D2C8();
extern int fn_82F641F8();


void fn_82825428(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int aiStack_30 [12];
  
  while( true ) {
    fn_828223C8(param_1 + 0x2fc,aiStack_30);
    if (aiStack_30[0] == 0) break;
    fn_82822368();
    fn_82829B70(aiStack_30[0]);
    fn_828282D8(aiStack_30[0]);
    if (aiStack_30[0] != 0) {
      fn_82F641F8();
    }
  }
  while( true ) {
    fn_828223C8(param_1 + 0x2f4,aiStack_30);
    if (aiStack_30[0] == 0) break;
    fn_82822368();
    if (*(int *)(aiStack_30[0] + 0x28) != 0) {
      fn_82826050(*(int *)(aiStack_30[0] + 0x28),1);
    }
    if (*(int *)(aiStack_30[0] + 8) != 0) {
      fn_82F641F8();
    }
    if (aiStack_30[0] != 0) {
      fn_82F641F8(aiStack_30[0]);
    }
  }
  if (*(int *)(param_1 + 0x304) != 0) {
    fn_828260B8(*(int *)(param_1 + 0x304),1);
  }
  if (*(int *)(param_1 + 0x2f0) != 0) {
    fn_828351A0(*(int *)(param_1 + 0x2f0),1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2ec);
  if (puVar1 != (undefined4 *)0x0) {
    fn_8286D2C8(puVar1);
    fn_8265CA20(*puVar1);
    fn_8265CA20(puVar1);
  }
  if (*(int *)(param_1 + 0x3c4) != 0) {
    fn_82F641F8();
  }
  piVar2 = *(int **)(param_1 + 0x3bc);
  uVar3 = 0;
  if (piVar2[1] - *piVar2 >> 2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(*piVar2 + iVar4) != 0) {
        fn_82F641F8();
      }
      piVar2 = *(int **)(param_1 + 0x3bc);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < (uint)(piVar2[1] - *piVar2 >> 2));
  }
  if (piVar2 != (int *)0x0) {
    fn_82825ED8(piVar2,1);
  }
  iVar4 = *(int *)(param_1 + 0x388);
  if (iVar4 != 0) {
    fn_828150C8(iVar4);
    fn_8265CA20(iVar4);
  }
  fn_828253D0(param_1);
  if (*(int *)(param_1 + 0x2e4) != 0) {
    fn_82F641F8();
  }
  fn_82F641F8(param_1);
  return;
}

