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
extern int fn_82C10F40();
extern int fn_82C112A8();


undefined8 fn_82C113F8(int param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  *param_3 = 0;
  *param_2 = 0;
  uVar1 = fn_82C10F40(*(undefined4 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x10),aiStack_30);
  if (-1 < (int)uVar1) {
    if (*(int *)(aiStack_30[0] + 0x18) == 0) {
      uVar1 = 0xffffffff8050000b;
    }
    else {
      *param_3 = *(longlong *)(param_1 + 0x20);
      uVar1 = fn_82C112A8(param_1,param_2);
      if ((int)uVar1 < 0) {
        *param_3 = 0;
        *param_2 = 0;
      }
      else if (*param_3 < *param_2) {
        *param_3 = *param_2;
      }
    }
  }
  return uVar1;
}

