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
extern unsigned int *auStack_2c;
extern int fn_8223CB30();
extern int fn_8223EEC8();
extern int fn_8223EF38();
extern int fn_8223F508();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F62988();
extern int fn_82F64188();
extern unsigned int uRam83297590;
extern unsigned int uStack_30;


ulonglong fn_8223CBE8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uStack_30;
  undefined1 auStack_2c [44];
  
  fn_82F62680(auStack_2c,0);
  uVar1 = uRam83297590;
  uVar5 = (ulonglong)uRam83297590;
  uStack_30 = uRam83297590;
  uVar2 = fn_8223EEC8(0xffffffff832632dc);
  uVar3 = fn_8223EF38(param_1,uVar2);
  uVar6 = uVar3;
  if ((uVar3 == 0) && (uVar6 = uVar5, uVar1 == 0)) {
    iVar4 = fn_8223CB30(&uStack_30,param_1);
    if (iVar4 == -1) {
      fn_82F64188();
      uVar6 = uVar3;
    }
    else {
      uRam83297590 = uStack_30;
      uVar6 = (ulonglong)uStack_30;
      fn_8223F508(uVar6);
      fn_82F62988(uVar6);
    }
  }
  fn_82F626D0(auStack_2c);
  return uVar6;
}

