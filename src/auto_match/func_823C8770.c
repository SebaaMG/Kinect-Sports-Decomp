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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_822B33B0();
extern int fn_823C9098();
extern int fn_823CAF28();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_823C8770(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 auStack_70 [2];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  fn_823CAF28(param_1,auStack_30,auStack_40,&fStack_68,auStack_70);
  fn_823C9098((double)fStack_68,(double)fStack_64,(double)fStack_60);
  cVar3 = fn_822B33B0((double)lbl_821CC160,
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x240) + 0x1c) + 4));
  if (cVar3 != '\0') {
    puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0x1a0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  *(undefined4 *)(param_1 + 0x228) = auStack_70[0];
  *(undefined4 *)(param_1 + 0x214) = uStack_58;
  *(undefined4 *)(param_1 + 0x218) = uStack_54;
  *(undefined4 *)(param_1 + 0x21c) = uStack_50;
  return;
}

