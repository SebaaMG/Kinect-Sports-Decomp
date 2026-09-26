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
extern int fn_827B50C8();


void fn_827B5240(int param_1,uint param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)((param_2 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x50));
  while( true ) {
    iVar2 = iVar2 + (param_2 & 0xff) * 0x1c;
    if ((*(uint *)(iVar2 + 8) < *(uint *)(param_1 + 0xc)) ||
       (*(uint *)(iVar2 + 0xc) < *(uint *)(param_1 + 0x10))) break;
    while( true ) {
      if ((ulonglong)*(uint *)(param_1 + 0x14) <= (param_3 & 0xffffffff)) {
        return;
      }
      lVar3 = (ulonglong)
              *(uint *)(((uint)((param_3 & 0xffffffff) >> 6) & 0x3fffffc) + *(int *)(param_1 + 0x20)
                       ) + (param_3 & 0xff) * 0xc;
      puVar1 = (uint *)lVar3;
      if ((((puVar1[2] & 0x80000000) == 0) && (*puVar1 <= *(uint *)(iVar2 + 8))) &&
         (puVar1[1] <= *(uint *)(iVar2 + 0xc))) break;
      param_3 = param_3 + 1;
    }
    fn_827B50C8(param_1,param_2,lVar3);
    puVar1[2] = puVar1[2] | 0x80000000;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    fn_827B5240(param_1,*(undefined4 *)(iVar2 + 0x14),param_3);
    param_2 = *(uint *)(iVar2 + 0x18);
    iVar2 = *(int *)((param_2 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x50));
  }
  return;
}

