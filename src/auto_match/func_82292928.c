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
extern int fn_82292670();
extern int fn_8265CA20();
extern int fn_828647D8();
extern int fn_82F63CA0();


undefined8 fn_82292928(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  while( true ) {
    if (piVar4 == (int *)param_1[1]) {
      return 0;
    }
    iVar1 = fn_828647D8(*piVar4);
    iVar2 = fn_828647D8(param_2);
    if (iVar1 == iVar2) break;
    piVar4 = piVar4 + 1;
  }
  iVar1 = *piVar4;
  lVar3 = (ulonglong)*(uint *)(iVar1 + 0x58) - 1;
  *(int *)(iVar1 + 0x58) = (int)lVar3;
  if (0 < lVar3) {
    return 0;
  }
  fn_82292670(iVar1);
  fn_8265CA20(iVar1);
  fn_82F63CA0(piVar4,piVar4 + 1,(param_1[1] - (int)(piVar4 + 1) >> 2) << 2);
  param_1[1] = param_1[1] + -4;
  return 0;
}

