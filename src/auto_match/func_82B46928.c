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
extern unsigned int *auStack_70;
extern int fn_82933030();
extern int fn_82AC6560();


undefined4 * fn_82B46928(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 auStack_70 [28];
  
  puVar1 = (undefined4 *)fn_82AC6560(param_1,0x50,10);
  fn_82933030(auStack_70);
  puVar1[6] = param_3;
  puVar1[8] = param_2;
  puVar1[1] = 0xe;
  puVar1[5] = 1;
  puVar1[7] = 0;
  *puVar1 = auStack_70[0];
  return puVar1;
}

