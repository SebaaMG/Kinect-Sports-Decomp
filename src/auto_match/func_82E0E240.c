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
extern int fn_82CEA220();


int fn_82E0E240(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *param_1;
  puVar2 = (undefined4 *)(iVar3 + param_3 * 8);
  iVar5 = puVar2[1];
  if (iVar5 == -1) {
    iVar3 = fn_82CEA220(param_1 + 3);
    iVar3 = iVar3 * 8 + param_1[3];
    iVar5 = *(int *)(iVar3 + 4);
    iVar6 = -1;
    if (iVar5 == param_3) {
      *(undefined4 *)(iVar3 + 4) = 0xffffffff;
      iVar5 = param_3;
    }
    else {
      iVar4 = iVar5 * 8 + *param_1;
      iVar1 = *(int *)(iVar4 + 4);
      if (iVar1 == param_3) {
        *(undefined4 *)(iVar4 + 4) = 0xffffffff;
        iVar5 = param_3;
      }
      else {
        *(int *)(iVar3 + 4) = iVar1;
        *(undefined4 *)(*param_1 + param_3 * 8) = *(undefined4 *)(iVar5 * 8 + *param_1);
      }
    }
  }
  else {
    *puVar2 = *(undefined4 *)(iVar5 * 8 + iVar3);
    puVar2[1] = *(undefined4 *)(iVar5 * 8 + iVar3 + 4);
    iVar6 = param_3;
  }
  *(int *)(iVar5 * 8 + *param_1 + 4) = param_1[6];
  param_1[6] = iVar5;
  return iVar6;
}

