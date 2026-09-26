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
extern unsigned int *auStack_90;
extern unsigned int *fStack_50;
extern int fn_830A2398();
extern int fn_830A4688();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


void fn_82D98BC0(int param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_90 [16];
  short *psStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined1 auStack_70 [32];
  float fStack_50;
  
  puVar1 = &uStack_78;
  puVar2 = (undefined8 *)(param_2 + -8);
  lVar3 = 0xc;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fStack_50 = *(float *)(param_1 + 0x1c) * fStack_50;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x3c))(*(int **)(param_1 + 0xc),auStack_90);
  if (*psStack_80 == 0x16) {
    fn_830A4688(psStack_80,auStack_70,1);
    return;
  }
  fn_830A2398(psStack_80,uStack_7c,auStack_70,param_3);
  return;
}

