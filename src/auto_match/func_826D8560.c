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
extern int fn_8267C8D8();
extern int fn_8267CF60();
extern int fn_8267D9C0();


void fn_826D8560(int param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20);
  if ((*(int *)(iVar1 + 0x74) < 2) && (*(uint *)(iVar1 + 0x78) <= param_2)) {
    lVar2 = (ulonglong)*(uint *)(iVar1 + 0x84) + 8;
    fn_8267C8D8(lVar2);
    while ((*(int *)(iVar1 + 0x74) < 2 && (*(uint *)(iVar1 + 0x78) <= param_2))) {
      fn_8267CF60((ulonglong)*(uint *)(iVar1 + 0x84) + 0x1c,(ulonglong)*(uint *)(iVar1 + 0x84) + 8,
                   0xffffffffffffffff);
    }
    fn_8267D9C0(lVar2);
  }
  return;
}

