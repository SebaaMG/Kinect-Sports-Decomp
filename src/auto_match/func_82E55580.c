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
extern int fn_82E55008();
extern int fn_82EE2D50();


undefined8 fn_82E55580(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar3 = 0;
    do {
      if ((uVar2 < *(uint *)(param_1 + 0x58)) &&
         (iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x54)), iVar1 != 0)) {
        fn_82E55008(iVar1,1);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < *(uint *)(param_1 + 0x58));
  }
  fn_82EE2D50(param_1 + 0x54,0,0xffffffffffffffff);
  return 0;
}

