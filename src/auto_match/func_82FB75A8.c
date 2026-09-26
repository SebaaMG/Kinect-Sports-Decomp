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
extern int fn_82FAD2E8();
extern int fn_82FB72B0();
extern int fn_82FB91C0();


int fn_82FB75A8(int param_1,ulonglong param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 & 0xffffffff) == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  else {
    piVar2 = (int *)(param_1 + 0x40);
    fn_82FAD2E8(piVar2);
    iVar1 = fn_82FB91C0(param_1 + 0x5c,param_2);
    if (iVar1 == 1) {
      iVar1 = fn_82FB72B0(param_1);
      *(int *)(param_1 + 0x50) = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 0)) {
        fn_82FAD2E8(piVar2);
        iVar1 = 0;
      }
    }
    else {
      iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2);
    }
  }
  return iVar1;
}

