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
extern int fn_82837D98();
extern unsigned int lbl_8326B394;


void fn_82272938(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int aiStack_20 [2];
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  if (param_1[0x36] == param_2) goto LAB_822729a8;
  param_1[0x36] = param_2;
  if (param_2 == 0) {
LAB_82272998:
    aiStack_20[0] = lbl_8326B394;
  }
  else {
    fn_82837D98(*(undefined4 *)(param_2 + 0x14),0,aiStack_20);
    iVar1 = *param_1;
    if (aiStack_20[0] == 0) goto LAB_82272998;
  }
  *(int *)(iVar1 + 0x1a4) = aiStack_20[0];
LAB_822729a8:
  param_1[0x37] = param_3;
  return;
}

