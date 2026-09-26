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
extern int fn_8234F3D8();
extern int fn_82F65390();
extern unsigned int lbl_831CB7D8;


void fn_8234F338(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  *param_3 = 0;
  *param_4 = 0;
  ppuVar6 = &lbl_831CB7D8;
  puVar5 = lbl_831CB7D8;
  while( true ) {
    if (puVar5 == (undefined *)0x0) {
      return;
    }
    pcVar2 = *ppuVar6;
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = fn_82F65390(param_1,pcVar2,pcVar4 + (-1 - (int)pcVar2));
    if (iVar3 == 0) break;
    ppuVar6 = ppuVar6 + 5;
    puVar5 = *ppuVar6;
  }
  fn_8234F3D8(ppuVar6[3],ppuVar6[4],param_2,param_3,param_4);
  return;
}

