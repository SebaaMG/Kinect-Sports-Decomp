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
extern int fn_82A598F0();
extern int fn_82A76400();
extern int fn_82A76478();


longlong fn_82A59A90(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  lVar1 = fn_82A76478(param_2,*param_1,param_1[1],aiStack_30);
  if (-1 < lVar1) {
    iVar2 = fn_82A598F0(param_1 + (*(int *)(aiStack_30[0] + 0x30) % 0xd) * 10 + 2);
    if (iVar2 == 0) {
      lVar1 = -0x7ff8fff2;
      fn_82A76400(aiStack_30[0]);
    }
    else {
      lVar1 = 0;
      *param_3 = *(undefined4 *)(aiStack_30[0] + 0x30);
      param_1[0x84] = param_1[0x84] + 1;
    }
  }
  return lVar1;
}

