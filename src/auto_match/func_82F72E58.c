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
extern int fn_82F72318();
extern int fn_82F72C10();
extern unsigned int lbl_82169D58;


void fn_82F72E58(int *param_1,undefined1 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  
  if (*param_1 == 0) {
    if ((param_2 == (undefined1 *)0x0) || ((int)param_3 == 0)) {
      uVar3 = 2;
    }
    else {
      if ((param_3 & 0xffffffff) != 0) {
        if ((param_3 & 0xffffffff) == 1) {
          puVar2 = (undefined4 *)fn_82F72318(0xffffffff832635a0,8,0);
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            uVar3 = *param_2;
            *puVar2 = &lbl_82169D58;
            *(undefined1 *)(puVar2 + 1) = uVar3;
          }
          *param_1 = (int)puVar2;
        }
        else {
          uVar1 = fn_82F72318(0xffffffff832635a0,0xc,0);
          if ((uVar1 & 0xffffffff) == 0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2 = (undefined4 *)fn_82F72C10(uVar1,param_2,param_3);
          }
          *param_1 = (int)puVar2;
        }
        if (puVar2 != (undefined4 *)0x0) {
          return;
        }
      }
      uVar3 = 3;
    }
    *(undefined1 *)(param_1 + 1) = uVar3;
  }
  else {
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 0;
  }
  return;
}

