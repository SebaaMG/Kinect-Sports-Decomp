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
extern int fn_8267C498();
extern int fn_82F68CC0();


int * fn_826D8D40(int param_1,int *param_2)

{
  int iVar1;
  
  param_2[0x14] = 0;
  param_2[0x13] = 0;
  param_2[0x15] = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  if (*param_2 != 0) {
    fn_8267C498();
  }
  *param_2 = *(int *)(param_1 + 4);
  fn_82F68CC0(param_2 + 1,param_1 + 8,0x20);
  param_2[9] = *(int *)(param_1 + 0x28);
  param_2[10] = *(int *)(param_1 + 0x2c);
  param_2[0xb] = *(int *)(param_1 + 0x30);
  param_2[0xc] = *(int *)(param_1 + 0x34);
  param_2[0xd] = *(int *)(param_1 + 0x38);
  param_2[0xe] = *(int *)(param_1 + 0x3c);
  param_2[0xf] = *(int *)(param_1 + 0x40);
  param_2[0x10] = *(int *)(param_1 + 0x44);
  param_2[0x11] = *(int *)(param_1 + 0x48);
  *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(param_1 + 0x4c);
  *(undefined1 *)((int)param_2 + 0x4a) = *(undefined1 *)(param_1 + 0x4e);
  *(undefined1 *)((int)param_2 + 0x4b) = *(undefined1 *)(param_1 + 0x4f);
  return param_2;
}

