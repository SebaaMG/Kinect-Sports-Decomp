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
extern int fn_82A1E7D8();
extern int fn_82A2A618();
extern int fn_82E50CB8();
extern int fn_82E50F10();


undefined8 fn_82EEA618(int param_1)

{
  fn_82E50CB8(param_1 + 4);
  if (*(int *)(param_1 + 0x48) == 0) {
    fn_82A1E7D8(*(undefined4 *)(param_1 + 0x40));
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  fn_82A2A618(*(undefined4 *)(param_1 + 0x44),1,0);
  fn_82E50F10(param_1 + 4);
  return 0;
}

