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
extern int fn_82F68CC0();
extern int fn_83065B90();
extern int fn_83065BA8();


undefined8 fn_830602B8(int *param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = 0;
  iVar4 = (int)param_2;
  if (*param_1 == 0) {
    if (0 < iVar4) {
      iVar1 = fn_83065B90(param_2 * 0xc);
      if (iVar1 == 0) {
        return 0;
      }
      *param_1 = iVar1;
    }
  }
  else {
    if (0 < iVar4) {
      lVar3 = fn_83065B90(param_2 * 0xc);
      if (lVar3 == 0) {
        return 0;
      }
      uVar2 = (ulonglong)(uint)param_1[7];
      if (iVar4 < param_1[7]) {
        uVar2 = param_2;
      }
      fn_82F68CC0(lVar3,*param_1,uVar2 * 0xc);
    }
    fn_83065BA8(*param_1);
    *param_1 = (int)lVar3;
  }
  param_1[7] = iVar4;
  return 1;
}

