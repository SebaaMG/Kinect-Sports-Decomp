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
extern int fn_82F63BA0();
extern int fn_82F67464();
extern int fn_82F68240();
extern int fn_82F6F890();
extern int fn_82F7B700();
extern int fn_82F7B940();
extern unsigned int stack0x00000000;


undefined4
fn_82F67340(char *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined4 *puVar2;
  longlong lVar1;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if (((param_1 == (char *)0x0) || (param_2 == param_2 + ((param_2 == (byte *)0x0) - 1))) ||
     (uVar4 = (ulonglong)*param_2, uVar4 == (uVar4 - 1) + (ulonglong)(uVar4 == 0))) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    return 0;
  }
  lVar1 = fn_82F7B940();
  if (lVar1 == 0) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x18;
    return 0;
  }
  if (*param_1 == '\0') {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F6F890(&stack0x00000000,0xffffffff82f67438);
    return 0;
  }
  uVar3 = fn_82F7B700(param_1,param_2,param_3,lVar1,param_5,param_6);
  fn_82F67464();
  return uVar3;
}

