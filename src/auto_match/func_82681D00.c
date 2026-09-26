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
extern unsigned int *auStack_20;
extern int fn_82681838();
extern int fn_82681898();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82694738();
extern int fn_826959C8();
extern int fn_82696408();
extern int fn_82696BC8();


void fn_82681D00(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 uVar5;
  uint auStack_20 [2];
  
  uVar2 = *(uint *)(param_2 + 4);
  uVar4 = uVar2 & 0x8f;
  if (8 < uVar4) {
    return;
  }
  if (uVar4 == 1) {
    fn_826959C8(param_3);
    uVar5 = 1;
LAB_82681d5c:
    *param_3 = uVar5;
    return;
  }
  if (uVar4 == 2) {
    uVar1 = *(undefined1 *)(param_2 + 8);
    fn_826959C8(param_3);
    uVar5 = 2;
    param_3[4] = uVar1;
    goto LAB_82681d5c;
  }
  if (uVar4 == 3) {
    fn_82681898(*(undefined8 *)(param_2 + 8),param_3);
    return;
  }
  if (uVar4 == 4) {
    if ((uVar2 >> 6 & 1) == 0) {
      uVar2 = fn_82694700((ulonglong)*(uint *)(param_1 + 0x9e4) + 0x254,
                           *(undefined4 *)(param_2 + 8));
    }
    else {
      uVar2 = *(uint *)(param_2 + 8);
    }
  }
  else {
    if (uVar4 != 5) {
      if ((uVar4 == 6) || (uVar4 == 7)) {
        lVar3 = (ulonglong)*(uint *)(param_2 + 8) - 0x10;
        if ((ulonglong)*(uint *)(param_2 + 8) == 0) {
          lVar3 = 0;
        }
        fn_82696BC8(param_3,lVar3);
        return;
      }
      if (uVar4 != 0) {
        fn_82696408(param_3,*(undefined4 *)(param_2 + 8));
        return;
      }
      fn_826959C8(param_3);
      uVar5 = 0;
      goto LAB_82681d5c;
    }
    if ((uVar2 >> 6 & 1) != 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
      auStack_20[0] = uVar2;
      fn_82681838(param_3,auStack_20);
      lVar3 = (ulonglong)*(uint *)(uVar2 + 8) - 1;
      *(int *)(uVar2 + 8) = (int)lVar3;
      goto joined_r0x82681de8;
    }
    uVar2 = fn_82694738((ulonglong)*(uint *)(param_1 + 0x9e4) + 0x254,
                              *(undefined4 *)(param_2 + 8));
  }
  *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
  auStack_20[0] = uVar2;
  fn_82681838(param_3,auStack_20);
  lVar3 = (ulonglong)*(uint *)(uVar2 + 8) - 1;
  *(int *)(uVar2 + 8) = (int)lVar3;
joined_r0x82681de8:
  if (lVar3 != 0) {
    return;
  }
  fn_826944C8(uVar2);
  return;
}

