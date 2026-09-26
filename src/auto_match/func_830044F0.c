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
extern int fn_82FF53D0();
extern int fn_82FF53E8();
extern unsigned int lbl_832642F4;


void fn_830044F0(int param_1,char param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x18);
    if (param_2 == '\0') {
      if (iVar1 != 0) {
        fn_82FF53E8(lbl_832642F4);
      }
      if (*(int *)(*(int *)(param_1 + 0x20) + 0x20) != 0) {
        fn_82FF53E8(lbl_832642F4);
      }
      if (*(int *)(*(int *)(param_1 + 0x20) + 0x14) != 0) {
        fn_82FF53E8(lbl_832642F4);
      }
      if (*(int *)(*(int *)(param_1 + 0x20) + 0x1c) != 0) {
        fn_82FF53E8(lbl_832642F4);
      }
    }
    else {
      if (iVar1 != 0) {
        fn_82FF53D0(lbl_832642F4);
      }
      if (*(int *)(*(int *)(param_1 + 0x20) + 0x20) != 0) {
        fn_82FF53D0(lbl_832642F4);
      }
      if (*(int *)(*(int *)(param_1 + 0x20) + 0x14) != 0) {
        fn_82FF53D0(lbl_832642F4);
      }
      if (*(int *)(*(int *)(param_1 + 0x20) + 0x1c) != 0) {
        fn_82FF53D0(lbl_832642F4);
      }
    }
  }
  return;
}

