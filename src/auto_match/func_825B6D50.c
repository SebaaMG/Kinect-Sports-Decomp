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
extern unsigned int fStack_2c;
extern int fn_825B6EE0();
extern int fn_8260BA88();
extern unsigned int lbl_821954CC;
extern float lbl_821954D0;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_825B6D50(int param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  float fStack_2c;
  
  uVar1 = lbl_821CC160;
  puVar2 = &uStack_48;
  lVar3 = 2;
  uStack_48 = *(uint *)(*(int *)(param_1 + 0x34) * 0x28 + param_1 + 0x34 + 0x10);
  do {
    puVar2[3] = uVar1;
    puVar2 = puVar2 + 2;
    *puVar2 = uVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uStack_44 = (uint)*(ushort *)(param_2 + 4);
  fStack_2c = 0.0;
  if (lbl_821954CC < (float)*(byte *)(param_2 + 6)) {
    uStack_44 = uStack_44 | 0x10000;
  }
  if (lbl_821954CC < (float)*(byte *)(param_2 + 7)) {
    uStack_44 = uStack_44 | 0x20000;
  }
  lVar3 = (longlong)*(short *)(param_2 + 8);
  uStack_4c = uStack_48 & ~uStack_44;
  uStack_50 = uStack_44 & ~uStack_48;
  uStack_48 = uStack_44 & uStack_48;
  fn_825B6EE0((double)lVar3,(double)(longlong)*(short *)(param_2 + 10),param_1,&uStack_50,
                    param_3,(longlong)*(short *)(param_2 + 10),0,uStack_50,lVar3,lVar3);
  fn_825B6EE0((double)(longlong)*(short *)(param_2 + 0xc),
                    (double)(longlong)*(short *)(param_2 + 0xe),param_1,&uStack_50);
  fStack_2c = (float)*(byte *)(param_2 + 7) * lbl_821954D0;
  fn_8260BA88(param_1 + 0x34,&uStack_50);
  return;
}

