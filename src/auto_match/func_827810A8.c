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
extern int fn_8277E998();
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


void fn_827810A8(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uStack0000001c;
  uint uStack00000024;
  uint uStack0000002c;
  
  uVar2 = (param_2 & 0xffffffff) >> 0x1e & 1;
  uStack0000001c = (uint)param_2 & 0xbfffffff;
  uStack00000024 = (uint)param_3 & 0xbfffffff;
  uStack0000002c = param_4 & 0xbfffffff;
  lVar3 = param_1 + 0x194;
  if (uVar2 == ((param_3 & 0xffffffff) >> 0x1e & 1)) {
    fn_8277E998(lVar3,&stack0x00000024);
    fn_8277E998(param_1 + 0x1a4,&stack0x00000024);
    if (uVar2 == 0) {
      fn_8277E998(param_1 + 0x1a4,&stack0x0000001c);
      puVar1 = (undefined1 *)&stack0x0000002c;
      goto LAB_82781174;
    }
    fn_8277E998(lVar3,&stack0x0000001c);
    puVar1 = (undefined1 *)&stack0x0000002c;
  }
  else {
    fn_8277E998(lVar3,&stack0x0000002c);
    fn_8277E998(param_1 + 0x1a4,&stack0x0000002c);
    if (uVar2 == 0) {
      fn_8277E998(param_1 + 0x1a4,&stack0x0000001c);
      puVar1 = (undefined1 *)&stack0x00000024;
      goto LAB_82781174;
    }
    fn_8277E998(lVar3,&stack0x0000001c);
    puVar1 = (undefined1 *)&stack0x00000024;
  }
  lVar3 = param_1 + 0x1a4;
LAB_82781174:
  fn_8277E998(lVar3,puVar1);
  return;
}

