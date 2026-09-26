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
extern int fn_8265C940();
extern int fn_82A9E7D8();
extern int fn_82F68CC0();


undefined4 fn_82A9F3B8(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int aiStack_40 [16];
  
  iVar1 = fn_82A9E7D8(param_1,param_2,aiStack_40);
  *(int *)(param_1 + 0x90) = iVar1;
  if (-1 < iVar1) {
    if (*(int *)(aiStack_40[0] * 0x114 + *(int *)(param_1 + 4) + 0x110) == 0) {
      iVar1 = fn_8265C940(param_4 + 1,0x24870000);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x90) = 0x80004005;
      }
      else {
        fn_82F68CC0(iVar1,param_3,param_4);
        *(undefined1 *)(iVar1 + param_4) = 0;
        *(int *)(aiStack_40[0] * 0x114 + *(int *)(param_1 + 4) + 0x110) = iVar1;
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x90);
}

