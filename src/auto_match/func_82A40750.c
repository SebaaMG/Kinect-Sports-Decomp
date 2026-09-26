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
extern int fn_82A42E20();
extern int fn_82A43088();


longlong fn_82A40750(int param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *apiStack_40 [16];
  
  lVar1 = fn_82A42E20(param_1 + 0x250,0,1,0,0x465);
  if (lVar1 == 0) {
    lVar2 = -0x7ff8fff2;
  }
  else {
    apiStack_40[0] = (int *)0x0;
    lVar2 = fn_82A43088(apiStack_40);
    if (-1 < lVar2) {
      lVar2 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x28))
                        (*(int **)(param_1 + 0xb0),apiStack_40[0],param_2,1,lVar1 + 4,1,lVar1 + 4,
                         0x1337f001);
      if (-1 < lVar2) {
        lVar2 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x48))
                          (*(int **)(param_1 + 0xb0),0x1337f001);
      }
      (**(code **)(*apiStack_40[0] + 8))();
    }
  }
  return lVar2;
}

