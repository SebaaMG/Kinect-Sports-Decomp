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
extern unsigned int *auStack_30;
extern int fn_826A5E90();
extern int fn_826A5F00();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


undefined8 fn_826A6098(int param_1)

{
  undefined8 uVar1;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_30 [48];
  
  iStack_3c = *(int *)(param_1 + 0x38);
  if (iStack_3c == 0) {
    uVar1 = 1;
  }
  else {
    uStack_40 = *(undefined4 *)(param_1 + 0x34);
    uVar1 = fn_826A5E90(auStack_30);
    uVar1 = fn_826A5F00(&uStack_40,uVar1);
  }
  return uVar1;
}

