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
extern int fn_82DD9828();
extern int fn_82DD9A10();


int fn_82D69A68(undefined4 *param_1,int param_2,int param_3)

{
  if (*(int *)(*(int *)param_1[1] + 0xc) == 3) {
    fn_82DD9A10();
  }
  else {
    fn_82DD9828(param_3,*(undefined4 *)*param_1,*(int *)param_1[1],param_1 + 8);
  }
  *(undefined1 *)(param_2 + 2) = 0;
  *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) & 0xef;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return (((uint)*(byte *)(param_3 + 0xe) * 4 + (uint)*(byte *)(param_3 + 0xd) +
          (uint)*(byte *)(param_3 + 0xc)) * 2 + 0x1f & 0xfffffff0) + param_3;
}

