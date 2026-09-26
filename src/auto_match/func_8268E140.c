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


void fn_8268E140(uint *param_1,int param_2,int param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0x10)) {
    fn_8268E140(param_1,*(undefined4 *)(param_2 + 0xc),param_3,param_4,param_5);
    iVar1 = param_2;
    do {
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(*(int *)(iVar1 + 0x20) + 0x14);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(*(int *)(iVar1 + 0x20) + 0x10);
      (**(code **)(*param_4 + 4))
                (param_4,param_3,iVar1,*(int *)(iVar1 + 0x24) << (*param_1 & 0x3f),param_5);
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_2);
  }
  return;
}

