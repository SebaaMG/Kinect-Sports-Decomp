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
extern unsigned int *auStack_30;
extern int fn_83032B08();
extern int fn_83033EA8();
extern int fn_83034268();


ulonglong fn_83033C70(int *param_1,ulonglong param_2)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 auStack_30 [12];
  
  uVar3 = (undefined4)param_2;
  auStack_30[0] = uVar3;
  if ((param_2 & 0xffffffff) != 0) {
    fn_83032B08(param_2);
  }
  puVar1 = (uint *)fn_83033EA8(param_1 + 0x22,auStack_30);
  if (puVar1 != (uint *)0x0) {
    if (*puVar1 < 2) {
      cVar2 = (**(code **)(*param_1 + 0x160))(param_1);
      uVar4 = 0;
      if (cVar2 == '\0') {
        uVar4 = param_2;
      }
      auStack_30[0] = uVar3;
      if ((param_2 & 0xffffffff) != 0) {
        fn_83032B08(param_2);
      }
      fn_83034268(param_1 + 0x22,auStack_30);
      return uVar4;
    }
    *puVar1 = *puVar1 - 1;
  }
  return 0;
}

