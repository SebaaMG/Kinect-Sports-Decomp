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


undefined8 fn_82E4E220(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*param_1 + 0x10);
  if (((((((iVar2 == 0x56555949) || (iVar2 == 0x30323449)) || (iVar2 == 0x32315659)) ||
        ((iVar2 == 0x3131564e || (iVar2 == 0x3231564e)))) || (iVar2 == 0x56343130)) ||
      (((((iVar2 == 0x32595559 || (iVar2 == 0x59565955)) ||
         ((iVar2 == 0x55595659 ||
          (((iVar2 == 0x41595556 || (iVar2 == 0x50313459)) || (iVar2 == 0x54313459)))))) ||
        ((iVar2 == 0x54323459 || (iVar2 == 0x39555659)))) || (iVar2 == 0)))) || (iVar2 == 3)) {
    iVar3 = *(int *)(param_1[1] + 0x10);
    if (((iVar3 != 0x56555949) && (iVar3 != 0x30323449)) && (iVar3 != 0x32315659)) {
      return 4;
    }
    if (((((iVar2 != 0) && (iVar2 != 3)) || (sVar1 = *(short *)(*param_1 + 0xe), sVar1 == 8)) ||
        ((sVar1 == 0x10 || (sVar1 == 0x18)))) || (sVar1 == 0x20)) {
      if (iVar2 == iVar3) {
        return 7;
      }
      if (((iVar2 == 0x39555659) && (iVar3 != 0x30323449)) &&
         ((iVar3 != 0x32315659 && (iVar3 != 0x56555949)))) {
        return 5;
      }
      return 0;
    }
  }
  return 3;
}

