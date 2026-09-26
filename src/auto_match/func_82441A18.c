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
extern int fn_82441298();
extern int fn_824BF8A8();
extern unsigned int lbl_82191C00;
extern unsigned int uStack_3c;


void fn_82441A18(uint *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  char *pcStack_40;
  undefined4 uStack_3c;
  
  bVar3 = true;
  if (((*param_1 & 0x80000) != 0) || ((*param_1 & 0x2000) != 0)) {
    param_1[7] = 1;
  }
  puVar1 = (&lbl_82191C00)[param_1[4]];
  fn_82441298(param_1,*(undefined4 *)(puVar1 + 0x2c),param_2);
  if ((*param_1 & 0x100000) != 0) {
    uStack_3c = 7;
    pcStack_40 = "longjump_video";
    fn_824BF8A8(param_2,&pcStack_40);
  }
  if ((*param_1 & 8) != 0) {
    pcStack_40 = *(char **)(puVar1 + 0x28);
    uStack_3c = 7;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  if (param_1[6] != 0) {
    pcStack_40 = *(char **)(puVar1 + 0x28);
    uStack_3c = 6;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  uVar2 = *param_1 >> 9 & 1;
  if ((uVar2 == 0) || (param_1[10] != 0)) {
    bVar3 = false;
  }
  param_1[10] = uVar2;
  if ((*param_1 & 2) != 0) {
    pcStack_40 = *(char **)(puVar1 + 0x30);
    uStack_3c = 7;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  if (bVar3) {
    pcStack_40 = *(char **)(puVar1 + 0x34);
    uStack_3c = 7;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  if ((*param_1 & 0x2000) != 0) {
    pcStack_40 = *(char **)(puVar1 + 0x30);
    uStack_3c = 9;
    fn_824BF8A8(param_2,&pcStack_40);
    pcStack_40 = *(char **)(puVar1 + 0x34);
    uStack_3c = 9;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  if ((*param_1 & 0x80000) != 0) {
    pcStack_40 = *(char **)(puVar1 + 0x30);
    uStack_3c = 8;
    fn_824BF8A8(param_2,&pcStack_40);
    pcStack_40 = *(char **)(puVar1 + 0x34);
    uStack_3c = 8;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  return;
}

