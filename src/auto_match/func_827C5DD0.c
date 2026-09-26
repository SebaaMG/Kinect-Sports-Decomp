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
extern int fn_827C5A28();
extern int fn_827C5A88();
extern int fn_827C5A90();
extern int fn_827C5B00();
extern int fn_827C5C40();
extern int fn_827C5D10();
extern int fn_827C5D18();


void fn_827C5DD0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x20);
  *(undefined4 **)(param_1 + 0x14c) = puVar1;
  *puVar1 = fn_827C5A90;
  puVar1[1] = fn_827C5B00;
  puVar1[2] = fn_827C5C40;
  puVar1[3] = fn_827C5D10;
  puVar1[4] = fn_827C5D18;
  puVar1[5] = fn_827C5A28;
  puVar1[6] = fn_827C5A88;
  puVar1[7] = 0;
  return;
}

