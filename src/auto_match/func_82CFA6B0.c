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
extern int fn_82CFC050();


longlong fn_82CFA6B0(int *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)(uint)param_1[4];
  lVar4 = (uint)param_1[5] - uVar2;
  lVar3 = param_3;
  if ((int)lVar4 < (int)param_3) {
    do {
      fn_82CFC050(param_2,uVar2 + (uint)param_1[3],lVar4);
      param_2 = param_2 + lVar4;
      param_1[4] = param_1[4] + (int)lVar4;
      lVar3 = lVar3 - lVar4;
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
      if (iVar1 != 0) {
        return param_3 - lVar3;
      }
      uVar2 = (ulonglong)(uint)param_1[4];
      lVar4 = (uint)param_1[5] - uVar2;
    } while ((int)lVar4 < (int)lVar3);
  }
  fn_82CFC050(param_2,(uint)param_1[3] + uVar2,lVar3);
  param_1[4] = param_1[4] + (int)lVar3;
  return param_3;
}

