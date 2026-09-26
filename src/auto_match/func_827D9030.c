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
extern int fn_827D9300();
extern int fn_827E0C38();


void fn_827D9030(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  if (*(float *)(param_1 + 0x74) < (float)((double)*(uint *)(param_1 + 8) / (double)uVar1)) {
    iVar2 = 0;
    do {
      if (0x1ffffffe < uVar1) break;
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 << 1;
    } while (iVar2 < 3);
    fn_827E0C38(param_1);
    fn_827D9300(param_1,*(undefined4 *)(param_1 + 4));
  }
  return;
}

