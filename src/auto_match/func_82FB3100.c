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
extern int fn_82FB2BD0();
extern int fn_82FB2ED0();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


undefined8 fn_82FB3100(int param_1,int param_2)

{
  undefined8 uVar1;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  fn_82FB2BD0();
  *(undefined2 *)(param_1 + 0xd4) = *(undefined2 *)(iStack0000001c + 0x14);
  *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(iStack0000001c + 0x10);
  *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(iStack0000001c + 0x12);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(iStack0000001c + 0xc);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(iStack0000001c + 0x17);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iStack0000001c + 4);
  if (*(int *)(iStack0000001c + 8) != 0) {
    iStack0000001c = iStack0000001c + 0x18;
    uVar1 = fn_82FB2ED0(param_1,param_1 + 0xac,&stack0x0000001c);
    return uVar1;
  }
  return 1;
}

