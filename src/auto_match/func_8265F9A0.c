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
extern unsigned int *auStack_14;
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_8225E7A0();
extern int fn_8265F8D8();
extern int fn_8265FF20();
extern int fn_826689B8();
extern int fn_82669808();
extern int fn_82F919C8();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


undefined4 * fn_8265F9A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 *puStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 auStack_20 [2];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 *puStack_10;
  
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  fn_8265FF20(auStack_20,param_2,param_3);
  uVar1 = fn_8265F8D8(auStack_18,uStack0000001c);
  cVar2 = fn_82669808(auStack_20,uVar1);
  if (cVar2 == '\0') {
    fn_826689B8(auStack_20);
    uVar1 = fn_82F919C8();
    cVar2 = fn_8225E7A0(uStack0000001c,uStack00000024,uVar1);
    if (cVar2 == '\0') {
      puStack_10 = auStack_20;
      goto LAB_8265fa28;
    }
  }
  puStack_10 = (undefined4 *)fn_8265F8D8(auStack_14,uStack0000001c);
LAB_8265fa28:
  *puStack00000014 = *puStack_10;
  return puStack00000014;
}

