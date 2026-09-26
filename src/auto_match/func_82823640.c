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
extern int fn_82822510();


longlong fn_82823640(longlong param_1)

{
  longlong lVar1;
  int aiStack_30 [12];
  
  fn_82822510(0xffffffff8320a5dc,0xffffffff82823440,param_1,aiStack_30);
  if (aiStack_30[0] == 0) {
    lVar1 = 0;
  }
  else {
    if ((*(uint *)(aiStack_30[0] + 0xc) & 4) != 0) {
      param_1 = param_1 - (ulonglong)*(uint *)(aiStack_30[0] + 0x78);
    }
    lVar1 = (**(code **)(*(int *)(aiStack_30[0] + 0x10) + 0x10))(aiStack_30[0],param_1);
    if ((*(uint *)(aiStack_30[0] + 0xc) & 4) != 0) {
      lVar1 = lVar1 + ((ulonglong)*(uint *)(aiStack_30[0] + 0x78) & 0x7fffffff) * -2;
    }
  }
  return lVar1;
}

