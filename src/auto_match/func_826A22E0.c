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
extern unsigned int *auStack_30;
extern int fn_82696330();
extern int fn_826A1A28();
extern int fn_826A1F38();
extern int fn_826C0BA8();
extern int fn_82F66A80();


undefined8 fn_826A22E0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar3;
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [48];
  
  if ((((undefined4 *)*param_3)[4] != 0) &&
     (iVar3 = fn_82F66A80(**(undefined1 **)*param_3), iVar3 != 0)) {
    lVar1 = fn_826A1A28(param_3);
    if (-1 < lVar1) {
      auStack_30[0] = 0;
      fn_826A1F38(param_1 + -0x10,lVar1,auStack_30);
      fn_82696330(auStack_30);
      return 1;
    }
    return 0;
  }
  uVar2 = fn_826C0BA8(param_1,param_2,param_3);
  return uVar2;
}

