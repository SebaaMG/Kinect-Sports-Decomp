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
extern int fn_82520780();


undefined8 fn_822F51B0(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    iVar1 = fn_82520780((double)(*(float *)((*(int *)(*(int *)(param_1 + 0x10) + 0x844) + 0x5a) * 4
                                            + *(int *)(*(int *)(param_1 + 0x10) + 0x83c)) *
                                 (float)*(uint *)(*(int *)(param_1 + 0xc) + 0x2dc)),
                         0xffffffff83265a28);
    if (iVar1 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2dc) = 0;
      return 1;
    }
    *(int *)(*(int *)(param_1 + 0xc) + 0x2dc) = *(int *)(*(int *)(param_1 + 0xc) + 0x2dc) + 1;
  }
  return 0;
}

