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
extern unsigned int *auStack_48;
extern int fn_82F72B00();
extern int fn_82F72BA8();
extern int fn_82F72DD0();
extern int fn_82F73228();
extern int fn_82F735D8();
extern int fn_82F78540();
extern unsigned int *lbl_832635B4;
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined4 * fn_82F73748(undefined4 *param_1)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [64];
  
  *(undefined1 *)(param_1 + 1) = 0;
  bVar2 = true;
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = uVar1 & 0xff00ffff;
  while( true ) {
    if ((uVar1 & 0xff000000) != 0) {
      return param_1;
    }
    if (*lbl_832635C0 == '@') {
      return param_1;
    }
    if (*lbl_832635C0 == 'Z') {
      return param_1;
    }
    if (bVar2) {
      bVar2 = false;
    }
    else {
      fn_82F735D8(param_1,0x2c);
    }
    pcVar3 = lbl_832635C0;
    if ((longlong)*lbl_832635C0 == 0) break;
    lVar5 = (longlong)*lbl_832635C0 + -0x30;
    if ((lVar5 < 0) || (9 < (int)lVar5)) {
      uStack_50 = 0;
      uStack_4c = uStack_4c & 0xffff;
      fn_82F78540(auStack_48,&uStack_50);
      if ((1 < (int)lbl_832635C0 - (int)pcVar3) && (*lbl_832635B4 != 9)) {
        fn_82F72B00(lbl_832635B4,auStack_48);
      }
      fn_82F73228(param_1,auStack_48);
      if (lbl_832635C0 == pcVar3) {
        *(undefined1 *)((int)param_1 + 5) = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 2;
      }
    }
    else {
      lbl_832635C0 = lbl_832635C0 + 1;
      uVar4 = fn_82F72BA8(auStack_40,lbl_832635B4);
      fn_82F73228(param_1,uVar4);
    }
    uVar1 = param_1[1];
  }
  fn_82F72DD0(param_1,1);
  return param_1;
}

