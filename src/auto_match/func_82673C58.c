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
extern int fn_826738F0();
extern unsigned int iStack_c;
extern unsigned int uStack_10;


undefined8 fn_82673C58(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uStack_10;
  int iStack_c;
  
  for (iVar1 = *(int *)(param_1 + 0x34); iVar1 != *(int *)(param_1 + 0x38); iVar1 = iVar1 + 8) {
    if (*(int *)(iVar1 + 4) == param_3) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x44);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x48)) {
      iVar1 = param_1 + 0x34;
      if (param_4 == 0) {
        iVar1 = param_1 + 0x44;
      }
      uStack_10 = param_2;
      iStack_c = param_3;
      fn_826738F0(iVar1,&uStack_10);
      return 1;
    }
    if (*(int *)(iVar1 + 4) == param_3) break;
    iVar1 = iVar1 + 8;
  }
  return 0;
}

