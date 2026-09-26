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
extern unsigned int *auStack_20;
extern int fn_82633918();
extern int fn_826339C8();
extern unsigned int uStack_18;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82634AE0(int *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  if ((((~(ulonglong)*(uint *)(*param_1 + 0x4db4) & 0xffffffff) >> 5 & 1) != 0) &&
     (*(char *)(param_1 + 0x1f) != '\0')) {
    uStack_18 = 0x2000000;
    uVar1 = fn_82633918(param_1,auStack_20);
    fn_826339C8(param_1,uVar1,1);
  }
  return;
}

