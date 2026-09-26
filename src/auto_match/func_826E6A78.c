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


undefined8 fn_826E6A78(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = param_1[2];
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x48) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x4c);
    uVar3 = (**(code **)(*param_1 + 0x38))(param_1,0,2);
    (**(code **)(*param_1 + 0x38))(param_1,uVar2,0);
  }
  return uVar3;
}

