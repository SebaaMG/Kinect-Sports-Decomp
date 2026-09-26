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
extern int fn_82EE5E28();
extern int fn_82EE5F60();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82E576A8(ulonglong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uStack_20;
  uint uStack_1c;
  
  iVar1 = fn_82EE5F60(param_2,&uStack_20,8);
  if (-1 < iVar1) {
    *param_1 = (((ulonglong)uStack_1c & 0xff) << 0x18 |
               ((ulonglong)uStack_1c & 0xff00) << 8 |
               (ulonglong)(uStack_1c >> 8) & 0xff00 | (ulonglong)(uStack_1c >> 0x18)) << 0x20 |
               ((ulonglong)uStack_20 & 0xff) << 0x18 |
               ((ulonglong)uStack_20 & 0xff00) << 8 |
               (ulonglong)(uStack_20 >> 8) & 0xff00 | (ulonglong)(uStack_20 >> 0x18);
    fn_82EE5E28(param_2,8);
  }
  return;
}

