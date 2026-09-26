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


void fn_82853BC0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8) * 0x3c + *(int *)(*(int *)(param_3 + 0x48) + 0x40);
  fn_82639F78(*(undefined4 *)(param_1 + 4),(ulonglong)*(uint *)(param_2 + 4),
                    *(undefined4 *)(*(int *)(iVar1 + 0x38) * 8 + *(int *)(iVar1 + 0x30)),
                    *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(iVar1 + 0x28),
                    0x8000000000000000 >>
                    ((((0x5f - (ulonglong)*(uint *)(param_2 + 4)) * 0x5556 & 0xffffffff) >> 0x10) +
                     0x20 & 0x7f));
  return;
}

