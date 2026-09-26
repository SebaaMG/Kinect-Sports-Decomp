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
extern int fn_82758CD0();
extern int fn_8275CEE0();
extern int fn_8275F338();
extern int fn_8275FA28();
extern int fn_82764008();


undefined8 fn_82758D20(int param_1,undefined1 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = param_1 + 0xc;
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82764008(iVar2);
    }
    if (*(char *)(param_1 + 0x84) != '\0') {
      fn_82758CD0(*(undefined4 *)(param_1 + 8));
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      fn_8275F338(iVar2,(ulonglong)*(uint *)(param_1 + 8) + 0x28,
                        (ulonglong)*(uint *)(param_1 + 8) + 0x34);
    }
    fn_8275CEE0(*(undefined4 *)(param_1 + 8));
    *(byte *)(*(int *)(param_1 + 8) + 0x24) = *(byte *)(*(int *)(param_1 + 8) + 0x24) & 0xef;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 0x41) = 0;
    fn_8275FA28(iVar2,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),0);
    *(undefined1 *)(param_1 + 0x84) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}

