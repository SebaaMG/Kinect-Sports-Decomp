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
extern int fn_8266CA00();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined4 fn_8266CBF0(int param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((**(int **)(param_1 + 0x10) == 0) && (0 < (*(int **)(param_1 + 0x10))[3])) {
    fn_8266CA00(&uStack_20);
    **(undefined4 **)(param_1 + 0x10) = uStack_20;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = uStack_20;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 8) = uStack_20;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc) = uStack_1c;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc);
}

