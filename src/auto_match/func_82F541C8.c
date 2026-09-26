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
extern int fn_822315A0();
extern int fn_826744A0();
extern int fn_82F53F18();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82F541C8(uint *param_1,undefined4 *param_2)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = *param_2;
  uStack_20 = 0xffffffff;
  fn_82F53F18((ulonglong)*param_1 + 0x1564,&uStack_20);
  (*(code *)**(undefined4 **)*param_2)();
  fn_826744A0(param_1 + 1,param_2);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

