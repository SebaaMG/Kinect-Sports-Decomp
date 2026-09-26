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
extern int fn_82F63BA0();
extern int fn_82F68240();


undefined4 fn_828277D8(int param_1,undefined1 *param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(param_1 + 0xb8);
  if ((param_2 == (undefined1 *)0x0) || ((param_3 & 0xffffffff) == 0)) {
    puVar3 = (undefined4 *)fn_82F68240();
    *puVar3 = 0x16;
    fn_82F63BA0();
    uVar5 = 0x16;
  }
  else {
    if (pcVar4 == (char *)0x0) {
      *param_2 = 0;
      puVar3 = (undefined4 *)fn_82F68240();
      uVar5 = 0x16;
    }
    else {
      iVar2 = (int)param_2 - (int)pcVar4;
      do {
        cVar1 = *pcVar4;
        pcVar4[iVar2] = cVar1;
        pcVar4 = pcVar4 + 1;
        if (cVar1 == '\0') break;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      if ((param_3 & 0xffffffff) != 0) {
        return 0;
      }
      *param_2 = 0;
      puVar3 = (undefined4 *)fn_82F68240();
      uVar5 = 0x22;
    }
    *puVar3 = uVar5;
    fn_82F63BA0();
  }
  return uVar5;
}

