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


undefined4 fn_82F664B0(undefined1 *param_1,ulonglong param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if ((param_1 == (undefined1 *)0x0) || ((param_2 & 0xffffffff) == 0)) {
    puVar3 = (undefined4 *)fn_82F68240();
    *puVar3 = 0x16;
    fn_82F63BA0();
    uVar4 = 0x16;
  }
  else {
    if (param_3 == (char *)0x0) {
      *param_1 = 0;
      puVar3 = (undefined4 *)fn_82F68240();
      uVar4 = 0x16;
    }
    else {
      iVar2 = (int)param_1 - (int)param_3;
      do {
        cVar1 = *param_3;
        param_3[iVar2] = cVar1;
        param_3 = param_3 + 1;
        if (cVar1 == '\0') break;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      if ((param_2 & 0xffffffff) != 0) {
        return 0;
      }
      *param_1 = 0;
      puVar3 = (undefined4 *)fn_82F68240();
      uVar4 = 0x22;
    }
    *puVar3 = uVar4;
    fn_82F63BA0();
  }
  return uVar4;
}

