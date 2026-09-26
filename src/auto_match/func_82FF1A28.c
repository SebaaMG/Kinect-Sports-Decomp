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
extern int fn_82FF0250();
extern int fn_82FF2248();
extern int fn_82FF22B8();
extern int fn_82FF2510();


longlong fn_82FF1A28(int param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  int aiStack_30 [2];
  longlong alStack_28 [2];
  
  if ((param_3 & 0xff) == 0xff) {
    fn_82FF2248(aiStack_30,param_1 + 0x1c,*param_2);
    if (aiStack_30[0] != *(int *)(param_1 + 0x20)) {
      fn_82FF22B8(alStack_28,param_1 + 0x1c,aiStack_30);
    }
    lVar2 = 1;
  }
  else {
    alStack_28[0] = (longlong)(int)(param_3 & 0xff);
    iVar1 = fn_82FF2510((double)alStack_28[0],param_1 + 0x1c,*param_2);
    lVar2 = (ulonglong)(iVar1 == 0) + 1;
  }
  fn_82FF0250(param_1);
  return lVar2;
}

