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
extern int fn_828D9A48();
extern unsigned int lbl_82026D68;


ulonglong fn_828D4D68(int param_1)

{
  ulonglong uVar1;
  char cVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x4c))();
  cVar2 = fn_828D9A48(*(undefined4 *)(param_1 + 4));
  if (cVar2 == '\0') {
    return uVar1;
  }
  if ((uVar1 & 0xffffffff) < 0x20) {
    return (ulonglong)lbl_82026D68;
  }
  return uVar1 & 0xffffffff;
}

