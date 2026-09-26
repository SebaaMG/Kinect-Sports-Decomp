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
extern int fn_828B0528();
extern int fn_828B1468();


void fn_828D9168(int param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = fn_828B0528(*(undefined4 *)(param_1 + 0x14));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x8c);
    if (*(char *)(iVar1 + 0x128) != '\0') {
      return;
    }
    uVar3 = 6;
    if (*(char *)(iVar1 + 0x129) != '\0') goto code_r0x828d91b8;
  }
  uVar3 = 7;
code_r0x828d91b8:
  fn_828B1468(param_1,uVar3);
  return;
}

