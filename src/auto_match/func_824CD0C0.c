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
extern int fn_824CD030();
extern int fn_82F51178();
extern int fn_82F513F8();


void fn_824CD0C0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    iVar1 = fn_82F513F8(*(undefined4 *)(*(int *)(iVar2 + 0x80) + 0x20));
    if (iVar1 == *(int *)(iVar2 + 0x94)) {
      fn_82F51178(*(undefined4 *)(*(int *)(iVar2 + 0x80) + 0x20),0);
    }
    *(undefined4 *)(iVar2 + 0x80) = 0;
  }
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x80) = param_1;
    iVar2 = fn_824CD030(param_1);
    if (iVar2 == 0) {
      fn_82F51178(*(undefined4 *)(*(int *)(param_2 + 0x80) + 0x20),
                      *(undefined4 *)(param_2 + 0x94));
    }
  }
  return;
}

