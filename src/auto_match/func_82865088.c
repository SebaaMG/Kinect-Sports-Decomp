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
extern int fn_82297DB0();
extern int fn_82864F80();
extern int fn_82FE8948();
extern unsigned int uStack_1c;


undefined8 fn_82865088(int param_1)

{
  undefined8 uVar1;
  undefined4 **appuStack_30 [5];
  uint uStack_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    fn_82864F80(appuStack_30,param_1);
    if (uStack_1c < 8) {
      appuStack_30[0] = appuStack_30;
    }
    uVar1 = fn_82FE8948(appuStack_30[0]);
    fn_82297DB0(appuStack_30,1,0);
  }
  return uVar1;
}

