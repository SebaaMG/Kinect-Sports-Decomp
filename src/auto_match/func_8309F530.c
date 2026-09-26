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
extern unsigned int *auStack_80;
extern int fn_830A2398();
extern int fn_830A4670();
extern int fn_830A4688();
extern unsigned int uStack_88;


void fn_8309F530(ushort *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  longlong lVar6;
  undefined8 uStack_88;
  undefined1 auStack_80 [128];
  
  puVar3 = &uStack_88;
  *param_3 = *param_3 + -0x10;
  lVar6 = 0xc;
  puVar4 = (undefined8 *)(param_2 + -8);
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar1 = param_1[9];
  puVar5 = param_1;
  do {
    puVar5 = *(ushort **)(puVar5 + 10);
  } while (0x16 < *puVar5);
  fn_830A4670(puVar5 + 8);
  psVar2 = *(short **)(param_1 + 10);
  if (*psVar2 == 0x16) {
    fn_830A4688(psVar2,auStack_80,1);
  }
  else {
    fn_830A2398(psVar2,uVar1,auStack_80,param_3);
  }
  return;
}

