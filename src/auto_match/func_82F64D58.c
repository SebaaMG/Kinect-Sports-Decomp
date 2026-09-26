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


char * fn_82F64D58(ushort *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x0;
  if (param_1 != (ushort *)0x0) {
    if (param_3 == (char *)0x0) {
      return (char *)0x0;
    }
    *param_1 = 0;
  }
  if (param_2 == (char *)0x0) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    pcVar3 = (char *)0xffffffff;
  }
  else {
    pcVar4 = param_2;
    if (param_1 == (ushort *)0x0) {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar3 = pcVar4 + (-1 - (int)param_2);
    }
    else if (param_3 != (char *)0x0) {
      do {
        *param_1 = (ushort)(byte)param_2[(int)pcVar3];
        if (param_2[(int)pcVar3] == '\0') {
          return pcVar3;
        }
        pcVar3 = pcVar3 + 1;
        param_1 = param_1 + 1;
      } while (pcVar3 < param_3);
    }
  }
  return pcVar3;
}

