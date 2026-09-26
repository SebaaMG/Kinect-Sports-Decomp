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
extern int fn_82BA9230();
extern int fn_82BC27A0();
extern int fn_82BC2EB0();


undefined8 fn_82BABC88(int param_1)

{
  char cVar2;
  int iVar1;
  
  iVar1 = 1;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      if (*(char *)(param_1 + 0x98 + iVar1) == '\x01') {
        return 0;
      }
      if (*(char *)(iVar1 + param_1 + 0x9e) == '\x01') {
        return 0;
      }
      cVar2 = fn_82BC2EB0(param_1,iVar1);
      if (cVar2 != '\0') {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(param_1 + 0x14));
  }
  if ((((*(char *)(param_1 + 0xa4) != '\x01') && ((*(uint *)(param_1 + 0xe4) >> 9 & 1) == 0)) &&
      (cVar2 = fn_82BA9230(param_1), cVar2 == '\0')) &&
     (iVar1 = fn_82BC27A0(param_1,0), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

