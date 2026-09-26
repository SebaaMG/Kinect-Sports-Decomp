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
extern int iRam832154c0;
extern unsigned int uRam832172b0;
extern unsigned int uRam832172b4;
extern unsigned int uRam832172b8;
extern unsigned int uRam832172bc;
extern unsigned int uRam832172c0;
extern unsigned int uRam832172c4;
extern unsigned int uRam832172c8;
extern unsigned int uRam832172cc;
extern unsigned int uRam832172d0;


void fn_829C92A0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x110) + 0x5c);
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x114) == 0) {
    uRam832172b0 = 0;
  }
  else {
    uRam832172b0 = (undefined4)
                   (((longlong)(*(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x114) + 0x5c) - iVar1)
                    * 1000000) / 50000000);
  }
  uRam832172b4 = (int)(((ulonglong)(uint)(*(int *)(*(int *)(param_1 + 0x34) + 0x120) - iVar1) *
                       1000000) / 50000000);
  uRam832172bc = (int)(((ulonglong)(uint)(iRam832154c0 - iVar1) * 1000000) / 50000000);
  uRam832172b8 = (int)(((ulonglong)(uint)(*(int *)(*(int *)(param_1 + 0x34) + 0x124) - iVar1) *
                       1000000) / 50000000);
  uRam832172c0 = (int)(((ulonglong)(uint)(*(int *)(param_1 + 0x38) - iVar1) * 1000000) / 50000000);
  uRam832172c4 = (int)(((ulonglong)(uint)(*(int *)(param_1 + 0x3c) - iVar1) * 1000000) / 50000000);
  uRam832172c8 = (int)(((ulonglong)(uint)(*(int *)(param_1 + 0x40) - iVar1) * 1000000) / 50000000);
  uRam832172cc = (int)(((ulonglong)(uint)(*(int *)(param_1 + 0x44) - iVar1) * 1000000) / 50000000);
  if (*(int *)(param_1 + 0x48) != 0) {
    uRam832172d0 = (int)(((ulonglong)(uint)(*(int *)(param_1 + 0x48) - iVar1) * 1000000) / 50000000)
    ;
    return;
  }
  uRam832172d0 = 0;
  return;
}

