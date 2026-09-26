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
extern unsigned int *auStack_11c;
extern unsigned int *auStack_120;
extern unsigned int *auStack_150;
extern unsigned int *auStack_90;
extern unsigned int *auStack_f0;
extern unsigned int fStack_80;
extern unsigned int fStack_e0;
extern int fn_82D378E8();
extern int fn_83084210();
extern int fn_83096D00();
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_134;
extern unsigned int iStack_138;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82141F1C;
extern unsigned int lbl_82141F30;
extern unsigned int uStack_100;
extern unsigned int uStack_110;
extern unsigned int uStack_12c;
extern unsigned int uStack_13c;
extern unsigned int uStack_40;
extern unsigned int uStack_50;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_a0;
extern unsigned int uStack_b0;
extern unsigned int uStack_d0;
extern unsigned int uStack_dc;


void fn_82DB0A00(int param_1,longlong param_2,int param_3,undefined4 param_4)

{
  double dVar1;
  undefined1 auStack_150 [16];
  undefined **ppuStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined1 *puStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [12];
  undefined4 uStack_110;
  int iStack_10c;
  int iStack_108;
  undefined1 *puStack_104;
  undefined4 uStack_100;
  undefined1 auStack_f0 [16];
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_b0;
  undefined4 uStack_a0;
  undefined1 auStack_90 [16];
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_50;
  undefined4 uStack_40;
  
  fn_83096D00(auStack_120);
  uStack_110 = (undefined4)param_2;
  if (param_3 == 0) {
    iStack_10c = 0;
    iStack_108 = 0;
  }
  else {
    iStack_10c = param_3 + 0x14;
    iStack_108 = param_3 + 0x10;
  }
  uStack_b0 = 0;
  uStack_a0 = 0;
  puStack_104 = auStack_f0;
  uStack_dc = 0xffffffff;
  uStack_d0 = 0xffffffff;
  dVar1 = (double)lbl_82002AE0;
  fStack_e0 = lbl_82002AE0;
  uStack_100 = param_4;
  if (*(int *)(param_1 + 0x10) != 0) {
    ppuStack_140 = &lbl_82141F30;
    if (param_3 == 0) {
      iStack_138 = 0;
      iStack_134 = 0;
    }
    else {
      iStack_138 = param_3 + 0x14;
      iStack_134 = param_3 + 0x10;
    }
    puStack_130 = auStack_90;
    fStack_80 = lbl_82002AE0;
    uStack_7c = 0xffffffff;
    uStack_50 = 0;
    uStack_70 = 0xffffffff;
    uStack_40 = 0;
    uStack_13c = uStack_110;
    uStack_12c = param_4;
    fn_83084210(auStack_150,*(int *)(param_1 + 0x10),param_2,param_2 + 0x10,&ppuStack_140);
    ppuStack_140 = &lbl_82141F1C;
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    fn_82D378E8(dVar1,*(undefined4 *)(param_1 + 0xc),param_2,param_2 + 0x10,auStack_11c);
  }
  return;
}

