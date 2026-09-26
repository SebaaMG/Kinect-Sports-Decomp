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
extern unsigned int *auStack_30;
extern int fn_8225E7A0();
extern int fn_82F919C8();
extern int fn_82F921A0();
extern int fn_82F93A00();
extern int fn_82F94750();
extern int fn_82F953C8();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


undefined8 * fn_82F95200(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined8 auStack_30 [2];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined8 *puStack_10;
  
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  fn_82F953C8(auStack_30,param_2,param_3);
  uVar1 = fn_82F94750(auStack_20,uStack0000001c);
  cVar2 = fn_82F921A0(auStack_30,uVar1);
  if (cVar2 == '\0') {
    fn_82F93A00(auStack_30);
    uVar1 = fn_82F919C8();
    cVar2 = fn_8225E7A0(uStack0000001c,uStack00000024,uVar1);
    if (cVar2 == '\0') {
      puStack_10 = auStack_30;
      goto LAB_82f95290;
    }
  }
  puStack_10 = (undefined8 *)fn_82F94750(auStack_18,uStack0000001c);
LAB_82f95290:
  *puStack00000014 = *puStack_10;
  return puStack00000014;
}

