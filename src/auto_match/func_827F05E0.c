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
extern int fn_827F3C30();
extern int fn_827F3C48();


undefined8 fn_827F05E0(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)*(ushort *)((int)param_1 + 0xe8);
  lVar4 = uVar3 - 1;
  iVar1 = *(int *)(((param_2 & 0xffff) + 0x28) * 4 + (int)param_1);
  if (-1 < lVar4) {
    param_1 = (uVar3 + 0x27) * 4 + param_1;
    do {
      if ((uint)lVar4 != (param_2 & 0xffff)) {
        uVar3 = fn_827F3C30(*(undefined4 *)param_1);
        uVar3 = uVar3 & 0xffff;
        while (uVar3 = uVar3 - 1, -1 < (longlong)uVar3) {
          iVar2 = fn_827F3C48(*(undefined4 *)param_1,uVar3 & 0xffff);
          if (iVar2 == iVar1) {
            return 1;
          }
        }
      }
      lVar4 = lVar4 + -1;
      param_1 = param_1 + -4;
    } while (-1 < lVar4);
  }
  return 0;
}

