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
extern int fn_82649240();


undefined8
fn_82860BB8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 auStack_30 [12];
  
  *param_4 = 0;
  *param_2 = param_1[2];
  *param_3 = param_1[3];
  if (param_1[1] == 1) {
    if (param_1[2] == 1) {
      *param_2 = 0;
      return 0;
    }
  }
  else {
    if ((param_1[1] != 3) || (iVar1 = fn_82649240(*param_1,auStack_30,4,0), iVar1 != 0)) {
      return 0;
    }
    param_1[3] = param_1[4];
    param_1[1] = 1;
    param_1[2] = auStack_30[0];
    *param_2 = auStack_30[0];
    *param_4 = 1;
  }
  return 1;
}

