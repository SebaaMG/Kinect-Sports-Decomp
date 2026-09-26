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
extern int fn_826DBE10();


undefined4 * fn_826DDD10(undefined4 *param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puStack_30;
  undefined4 *puStack_2c;
  
  uVar1 = *(undefined4 *)(param_2 + 0xa8);
  *param_1 = 1;
  param_1[1] = uVar1;
  *(int *)(param_2 + 0xa8) = *(int *)(param_2 + 0xa8) + 1;
  iVar2 = 0;
  if (*(int *)(param_2 + 0x74) < 2) {
    RtlEnterCriticalSection(param_2 + 0xac);
    iVar2 = param_2;
  }
  puStack_30 = param_3;
  puStack_2c = param_1;
  fn_826DBE10(param_2 + 200,param_2 + 200,&puStack_30,*param_3 >> 8 ^ *param_3);
  if (iVar2 != 0) {
    RtlLeaveCriticalSection(iVar2 + 0xac);
  }
  return param_1;
}

