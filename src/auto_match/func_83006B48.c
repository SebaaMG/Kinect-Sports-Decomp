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
extern int fn_830069B8();


void fn_83006B48(int *param_1,int param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = fn_830069B8();
  if (cVar2 != '\0') {
    if (param_2 != 0) {
      (**(code **)(*param_1 + 0x94))(param_1,3);
    }
    if ((param_3 & 0xffffffff) < 4) {
      bVar1 = (int)param_3 != 0;
      if (param_3 == 1 && bVar1) {
        *(int *)(param_1[8] + 0x1c) = param_2;
      }
      else if (param_3 == 2 && bVar1) {
        *(int *)(param_1[8] + 0x18) = param_2;
      }
      else if (bVar1) {
        *(int *)(param_1[8] + 0x20) = param_2;
      }
      else {
        *(int *)(param_1[8] + 0x14) = param_2;
      }
    }
  }
  return;
}

