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
extern int fn_82CEA160();
extern int fn_82CEA280();


void fn_82E0E1C0(int param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_82CEA280(param_1 + 0x20,param_2,0xffffffffffffffff);
  if ((param_3 & 0xffffffff) != 0) {
    iVar2 = fn_82CE5410();
    fn_82CEA160(param_1 + 0x20,*(undefined4 *)(iVar2 + 0x10),param_3,iVar1);
  }
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x14);
    do {
      **(undefined4 **)(iVar1 * 8 + iVar2) = (int)param_3;
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = *(int *)(iVar1 * 8 + iVar2 + 4);
    } while (iVar1 != -1);
  }
  return;
}

