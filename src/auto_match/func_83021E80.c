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
extern int fn_82A1DDC0();
extern int fn_82A1EFC0();
extern int fn_82FA5100();
extern int fn_82FA5190();
extern int fn_8303A930();
extern int fn_8303AA38();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC770;


undefined8 fn_83021E80(int param_1,int param_2)

{
  float fVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  float afStack_30 [12];
  
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_82FA5190(lbl_831BC770);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  uVar3 = 0;
  for (uVar4 = *(uint *)(param_1 + 0x20); uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
    uVar3 = uVar3 + 1;
  }
  lVar5 = (uVar3 & 0xfffffff) << 4;
  uVar3 = fn_82FA5100(lbl_831BC770,lVar5,1);
  *(int *)(param_1 + 0x28) = (int)uVar3;
  if ((uVar3 & 0xffffffff) == 0) {
    uVar2 = 0x34;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x60);
    *(float *)(param_1 + 0x14) = fVar1;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 100);
    afStack_30[0] = lbl_821AAD20;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x68);
    *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x6c);
    uVar3 = fn_8303A930((double)fVar1,uVar3,*(undefined1 *)(param_1 + 0x24),afStack_30);
    *(char *)(param_1 + 0x25) = (char)uVar3;
    if (7 < *(uint *)(param_1 + 0x1c)) {
      if ((uVar3 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(*(undefined4 *)(param_1 + 0x28),0,lVar5);
      }
      fn_8303AA38((double)afStack_30[0],uVar3,param_1 + 4);
    }
    fn_82A1DDC0(*(undefined4 *)(param_1 + 0x28),param_2,lVar5);
    uVar2 = 1;
  }
  return uVar2;
}

