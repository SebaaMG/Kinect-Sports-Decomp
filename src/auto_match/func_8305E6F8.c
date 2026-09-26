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
extern unsigned int *auStack_40;
extern unsigned int *auStack_58;
extern int fn_8305F778();
extern int fn_83066658();
extern int fn_83066810();
extern unsigned int uStack_60;


undefined1 fn_8305E6F8(undefined8 param_1,int param_2)

{
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [48];
  
  fn_8305F778(*(undefined4 *)(param_2 + 0x28),**(undefined4 **)(param_2 + 0x2c),auStack_58);
  fn_83066658(auStack_40,param_2 + 0x34,auStack_58);
  fn_83066810(param_1,auStack_40,param_2);
  return uStack_60;
}

