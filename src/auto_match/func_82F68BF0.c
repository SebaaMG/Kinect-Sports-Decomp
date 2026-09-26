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
extern int fn_82A28568();
extern int fn_82A2A360();
extern int fn_82F68240();
extern int fn_82F6CB58();
extern int fn_82F706C0();
extern int fn_82F706F0();
extern int fn_82F800C8();
extern int iRam83263614;


longlong fn_82F68BF0(ulonglong param_1)

{
  int iVar3;
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  if ((param_1 & 0xffffffff) < 0xfffff001) {
    do {
      iVar3 = fn_82A2A360();
      if (iVar3 == 0) {
        fn_82F706F0();
        fn_82F706C0(0x1e);
        fn_82F6CB58(0xff);
      }
      uVar5 = param_1;
      if ((param_1 & 0xffffffff) == 0) {
        uVar5 = 1;
      }
      uVar1 = fn_82A2A360();
      lVar2 = fn_82A28568(uVar1,0,uVar5);
      if (lVar2 != 0) {
        return lVar2;
      }
      if (iRam83263614 == 0) {
        puVar4 = (undefined4 *)fn_82F68240();
        *puVar4 = 0xc;
        break;
      }
      iVar3 = fn_82F800C8(param_1);
    } while (iVar3 != 0);
    puVar4 = (undefined4 *)fn_82F68240();
    *puVar4 = 0xc;
  }
  else {
    fn_82F800C8(param_1);
    puVar4 = (undefined4 *)fn_82F68240();
    *puVar4 = 0xc;
  }
  return 0;
}

