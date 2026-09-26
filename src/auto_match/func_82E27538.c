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
extern int fn_82E26630();
extern int fn_82E26C90();


longlong fn_82E27538(int param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int aiStack_30 [12];
  
  lVar1 = fn_82E26C90(param_1,param_2,aiStack_30);
  if (-1 < lVar1) {
    if (aiStack_30[0] == 0) {
      *param_3 = 0;
    }
    else {
      uVar4 = (ulonglong)((int)*(uint *)(param_1 + 8) >> 0x1f);
      uVar3 = (ulonglong)((int)*(uint *)(param_1 + 4) >> 0x1f);
      uVar2 = fn_82E26630(aiStack_30[0],(*(uint *)(param_1 + 4) ^ uVar3) - uVar3,
                            (*(uint *)(param_1 + 8) ^ uVar4) - uVar4);
      *param_3 = uVar2;
    }
  }
  return lVar1;
}

