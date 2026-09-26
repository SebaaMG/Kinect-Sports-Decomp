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
extern unsigned int *auStack_20;
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E508();
extern unsigned int lbl_8326183C;


void fn_82F4E058(void)

{
  undefined8 uVar1;
  undefined4 auStack_20 [4];
  
  if (*(int *)(lbl_8326183C + 0x2b00) == 0) {
    auStack_20[0] = 0;
    uVar1 = fn_82A1E0C0(0,0,0xffffffff82f4d7d8,0,4,auStack_20);
    *(int *)(lbl_8326183C + 0x2b00) = (int)uVar1;
    fn_82A1E508(uVar1,3);
    fn_82A1E2C0(*(undefined4 *)(lbl_8326183C + 0x2b00));
  }
  return;
}

