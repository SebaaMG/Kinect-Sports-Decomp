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
extern int fn_826A1A28();
extern int fn_826C0568();


undefined8 fn_826A24D8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  bool bVar2;
  int iVar4;
  undefined8 uVar3;
  
  iVar4 = fn_826A1A28(param_3);
  if (iVar4 < 0) {
    uVar3 = fn_826C0568(param_1,param_2,param_3,param_4);
  }
  else {
    if ((iVar4 < *(int *)(param_1 + 0x28)) &&
       (pcVar1 = *(char **)(iVar4 * 4 + *(int *)(param_1 + 0x24)), pcVar1 != (char *)0x0)) {
      if ((*pcVar1 == '\0') || (bVar2 = false, *pcVar1 == '\n')) {
        bVar2 = true;
      }
      if ((!bVar2) && (*pcVar1 != '\x01')) {
        return 1;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

