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
extern int fn_82FA8BA8();
extern unsigned int lbl_83264234;


undefined8 fn_82FA6FB0(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  for (piVar1 = lbl_83264234; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xf]) {
    iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
    if ((iVar2 == param_2) &&
       (((param_3 == 0 || (*(int *)(piVar1[0xe] + 0x28) == param_3)) &&
        (iVar2 = fn_82FA8BA8(piVar1,param_4), iVar2 != 1)))) {
      uVar3 = 2;
    }
  }
  return uVar3;
}

