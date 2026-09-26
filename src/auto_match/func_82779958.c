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
extern int fn_827797D8();
extern unsigned int lbl_82005328;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82779958(int param_1,float *param_2,float *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  dVar3 = (double)lbl_821AAD20;
  dVar1 = dVar3;
  if (*(byte *)(param_1 + 1) != 0) {
    uStack_40 = (double)(longlong)(int)(uint)*(byte *)(param_1 + 1);
    dVar1 = (double)((float)(longlong)uStack_40 * lbl_82005328);
  }
  dVar2 = dVar3;
  if (*(byte *)(param_1 + 2) != 0) {
    uStack_40 = (double)(longlong)(int)(uint)*(byte *)(param_1 + 2);
    dVar2 = (double)((float)(longlong)uStack_40 * lbl_82005328);
  }
  if (*(byte *)(param_1 + 3) != 0) {
    uStack_40 = (double)(longlong)(int)(uint)*(byte *)(param_1 + 3);
    dVar3 = (double)((float)(longlong)uStack_40 * lbl_82005328);
  }
  fn_827797D8(dVar1,dVar2,dVar3);
  *param_2 = (float)uStack_40;
  *param_3 = (float)uStack_38;
  *param_4 = (float)uStack_30;
  return;
}

