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
extern int fn_82699B40();


void fn_8269A110(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *param_1);
      if ((*(byte *)(iVar1 + 0x66) & 0x40) != 0) {
        *(byte *)(iVar1 + 0x66) = *(byte *)(iVar1 + 0x66) & 0xbf;
        cVar2 = fn_82699B40(param_1,uVar4);
        if (cVar2 != '\0') {
          uVar4 = uVar4 - 1;
          iVar3 = iVar3 + -4;
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[1]);
  }
  return;
}

