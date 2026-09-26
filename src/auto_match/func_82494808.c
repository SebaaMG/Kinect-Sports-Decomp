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
extern unsigned int fStack_28;
extern int fn_822ABBF0();
extern unsigned int iStack_2c;
extern unsigned int lbl_821BEEBC;
extern unsigned int uStack_20;
extern unsigned int uStack_24;


void fn_82494808(double param_1,int param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **ppuStack_30;
  int iStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar1 = *(undefined4 **)(param_2 + 0x14);
  iStack_2c = param_2 + 4;
  fStack_28 = (float)param_1;
  ppuStack_30 = &lbl_821BEEBC;
  uStack_24 = param_4;
  uStack_20 = param_5;
  for (piVar2 = (int *)*puVar1; piVar2 < (int *)puVar1[1]; piVar2 = piVar2 + 1) {
    fn_822ABBF0(*(undefined4 *)(((int *)*piVar2)[4] * 4 + *(int *)*piVar2),&ppuStack_30);
  }
  return;
}

