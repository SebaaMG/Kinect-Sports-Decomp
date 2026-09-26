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
extern int fn_82CFD5F0();


undefined8 fn_82CEB330(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 == 0) || (iVar3 = *(int *)(param_2 * 4 + iVar1), iVar3 < 0)) {
    uVar4 = 1;
  }
  else {
    iVar2 = *param_3;
    uVar4 = fn_82CFD5F0(param_2 * 0x18 + *(int *)(param_1 + 0x18));
    (**(code **)(iVar2 + 0x10))(param_3,iVar1 + iVar3,uVar4);
    uVar4 = 0;
  }
  return uVar4;
}

