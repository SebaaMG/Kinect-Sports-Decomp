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


int * fn_82681BF8(double param_1,int *param_2,int *param_3,int param_4,char param_5,
                   undefined8 param_6,char param_7,int *param_8)

{
  undefined2 in_stack_00000056;
  char in_stack_0000005f;
  undefined1 in_stack_00000067;
  
  *param_2 = 0;
  fn_82F68CC0(param_2 + 1,param_6,0x20);
  param_2[9] = *param_8;
  param_2[10] = param_8[1];
  param_2[0xb] = param_8[2];
  param_2[0xc] = param_8[3];
  param_2[0xd] = param_8[4];
  param_2[0xe] = param_8[5];
  param_2[0x11] = *param_3;
  *(undefined1 *)((int)param_2 + 0x4b) = 0;
  param_2[0xf] = (int)(float)param_1;
  if (param_7 != '\0') {
    *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 4;
  }
  if (param_5 != '\0') {
    *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 8;
  }
  if (in_stack_0000005f != '\0') {
    *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 0x80;
  }
  param_2[0x10] = param_4;
  param_2[0x11] = *param_3;
  *(undefined1 *)((int)param_2 + 0x4a) = in_stack_00000067;
  *(undefined2 *)(param_2 + 0x12) = in_stack_00000056;
  if (*param_2 != 0) {
    fn_8267C498();
  }
  *param_2 = 0;
  return param_2;
}

