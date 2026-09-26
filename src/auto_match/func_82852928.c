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
extern int fn_82639F78();


void fn_82852928(int param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (*(short *)(param_2 + 0xc) != 0) {
    do {
      puVar1 = (undefined4 *)
               ((uint)*(byte *)(*(int *)(param_2 + 4) + (int)lVar2) * 0x10 + *(int *)(param_2 + 8));
      fn_82639F78(*(undefined4 *)(param_1 + 4),lVar2,puVar1[1],0,*puVar1,
                        0x8000000000000000 >>
                        ((((0x5f - lVar2) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < (int)(uint)*(ushort *)(param_2 + 0xc));
  }
  return;
}

