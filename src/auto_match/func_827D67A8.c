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
extern int fn_827E40D0();


longlong fn_827D67A8(undefined4 *param_1)

{
  longlong lVar1;
  int *apiStack_30 [12];
  
  lVar1 = 0;
  apiStack_30[0] = (int *)0x0;
  if (param_1[0xb3] == 0) {
    param_1[0xd2] = 0;
    (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,apiStack_30);
    if (apiStack_30[0] != (int *)0x0) {
      do {
        lVar1 = lVar1 + 1;
        (**(code **)(*apiStack_30[0] + 4))(apiStack_30[0],param_1);
        RtlEnterCriticalSection(param_1 + 0x22);
        fn_827E40D0(param_1 + 1,param_1[1],apiStack_30);
        RtlLeaveCriticalSection(param_1 + 0x22);
        if (param_1[0xb3] == 1) {
          return lVar1;
        }
        (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,apiStack_30);
      } while (apiStack_30[0] != (int *)0x0);
    }
  }
  else {
    lVar1 = 1;
    param_1[0xd2] = 1;
  }
  return lVar1;
}

