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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82D8DCF0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  if (*(char *)(iVar2 + 0x18) == '\x01') {
    iVar2 = *(char *)(iVar2 + 0x10) + iVar2;
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        (**(code **)(*(int *)(param_1 + -0xc) + 0xc))(param_1 + -0xc,iVar2);
      }
      else {
        iVar1 = fn_82CE5410();
        if (*(uint *)(param_1 + 0x30) == (*(uint *)(param_1 + 0x34) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),(int *)(param_1 + 0x2c),4);
        }
        *(int *)(*(int *)(param_1 + 0x30) * 4 + *(int *)(param_1 + 0x2c)) = iVar2;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        fn_82CE4040(iVar2);
      }
    }
  }
  return;
}

