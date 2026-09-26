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
extern int fn_82E0B0D0();
extern int fn_82E0B220();
extern int fn_82E0BFD8();
extern int fn_82E0D0A8();


bool fn_82E0D7E8(int param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  
  iVar1 = fn_82E0B0D0(param_1,param_2,0);
  if ((iVar1 == 0) && (iVar1 = fn_82E0B220(param_1,param_2,0), iVar1 == 0)) {
    lVar3 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x14)) {
      do {
        iVar1 = fn_82E0BFD8(param_1,param_2,lVar3,0);
        if (iVar1 == 1) goto LAB_82e0d884;
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(*(int *)(param_1 + 0x1c) + 0x14));
    }
    iVar1 = fn_82E0D0A8(param_1);
    bVar2 = iVar1 == 1;
  }
  else {
LAB_82e0d884:
    bVar2 = true;
  }
  return bVar2;
}

