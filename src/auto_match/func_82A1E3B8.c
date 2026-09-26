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
extern unsigned int __imp__ExThreadObjectType;
extern unsigned int *auStack_20;
extern int fn_82A2B760();


undefined8 fn_82A1E3B8(undefined8 param_1)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 auStack_20 [4];
  
  iVar2 = ObReferenceObjectByHandle(param_1,__imp__ExThreadObjectType,auStack_20);
  if (iVar2 < 0) {
    fn_82A2B760();
    uVar1 = 0x7fffffff;
  }
  else {
    uVar1 = KeQueryBasePriorityThread(auStack_20[0]);
    if ((int)uVar1 == 0x10) {
      uVar1 = 0xf;
    }
    else if ((int)uVar1 == -0x10) {
      uVar1 = 0xfffffffffffffff1;
    }
    ObDereferenceObject(auStack_20[0]);
  }
  return uVar1;
}

