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
extern unsigned int *auStack_340;
extern int fn_8268D438();
extern int fn_826F1A90();
extern int fn_826F2588();
extern int fn_826F29B8();
extern int fn_826F2AD8();
extern unsigned int uStack_334;


undefined4
fn_8268D4B8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_340 [12];
  undefined4 uStack_334;
  
  fn_826F29B8(auStack_340,param_1);
  fn_826F2AD8(auStack_340,param_2);
  fn_8268D438(auStack_340,param_3);
  fn_8268D438(auStack_340,param_4);
  fn_8268D438(auStack_340,param_5);
  fn_8268D438(auStack_340,param_6);
  fn_8268D438(auStack_340,param_7);
  fn_8268D438(auStack_340,param_8);
  fn_826F1A90(auStack_340);
  fn_826F2588(auStack_340);
  return uStack_334;
}

