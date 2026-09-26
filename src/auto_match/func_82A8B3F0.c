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
extern int fn_82A8B288();
extern int fn_82F68CC0();


bool fn_82A8B3F0(int param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_4 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_82a8b420:
    bVar2 = false;
  }
  else {
    uVar3 = param_3;
    uVar4 = param_3 & 0xffffffff;
    while (uVar4 != 0) {
      cVar1 = fn_82A8B288(param_1);
      if (cVar1 == '\0') goto LAB_82a8b420;
      uVar4 = ((ulonglong)*(uint *)(param_1 + 0x1c) - (ulonglong)*(uint *)(param_1 + 0x10)) +
              (ulonglong)*(uint *)(param_1 + 0x18);
      if ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
        uVar4 = uVar3;
      }
      fn_82F68CC0((ulonglong)*param_4 + param_2,
                   ((ulonglong)*(uint *)(param_1 + 8) - (ulonglong)*(uint *)(param_1 + 0x18)) +
                   (ulonglong)*(uint *)(param_1 + 0x10),uVar4);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (int)uVar4;
      *param_4 = *param_4 + (int)uVar4;
      uVar3 = uVar3 - uVar4;
      uVar4 = uVar3;
    }
    bVar2 = (uint)param_3 == *param_4;
  }
  return bVar2;
}

