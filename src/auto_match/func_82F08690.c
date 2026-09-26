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
extern int fn_82ED3520();


void fn_82F08690(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,int param_6,undefined4 *param_7)

{
  int iVar1;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  *param_7 = 0;
  if (in_stack_00000074 == 0) {
    if (((param_2 & 8) != 0) &&
       (iVar1 = fn_82ED3520(*(undefined4 *)(param_1 + 0x7b40),param_3,param_4,param_5), iVar1 == 0
       )) {
      if (*(int *)(param_1 + 0x6d54) == 0) {
        if (param_6 == 0x40) {
          *param_7 = 0x831a9b30;
        }
        else if (param_6 == 0x20) {
          if (in_stack_0000006c == *(int *)(param_1 + 0x204c)) {
            *param_7 = 0x831a9ab0;
          }
          else {
            *param_7 = 0x831a9af0;
          }
        }
        else {
          *param_7 = 0x831a9a90;
        }
      }
      else if (param_6 == 0x40) {
        *param_7 = 0x831a9c50;
      }
      else if (param_6 == 0x20) {
        if (in_stack_0000006c == *(int *)(param_1 + 0x204c)) {
          *param_7 = 0x831a9bd0;
        }
        else {
          *param_7 = 0x831a9c10;
        }
      }
      else {
        *param_7 = 0x831a9bb0;
      }
    }
  }
  else if (((param_2 & 8) != 0) &&
          (iVar1 = fn_82ED3520(*(undefined4 *)(param_1 + 0x7b40),param_3,param_4,param_5),
          iVar1 == 0)) {
    *param_7 = 0x831a9a10;
  }
  return;
}

