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
extern int fn_82381BC0();
extern int fn_8289DAC8();
extern int fn_828B0218();
extern int fn_82A4AAA8();


void fn_828A31C0(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_30 [12];
  
  fn_8289DAC8(param_2,0);
  fn_8289DAC8(param_3,1);
  aiStack_30[0] = **(int **)(param_1 + 0x230);
  if ((int *)aiStack_30[0] != *(int **)(param_1 + 0x230)) {
    do {
      iVar1 = *(int *)(aiStack_30[0] + 0x10);
      iVar2 = fn_82A4AAA8(iVar1);
      if (iVar2 != 2) {
        *(undefined1 *)(iVar1 + 0xb2) = 0;
      }
      fn_82381BC0(aiStack_30);
    } while (aiStack_30[0] != *(int *)(param_1 + 0x230));
  }
  fn_828B0218(param_1 + 0x278,param_3);
  return;
}

