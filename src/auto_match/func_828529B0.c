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


void fn_828529B0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (*(short *)(param_2 + 8) != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 4) + iVar2) * 4 + *(int *)(param_3 + 0x34));
      if (iVar1 != 0) {
        fn_82639F78(*(undefined4 *)(param_1 + 4),lVar3,*(undefined4 *)(iVar1 + 0x20),0,
                          *(undefined4 *)(iVar1 + 0x2c),
                          0x8000000000000000 >>
                          ((((0x5f - lVar3) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
      }
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + 4;
    } while ((int)lVar3 < (int)(uint)*(ushort *)(param_2 + 8));
  }
  return;
}

