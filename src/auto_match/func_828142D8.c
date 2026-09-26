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
extern unsigned int lbl_8320A500;
extern unsigned int lbl_8320A5C0;


void fn_828142D8(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar3 = 0;
  *param_2 = 0;
  if (lbl_8320A5C0 != 0) {
    do {
      pcVar4 = &lbl_8320A500 + uVar3 * 0x18;
      pcVar5 = param_1;
      pcVar6 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          *param_2 = pcVar4;
          return;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < lbl_8320A5C0);
  }
  return;
}

