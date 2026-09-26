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
extern int fn_82A1E650();
extern int fn_82A1F2F8();
extern int fn_82E1EAE8();
extern int fn_82E205A0();
extern int fn_82E205F8();
extern int fn_82E20890();
extern int fn_82E208B0();
extern int fn_82E20B98();
extern int fn_82E20E58();


void fn_82E1EBB8(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 9) != '\0') {
    if (*(char *)(param_1 + 0xc) != '\0') {
      fn_82E1EAE8();
    }
    *(undefined1 *)(param_1 + 10) = 0;
    if (*(char *)(param_1 + 0xf) != '\0') {
      fn_82A1F2F8();
      fn_82A1E650(*(undefined4 *)(param_1 + 0x3c),0xffffffffffffffff);
      fn_82A1F2F8();
    }
    if (*(char *)(*(int *)(param_1 + 0x54) + 2) == '\0') {
      uVar1 = fn_82E20890();
      fn_82E205F8(uVar1,0);
      fn_82E208B0(*(undefined4 *)(param_1 + 0x54),uVar1,0xffffffff8214ba1c);
      fn_82E205A0(uVar1,0xffffffff8214ba14);
      fn_82E20E58(*(undefined4 *)(param_1 + 0x54));
    }
    else {
      fn_82E20B98();
      *(int *)(*(int *)(param_1 + 0x54) + 4) = 3 - *(int *)(*(int *)(param_1 + 0x54) + 4);
    }
  }
  return;
}

