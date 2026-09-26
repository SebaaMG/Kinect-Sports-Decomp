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
extern int fn_82F64258();
extern int fn_82F664B0();
extern int fn_82F6B2A0();


void fn_826BCE08(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char acStack_180 [384];
  
  puVar2 = (undefined4 *)fn_82F64258();
  cVar1 = *(char *)*puVar2;
  if (cVar1 != '.') {
    fn_82F664B0(acStack_180,0x15c,param_1);
    pcVar3 = acStack_180;
    while (acStack_180[0] != '\0') {
      if (*pcVar3 == '.') {
        *pcVar3 = cVar1;
        break;
      }
      pcVar3 = pcVar3 + 1;
      acStack_180[0] = *pcVar3;
    }
    param_1 = acStack_180;
  }
  fn_82F6B2A0(param_1,param_2);
  return;
}

