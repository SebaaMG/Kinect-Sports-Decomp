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
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_826AB218();
extern int fn_826AF838();


undefined4 * fn_826B0BC8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 auStack_20 [2];
  undefined1 auStack_18 [8];
  
  if (param_4 == '\0') {
    puVar2 = (undefined4 *)fn_826AF838(auStack_18);
  }
  else {
    fn_826AB218(auStack_20);
    puVar2 = auStack_20;
  }
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}

