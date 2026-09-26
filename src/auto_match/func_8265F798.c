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
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_8225E7A0();
extern int fn_8265F8D8();
extern int fn_8265FF20();
extern int fn_826600F8();
extern int fn_826619F0();
extern int fn_826666A0();
extern int fn_826689B8();
extern int fn_82669808();
extern int fn_82F919C8();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_30;


longlong fn_8265F798(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar4;
  undefined4 *puVar3;
  longlong lVar2;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [24];
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  fn_8265FF20(&uStack_30,param_1,param_2);
  uVar1 = fn_8265F8D8(auStack_2c,uStack00000014);
  cVar4 = fn_82669808(&uStack_30,uVar1);
  if (cVar4 == '\0') {
    fn_826689B8(&uStack_30);
    uVar1 = fn_82F919C8();
    cVar4 = fn_8225E7A0(uStack00000014,uStack0000001c,uVar1);
    if (cVar4 == '\0') goto LAB_8265f83c;
  }
  uStack_20 = 0;
  uStack_1c = uStack_30;
  uVar1 = fn_826600F8(auStack_28,uStack0000001c,&uStack_20);
  puVar3 = (undefined4 *)fn_826619F0(auStack_18,uStack00000014,uStack_1c,uVar1);
  uStack_30 = *puVar3;
LAB_8265f83c:
  lVar2 = fn_826666A0(&uStack_30);
  return lVar2 + 4;
}

