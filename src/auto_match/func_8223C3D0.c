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
extern int fn_8223C368();
extern int fn_82F63CA0();


void fn_8223C3D0(int *param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = param_1[1];
  if (param_2 < (uint)(iVar1 - iVar3)) {
    iVar3 = iVar3 + param_2;
    if (iVar3 == iVar1) {
      return;
    }
    fn_82F63CA0(iVar3,iVar1,0);
  }
  else {
    if (param_2 <= (uint)(iVar1 - iVar3)) {
      return;
    }
    fn_8223C368(param_1,(iVar3 - iVar1) + param_2);
    iVar3 = (*param_1 - param_1[1]) + param_2;
    if (iVar3 != 0) {
      puVar2 = (undefined1 *)(param_1[1] + -1);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
      }
    }
    iVar3 = *param_1 + param_2;
  }
  param_1[1] = iVar3;
  return;
}

