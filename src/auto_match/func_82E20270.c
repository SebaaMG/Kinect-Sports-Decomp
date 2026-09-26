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
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern int fn_8265CA20();
extern int fn_82E20100();
extern int fn_82F674A8();
extern int fn_82F68150();
extern int fn_82F68240();
extern int fn_82F6FE10();
extern unsigned int lbl_8323FDF0;


ulonglong fn_82E20270(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar2;
  uint auStack_140 [4];
  undefined1 auStack_130 [304];
  
  if ((param_1 & 0xffffffff) != 0) {
    uVar1 = fn_82E20100(param_1,param_3);
    auStack_140[0] = 0;
    iVar3 = fn_82F674A8(auStack_140,uVar1,param_2);
    if (iVar3 != 0) {
      auStack_140[0] = 0;
      puVar4 = (undefined4 *)fn_82F68240();
      fn_82F68150(auStack_130,0x100,*puVar4);
    }
    if ((((auStack_140[0] == 0) && ((param_3 & 0xff) != 0)) &&
        (iVar3 = thunk_FUN_82a2b798(), iVar3 == 3)) &&
       (iVar3 = fn_82F6FE10(lbl_8323FDF0), iVar3 == 0)) {
      lVar2 = fn_82F674A8(auStack_140,uVar1,param_2);
      auStack_140[0] = -(uint)(lVar2 == 0) & auStack_140[0];
    }
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8265CA20(uVar1);
    }
    param_1 = (ulonglong)auStack_140[0];
  }
  return param_1;
}

