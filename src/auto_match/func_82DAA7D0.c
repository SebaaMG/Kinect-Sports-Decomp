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
extern int fn_82CE8A48();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;
extern unsigned int uStack_4f;
extern unsigned int uStack_50;


void fn_82DAA7D0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(char *)(param_2 + 0x21) != '\0') {
    uStack_38 = *(undefined4 *)(param_1 + 0x18);
    uStack_40 = *(undefined2 *)(param_1 + 0x10);
    uStack_3c = *(undefined4 *)(param_1 + 0x14);
    uStack_34 = *(undefined4 *)(param_1 + 0x1c);
    uStack_50 = 5;
    uStack_4f = 0;
    uStack_4e = 2;
    uStack_4c = 0x20;
    uStack_4a = 0xffff;
    fn_82CE8A48(param_3,param_4,&uStack_50,0);
  }
  return;
}

