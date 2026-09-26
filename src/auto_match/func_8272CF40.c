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
extern int fn_8279AA48();
extern int fn_8279AE60();
extern int fn_827A0A60();


undefined8 fn_8272CF40(int *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((*(ushort *)(param_1 + 0x32) >> 7 & 1) != 0) {
    if (*(int *)(param_1[0x28] + 0x114) == 0) {
      uVar1 = *(ushort *)(param_1[0x27] + 0x50) >> 5;
    }
    else {
      uVar1 = *(ushort *)(*(int *)(param_1[0x28] + 0x114) + 0x68) >> 1;
    }
    if ((uVar1 & 1) != 0) {
      lVar2 = fn_827A0A60();
      uVar4 = ((lVar2 - param_2 & 0xffffffffU) >> 0x1f) - 1 & lVar2 - param_2;
      iVar3 = fn_8279AA48(param_1[0x28]);
      if (iVar3 < (int)uVar4) {
        uVar4 = fn_8279AA48(param_1[0x28]);
      }
      fn_8279AE60(param_1[0x28],uVar4);
      iVar3 = (**(code **)(*param_1 + 0x40))(param_1);
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 0xb00) = *(uint *)(iVar3 + 0xb00) | 0x400;
      }
      return 1;
    }
  }
  return 0;
}

