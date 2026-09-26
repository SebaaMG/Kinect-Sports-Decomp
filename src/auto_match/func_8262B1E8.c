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
extern int fn_825486D8();
extern int fn_82549048();


void fn_8262B1E8(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0xe0d0) == '\0') {
    if (0 < *(int *)(param_1 + 0xe070)) {
      fn_82549048((double)*(float *)(param_1 + 0xe0c0),param_1,*param_2,param_1 + 0xe080);
      fn_825486D8(param_1 + 0xc870,*(int *)(param_1 + 0xe070),param_1 + 0xe080,param_2,
                        *(undefined4 *)(param_1 + 0x50));
    }
    *(char *)(param_1 + 0xe0d0) = '\x01';
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffffb;
  }
  return;
}

