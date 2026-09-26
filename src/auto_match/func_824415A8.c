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
extern int fn_824BF8A8();
extern unsigned int lbl_82191C00;
extern unsigned int uStack_3c;


void fn_824415A8(uint *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  char *pcStack_40;
  uint uStack_3c;
  
  puVar3 = (&lbl_82191C00)[param_1[4]];
  pcVar1 = *(char **)(puVar3 + 0x1c);
  if ((*param_1 & 0x40) != 0) {
    uStack_3c = 7;
    pcStack_40 = pcVar1;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  bVar4 = (*param_1 & 0x80) != 0;
  if (bVar4) {
    uStack_3c = 8;
    pcStack_40 = pcVar1;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  if ((*param_1 & 0x100000) != 0) {
    uStack_3c = 7;
    pcStack_40 = "discus_video";
    fn_824BF8A8(param_2,&pcStack_40);
  }
  if ((*param_1 & 8) != 0) {
    pcStack_40 = *(char **)(puVar3 + 0x18);
    uStack_3c = 7;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  if (bVar4) {
    pcStack_40 = *(char **)(puVar3 + 0x18);
    uStack_3c = 6;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  if ((*param_1 & 0x80) != 0) {
    pcStack_40 = *(char **)(puVar3 + 0x20);
    uStack_3c = 7;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  uVar2 = *param_1;
  if (((uVar2 >> 0xc & 1) != 0) || ((uVar2 & 0x2000) != 0)) {
    pcStack_40 = *(char **)(puVar3 + 0x20);
    uStack_3c = ~(uVar2 >> 0xc) & 1 | 8;
    fn_824BF8A8(param_2,&pcStack_40);
  }
  return;
}

