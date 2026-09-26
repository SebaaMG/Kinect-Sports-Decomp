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
extern int fn_82DC9D40();


undefined1 * fn_82DC9DD0(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_30 [48];
  
  iVar1 = *(int *)(param_2 + 0x34);
  if ((iVar1 != 0) &&
     (pcVar2 = (char *)(**(code **)(*(int *)(iVar1 + 8) + 4))(auStack_30,iVar1 + 8), *pcVar2 == '\0'
     )) {
    *param_1 = 0;
    return param_1;
  }
  if (*(char *)(param_3 + 0x18) == '\x01') {
    param_3 = *(char *)(param_3 + 0x10) + param_3;
  }
  else {
    param_3 = 0;
  }
  if (*(char *)(param_4 + 0x18) == '\x01') {
    param_4 = *(char *)(param_4 + 0x10) + param_4;
  }
  else {
    param_4 = 0;
  }
  fn_82DC9D40(param_1,param_2 + -8,param_3,param_4);
  return param_1;
}

