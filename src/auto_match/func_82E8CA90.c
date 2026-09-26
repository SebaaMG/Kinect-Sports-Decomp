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
extern int fn_82F023B0();
extern int fn_82F02410();
extern int fn_82F025F0();
extern unsigned int lbl_8215F5F0;


void fn_82E8CA90(int param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  if (*(double *)(param_1 + 0x1e08) < lbl_8215F5F0) {
    iVar1 = (int)*(double *)(param_1 + 0x1e08);
  }
  else {
    iVar1 = 0x1f;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x31c),0xb);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 800),0xb);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),iVar1,5);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x62c),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x604),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x658),3);
  fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
  *param_3 = (int)((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >>
                  3) + *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
  fn_82F023B0(*(undefined4 *)(param_1 + 0x1ebc));
  return;
}

