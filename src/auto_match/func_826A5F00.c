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
extern unsigned int *auStack_40;
extern int fn_8267BE38();
extern int fn_826A4B58();
extern int fn_826A5AE0();
extern int fn_826A5E90();


undefined8 fn_826A5F00(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [64];
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = fn_826A5E90(auStack_40);
  uVar2 = fn_826A5AE0(param_1,0,uVar1,uVar2);
  fn_826A4B58(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  fn_8267BE38(*(undefined4 *)(param_2 + 0x10));
  return uVar2;
}

