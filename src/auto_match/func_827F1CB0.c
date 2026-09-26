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
extern int fn_827F1C50();


undefined4 * fn_827F1CB0(undefined4 *param_1,int param_2,int *param_3)

{
  undefined4 auStack_30 [12];
  
  *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + -1;
  if (*(int *)(*param_3 + 8) == *(int *)(param_2 + 0xd4)) {
    fn_827F1C50(auStack_30);
    *param_3 = *(int *)(param_2 + 0xd4);
    *param_1 = auStack_30[0];
  }
  else {
    *param_3 = *(int *)(*param_3 + 8);
    fn_827F1C50();
  }
  return param_1;
}

