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
extern int fn_826A9B58();


int * fn_826C3BE0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  fn_826A9B58(param_1,param_1,param_2[1]);
  uVar3 = 0;
  if (param_1[1] != 0) {
    iVar4 = 0;
    do {
      uVar3 = uVar3 + 1;
      puVar1 = (undefined4 *)(*param_2 + iVar4);
      puVar2 = (undefined4 *)(iVar4 + *param_1);
      iVar4 = iVar4 + 8;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
    } while (uVar3 < (uint)param_1[1]);
  }
  return param_1;
}

