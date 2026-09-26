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
extern int fn_823CCA90();
extern int fn_823CCFA0();
extern int fn_823CD4D8();


undefined8
fn_823D84A0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
             ,undefined8 param_10)

{
  int iVar2;
  undefined8 uVar1;
  
  if (param_5 == 2) {
    uVar1 = fn_823CD4D8(param_3,param_4,param_6,param_6,param_9,param_10);
    return uVar1;
  }
  if (param_5 == 3) {
LAB_823d8550:
    fn_823CCA90(param_3,param_4,param_10);
    return 1;
  }
  if (param_5 != 4) {
    if (param_5 == 5) {
      iVar2 = fn_823CD4D8(param_3,param_4,param_6,param_6,param_9,param_10);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_823d8550;
    }
    if (param_5 != 6) {
      return 1;
    }
    iVar2 = fn_823CD4D8(param_3,param_4,param_6,param_6,param_9,param_10);
    if (iVar2 != 0) {
      return 1;
    }
  }
  uVar1 = fn_823CCFA0(param_2,param_3,param_4,param_6);
  return uVar1;
}

