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
extern unsigned int *auStack_40;
extern int fn_82811080();
extern int fn_82811400();
extern int fn_8286CBF0();
extern int fn_8286D3A0();


ulonglong fn_8286CD88(int param_1)

{
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar2;
  undefined4 auStack_40 [4];
  undefined1 auStack_30 [24];
  
  uVar1 = fn_82811400(auStack_30,4);
  iVar3 = fn_82811080(0xffffffff832116f8,0x5c,uVar1);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8286CBF0();
  }
  auStack_40[0] = (undefined4)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    fn_8286D3A0(param_1 + 0x18,*(undefined4 *)(param_1 + 0x18),auStack_40);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return uVar2;
}

