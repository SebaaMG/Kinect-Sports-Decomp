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
extern int fn_82CE5410();
extern int fn_82F68CC0();


undefined4 * fn_82CFCA30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar3;
  longlong lVar2;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  uVar1 = param_3[1];
  lVar6 = (ulonglong)(uint)param_2[1] - 1;
  lVar4 = (ulonglong)uVar1 + lVar6;
  iVar3 = fn_82CE5410();
  lVar2 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),lVar4);
  fn_82F68CC0(lVar2,*param_2,lVar6);
  fn_82F68CC0(lVar2 + lVar6,*param_3,(ulonglong)uVar1);
  *param_1 = (int)lVar2;
  uVar5 = (undefined4)lVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar5;
  return param_1;
}

