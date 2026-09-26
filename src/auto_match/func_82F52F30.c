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
extern int fn_8251F718();
extern int fn_8251FBA8();
extern int fn_8265CA60();
extern int fn_82A1DD38();


undefined4 * fn_82F52F30(undefined4 *param_1,undefined8 param_2)

{
  int iVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar3 = fn_8251F718(param_2);
  param_1[1] = iVar3;
  if (iVar3 != 0) {
    uVar1 = fn_8251FBA8();
    uVar2 = fn_8265CA60();
    *param_1 = (int)uVar2;
    fn_82A1DD38(uVar2,param_1[1],uVar1);
  }
  return param_1;
}

