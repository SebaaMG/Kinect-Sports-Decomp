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
extern int fn_822BD338();


undefined8 fn_82389A60(int param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((1 < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (*(int *)(param_1 + 0x28) != 0)) {
    lVar3 = (ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0x24) + 0x114) + 0x20) + 4;
    lVar2 = (ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0x28) + 0x114) + 0x20) + 4;
    cVar1 = fn_822BD338(lVar3,0xffffffff821acfe4);
    if (((cVar1 != '\0') || (cVar1 = fn_822BD338(lVar3,0xffffffff821aca8c), cVar1 != '\0')) &&
       ((cVar1 = fn_822BD338(lVar2,0xffffffff821acfe4), cVar1 != '\0' ||
        (cVar1 = fn_822BD338(lVar2,0xffffffff821aca8c), cVar1 != '\0')))) {
      return 1;
    }
  }
  return 0;
}

