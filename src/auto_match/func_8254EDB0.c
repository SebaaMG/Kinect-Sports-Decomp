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
extern int fn_8254EEB8();
extern unsigned int iStack_20;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327FBA4;
extern unsigned int lbl_8327FBA8;
extern unsigned int lbl_8327FBAC;
extern unsigned int lbl_8327FBB0;
extern unsigned int lbl_8327FBB4;


void fn_8254EDB0(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  int aiStack_30 [4];
  int iStack_20;
  
  if (*(int *)(param_3 + 4) != 0) {
    param_4 = ((param_4 & 0xffffffff) >> 0x1f) - 1 & param_4;
    if (3 < (int)param_4) {
      param_4 = 4;
    }
    aiStack_30[1] = (int)lbl_8327FBA8;
    aiStack_30[2] = (int)lbl_8327FBAC;
    aiStack_30[3] = (int)lbl_8327FBB0;
    iStack_20 = (int)lbl_8327FBB4;
    aiStack_30[0] = (int)lbl_8327FBA4;
    if ((((int)param_4 != *(int *)(param_3 + 0x104)) ||
        (*(int *)((int)aiStack_30 + (int)((param_4 & 0xffffffff) << 2)) != *(int *)(param_3 + 0x100)
        )) || (*(int *)(param_3 + 0xf0) != 0)) {
      fn_8254EEB8(param_1,param_2,(double)lbl_821CC160,param_3);
      *(int *)(param_3 + 0x104) = (int)param_4;
    }
  }
  return;
}

