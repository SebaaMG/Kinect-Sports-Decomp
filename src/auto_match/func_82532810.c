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
extern unsigned int *auStack_60;
extern int fn_8252D2F8();
extern int fn_8255FEE8();
extern unsigned int lbl_82192734;
extern unsigned int uStack_2c;


void fn_82532810(int param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  undefined1 auStack_60 [52];
  uint uStack_2c;
  
  fVar1 = lbl_82192734;
  if (*(char *)(param_1 + 0x197) != '\0') {
    fVar1 = *(float *)(param_1 + 0x198);
  }
  iVar2 = fn_8255FEE8((double)fVar1,param_2,auStack_60,*(undefined1 *)(param_1 + 0x194));
  if (*(char *)(param_1 + 0x195) != '\0') {
    uStack_2c = uStack_2c | 1;
  }
  if (*(char *)(param_1 + 0x196) != '\0') {
    uStack_2c = uStack_2c | 2;
  }
  fn_8252D2F8(param_1,*(undefined1 *)(iVar2 + 0x5b),auStack_60,iVar2 + 0x40);
  *(undefined1 *)(param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x197) = 0;
  *(undefined1 *)(param_1 + 0x195) = 0;
  *(undefined1 *)(param_1 + 0x196) = 0;
  return;
}

