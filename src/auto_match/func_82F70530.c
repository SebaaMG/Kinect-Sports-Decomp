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
extern int fn_82A29158();
extern int fn_82A2A360();
extern int fn_82F641F8();
extern int fn_82F681D0();
extern int fn_82F68240();
extern int fn_82F68BF0();
extern int fn_82F800C8();
extern int iRam83263614;


longlong fn_82F70530(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if ((param_1 & 0xffffffff) == 0) {
    lVar1 = fn_82F68BF0(param_2);
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      fn_82F641F8(param_1);
    }
    else {
      do {
        if (0xfffff000 < (param_2 & 0xffffffff)) {
          fn_82F800C8(param_2);
          puVar4 = (undefined4 *)fn_82F68240();
          *puVar4 = 0xc;
          goto LAB_82f705e0;
        }
        if ((param_2 & 0xffffffff) == 0) {
          param_2 = 1;
        }
        uVar2 = fn_82A2A360();
        lVar1 = fn_82A29158(uVar2,0,param_1,param_2);
        if (lVar1 != 0) {
          return lVar1;
        }
        if (iRam83263614 == 0) {
          puVar4 = (undefined4 *)fn_82F68240();
          thunk_FUN_82a2b798();
          uVar5 = fn_82F681D0();
          *puVar4 = uVar5;
          return 0;
        }
        iVar3 = fn_82F800C8(param_2);
      } while (iVar3 != 0);
      puVar4 = (undefined4 *)fn_82F68240();
      thunk_FUN_82a2b798();
      uVar5 = fn_82F681D0();
      *puVar4 = uVar5;
    }
LAB_82f705e0:
    lVar1 = 0;
  }
  return lVar1;
}

