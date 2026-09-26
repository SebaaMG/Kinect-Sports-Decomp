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
extern int fn_82D909F0();
extern int fn_82DAF6D0();
extern int fn_82DAFB58();
extern int fn_83081A78();


void fn_82D82D60(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(ushort *)(param_3 + 0x20c) == (*(ushort *)(param_3 + 0x20e) & 0x3fff)) {
    fn_83081A78((int *)(param_3 + 0x208),4);
  }
  *(int *)((uint)*(ushort *)(param_3 + 0x20c) * 4 + *(int *)(param_3 + 0x208)) = param_2;
  *(short *)(param_3 + 0x20c) = *(short *)(param_3 + 0x20c) + 1;
  iVar1 = *(int *)(param_2 + 0xc);
  if ((*(short *)(iVar1 + 0x20) == -1) && (*(char *)(param_3 + 0xe8) != '\x05')) {
    fn_82DAF6D0(iVar1,param_2);
    fn_82DAFB58(*(undefined4 *)(param_3 + 0xcc),param_2);
  }
  else if ((*(int *)(param_3 + 0xcc) != iVar1) && (*(char *)(param_3 + 0xe8) != '\x05')) {
    fn_82D909F0(param_1,param_3,**(undefined4 **)(iVar1 + 0x48));
  }
  return;
}

