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
extern int fn_826FE988();
extern int fn_82F63CA0();


void fn_82702AF8(int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  fn_826FE988(param_1,(ulonglong)(uint)param_1[1] + 1);
  if (param_2 < param_1[1] - 1U) {
    iVar1 = param_2 * 8 + *param_1;
    fn_82F63CA0(iVar1 + 8,iVar1,(param_1[1] - param_2) - 1 & 0x1fffffff);
  }
  puVar2 = (undefined4 *)(param_2 * 8 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
    iVar1 = param_3[1];
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    puVar2[1] = param_3[1];
  }
  return;
}

