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
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_83084210();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82141F30;
extern unsigned int uStack_20;
extern unsigned int uStack_30;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_7c;
extern unsigned int uStack_8c;


void fn_82DB3300(int param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined1 auStack_a0 [16];
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_30;
  undefined4 uStack_20;
  
  uStack_8c = (undefined4)param_2;
  ppuStack_90 = &lbl_82141F30;
  if (param_3 == 0) {
    iStack_88 = 0;
    iStack_84 = 0;
  }
  else {
    iStack_88 = param_3 + 0x14;
    iStack_84 = param_3 + 0x10;
  }
  uStack_30 = 0;
  uStack_20 = 0;
  puStack_80 = auStack_70;
  uStack_5c = 0xffffffff;
  uStack_50 = 0xffffffff;
  uStack_60 = lbl_82002AE0;
  uStack_7c = param_4;
  fn_83084210(auStack_a0,*(undefined4 *)(param_1 + 0x10),param_2,param_2 + 0x10,&ppuStack_90);
  return;
}

