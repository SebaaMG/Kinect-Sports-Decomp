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
extern int fn_8270AA18();
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


undefined4 * fn_82691080(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  fn_8270AA18(param_1 + 4,4);
  param_1[0x6a] = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  (*(code *)**(undefined4 **)*param_1)((undefined4 *)*param_1,&uStack_30);
  uStack_28 = uStack_28 >> 0x20;
  if (uStack_28 < 0x1000) {
    uStack_28 = 0x1000;
  }
  trapWord(6,uStack_28,0);
  param_1[1] = (int)((((uint)param_1[1] + uStack_28) - 1 & 0xffffffff) / uStack_28) * (int)uStack_28
  ;
  return param_1;
}

