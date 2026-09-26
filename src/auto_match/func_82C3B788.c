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
extern unsigned int *auStack_30;
extern int fn_82A6D200();
extern int fn_82A75410();
extern int fn_82A75588();
extern int fn_82C30370();


undefined8 fn_82C3B788(int *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint auStack_30 [12];
  
  uVar1 = fn_82A75588(param_3,param_2 + 3);
  if ((-1 < (int)uVar1) && (uVar1 = fn_82A75410(param_3,3,auStack_30), -1 < (int)uVar1)) {
    if ((auStack_30[0] & 0x80000000) == 0) {
      uVar1 = fn_82A6D200(param_3,1);
      if (-1 < (int)uVar1) {
        *param_1 = 0;
      }
    }
    else if ((auStack_30[0] & 0x40000000) == 0) {
      uVar1 = fn_82A6D200(param_3,2);
      if ((-1 < (int)uVar1) && (uVar1 = fn_82C30370(param_3,2,auStack_30), -1 < (int)uVar1)) {
        *param_1 = auStack_30[0] + 1;
      }
    }
    else if ((auStack_30[0] & 0x20000000) == 0) {
      uVar1 = fn_82A6D200(param_3,3);
      if ((-1 < (int)uVar1) && (uVar1 = fn_82C30370(param_3,param_2,auStack_30), -1 < (int)uVar1))
      {
        *param_1 = auStack_30[0] + 4;
      }
    }
    else {
      uVar1 = 0xffffffff80040002;
    }
  }
  return uVar1;
}

