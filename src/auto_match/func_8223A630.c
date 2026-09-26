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
extern int fn_82237E90();
extern int fn_82237EF8();


void fn_8223A630(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_2[3] = 0;
  while (param_2 != (int *)*param_1) {
    piVar1 = (int *)*param_2;
    if (piVar1[3] != 0) break;
    piVar2 = (int *)*piVar1;
    if ((int *)piVar2[1] == piVar1) {
      iVar3 = piVar2[2];
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0xc) != 0)) {
        if ((int *)piVar1[1] != param_2) {
          fn_82237E90(piVar1,param_1);
          param_2 = piVar1;
        }
        iVar3 = *(int *)*param_2;
        ((int *)*param_2)[3] = 1;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        fn_82237EF8(iVar3,param_1);
      }
      else {
LAB_8223a6d8:
        piVar1[3] = 1;
        piVar2[3] = 0;
        *(undefined4 *)(iVar3 + 0xc) = 1;
        param_2 = piVar2;
      }
    }
    else {
      iVar3 = piVar2[1];
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) == 0)) goto LAB_8223a6d8;
      if ((int *)piVar1[1] == param_2) {
        fn_82237EF8(piVar1,param_1);
        param_2 = piVar1;
      }
      iVar3 = *(int *)*param_2;
      ((int *)*param_2)[3] = 1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      fn_82237E90(iVar3,param_1);
    }
  }
  ((int *)*param_1)[3] = 1;
  return;
}

