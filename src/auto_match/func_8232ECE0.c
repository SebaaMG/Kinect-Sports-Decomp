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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_822C9BF8();
extern int fn_822DBD60();
extern int fn_823B3808();
extern int fn_82D7E470();
extern unsigned int lbl_821B0908;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 *
fn_8232ECE0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar3;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [80];
  
  uStack_88 = CONCAT44(param_1,(((U64)(uStack_88) >> 32) & 0xFFFFFFFF));
  param_1[2] = param_3;
  param_1[3] = param_2;
  uStack_68 = uStack_88;
  uStack_60 = uStack_80;
  param_1[5] = 0;
  param_1[1] = 3;
  *param_1 = &lbl_821B0908;
  param_1[4] = 1;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x12] = param_4;
  cVar3 = fn_82D7E470(auStack_70);
  if (cVar3 == '\0') {
    uStack_80 = uStack_68;
    uStack_78 = uStack_60;
  }
  uVar1 = *(undefined4 *)(param_1[2] + 0x3c);
  uVar2 = fn_823B3808(auStack_50,auStack_90);
  fn_822C9BF8(uVar1,param_1 + 8,uVar2);
  fn_822DBD60(auStack_90);
  return param_1;
}

