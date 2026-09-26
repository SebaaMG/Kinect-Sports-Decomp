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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_826E7BF8();
extern int fn_826E7E60();


void fn_826F6540(int param_1,int param_2)

{
  int aiStack_30 [6];
  
  aiStack_30[0] = param_1 + 5;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 2;
  aiStack_30[1] = 0xffffffff;
  aiStack_30[3] = 0;
  *(uint *)(param_2 + 0x44) =
       (uint)CONCAT11(*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 5));
  *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 1;
  aiStack_30[2] = 4;
  *(uint *)(param_2 + 0x40) =
       (uint)CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 7));
  *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 4;
  fn_826E7BF8(aiStack_30,param_2 + 0x24);
  if (*(char *)(param_1 + 4) != '\0') {
    *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 8;
    fn_826E7E60(aiStack_30,param_2 + 4);
  }
  return;
}

