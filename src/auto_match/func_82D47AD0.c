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
extern unsigned int *auStack_40;
extern unsigned int fStack_2c;
extern unsigned int fStack_3c;
extern int fn_82D46950();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82D47AD0(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [4];
  float fStack_3c;
  float fStack_2c;
  
  puVar2 = &uStack_48;
  puVar3 = (undefined8 *)(param_2 + -8);
  lVar4 = 6;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fVar1 = *(float *)(param_2 + 0x30);
  if (lbl_821AAD20 < *(float *)(param_1 + 0x24)) {
    fVar1 = -fVar1;
  }
  fStack_3c = fStack_3c + fVar1;
  fStack_2c = fStack_2c + fVar1;
  fn_82D46950((double)*(float *)(param_2 + 0x34),param_1,auStack_40,param_3,uStack_50,param_5,
                    param_4);
  return;
}

