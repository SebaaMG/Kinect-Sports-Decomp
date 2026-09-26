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
extern int fn_8269D300();


undefined8 fn_8272E030(int *param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (((param_1[0x23] & 0xcU) != 0) ||
     (bVar2 = false, (~(*(byte *)((int)param_1 + 0x66) >> 6) & 1) == 0)) {
    bVar2 = true;
  }
  if (!bVar2) {
    if (((*(ushort *)(param_1 + 0x32) >> 0xe & 1) != 0) ||
       (bVar2 = false, *(int *)(param_1[0x2d] + 0x10) != 0)) {
      bVar2 = true;
    }
    if (!bVar2) {
      uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
      iVar1 = *(int *)(param_1[0x28] + 0x114);
      if ((((param_1[0x23] & 1U) != 0) && (iVar1 != 0)) &&
         ((((*(ushort *)(iVar1 + 0x68) & 1) == 0 &&
           (cVar4 = fn_8269D300(uVar3,param_1), cVar4 != '\0')) ||
          ((*(ushort *)(iVar1 + 0x68) >> 5 & 1) != 0)))) {
        bVar2 = true;
      }
    }
    if ((bVar2) && (param_2 == '\0')) {
      return 1;
    }
    if (bVar2) {
      return 0;
    }
  }
  if (param_2 != '\0') {
    uVar5 = 0xffffffffffffffff;
  }
  return uVar5;
}

