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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82E07730();
extern int fn_83082568();
extern unsigned int uStack_24;
extern unsigned int uStack_28;


int * fn_82E077A0(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int aiStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  aiStack_30[0] = 0;
  iVar1 = fn_82E07730(param_2,param_3);
  uStack_28 = 0;
  uStack_24 = 0;
  if (-1 < iVar1) {
    piVar2 = (int *)(iVar1 * 8 + *(int *)(param_2 + 4) + 4);
  }
  else {
    piVar2 = (int *)fn_83082568(aiStack_30,&uStack_28);
  }
  if (*piVar2 != 0) {
    fn_82CE4040();
  }
  *param_1 = *piVar2;
  if ((-1 >= iVar1) && (aiStack_30[0] != 0)) {
    fn_82CE4118();
  }
  return param_1;
}

