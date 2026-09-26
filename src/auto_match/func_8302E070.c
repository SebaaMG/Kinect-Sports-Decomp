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
extern int fn_82FFF510();
extern int fn_83011A38();
extern int fn_83011B20();
extern int fn_8302D080();
extern unsigned int lbl_832642E4;


void fn_8302E070(int param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x11f) >> 1 & 1) == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x11f) = (param_2 & 1) << 1 | *(byte *)(param_1 + 0x11f) & 0xfd;
  fn_8302D080();
  if (*(char *)(param_1 + 0x122) != '\0') {
    if (lbl_832642E4 != 0) {
      fn_83011B20(lbl_832642E4,*(undefined4 *)(param_1 + 0xc));
      fn_83011A38(lbl_832642E4,*(undefined4 *)(param_1 + 0xc));
    }
    fn_82FFF510(param_1,0,0);
  }
  return;
}

