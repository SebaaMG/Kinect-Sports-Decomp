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
extern int fn_82CE6310();
extern int fn_82F68CC0();


uint * fn_82CFC908(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  lVar4 = (ulonglong)uVar1 + ((ulonglong)uVar2 - 1);
  iVar3 = fn_82CE5410();
  uVar6 = (uint)lVar4;
  if ((int)(param_1[2] & 0x3fffffff) < (int)uVar6) {
    lVar5 = ((ulonglong)param_1[2] & 0x3fffffff) << 1;
    if ((int)lVar5 <= (int)uVar6) {
      lVar5 = lVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1,lVar5,1);
  }
  param_1[1] = uVar6;
  fn_82F68CC0((ulonglong)*param_1 + ((ulonglong)uVar2 - 1),*param_2,(ulonglong)uVar1);
  return param_1;
}

