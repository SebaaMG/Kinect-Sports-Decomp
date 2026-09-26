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
extern int fn_8265B6B0();
extern int fn_8265BB90();
extern unsigned int lbl_8200133C;


double fn_8265BC60(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  double dVar8;
  
  lVar7 = 0;
  do {
    puVar3 = (undefined4 *)fn_8265B6B0(lVar7);
    pcVar6 = (char *)*puVar3;
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      iVar4 = fn_8265B6B0(lVar7);
      if (*(float *)(iVar4 + 4) == lbl_8200133C) {
        dVar8 = (double)fn_8265BB90();
        return dVar8;
      }
      iVar4 = fn_8265B6B0(lVar7);
      return (double)*(float *)(iVar4 + 4);
    }
    lVar7 = lVar7 + 1;
    if (0x79 < (int)lVar7) {
      return (double)lbl_8200133C;
    }
  } while( true );
}

