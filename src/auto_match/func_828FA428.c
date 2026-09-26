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
extern int fn_82F6DF30();


int fn_828FA428(int param_1,undefined1 *param_2,undefined4 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  bVar1 = false;
  bVar2 = false;
  puVar5 = param_2;
  if (param_2 < *(undefined1 **)(param_1 + 4)) {
    do {
      if ((bVar1) || (iVar3 = fn_82F6DF30(*puVar5), iVar3 != 0x75)) {
        if ((bVar2) || (iVar3 = fn_82F6DF30(*puVar5), iVar3 != 0x6c)) break;
        bVar2 = true;
      }
      else {
        bVar1 = true;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 < *(undefined1 **)(param_1 + 4));
  }
  if (param_3 != (undefined4 *)0x0) {
    if (bVar1) {
      uVar4 = 4;
    }
    else {
      if (!bVar2) goto LAB_828fa4d4;
      uVar4 = 3;
    }
    *param_3 = uVar4;
  }
LAB_828fa4d4:
  return (int)puVar5 - (int)param_2;
}

