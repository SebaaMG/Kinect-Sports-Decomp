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
extern int fn_822ACDA0();
extern int fn_8251F720();
extern int fn_8251FA58();


undefined8 fn_822ACB68(int param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  
  cVar6 = *param_2;
  pcVar7 = (char *)(param_1 + 0xc);
  cVar5 = *(char *)(param_1 + 0xc);
  if (cVar5 == cVar6) {
    pcVar4 = pcVar7;
    do {
      pcVar4 = pcVar4 + 1;
      if (cVar5 == '\0') {
        return 1;
      }
      cVar5 = *pcVar4;
      cVar6 = pcVar4[(int)param_2 - (int)pcVar7];
    } while (cVar5 == cVar6);
  }
  if (cVar5 != cVar6) {
    lVar2 = fn_822ACDA0(param_1,param_2);
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 8) != 0) {
      fn_8251FA58();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    uVar3 = fn_8251F720(lVar2,0);
    *(undefined4 *)(param_1 + 8) = uVar3;
    iVar1 = (int)param_2 - (int)pcVar7;
    do {
      if ((char *)(param_1 + 0x8c) <= pcVar7) break;
      cVar6 = pcVar7[iVar1];
      *pcVar7 = cVar6;
      pcVar7 = pcVar7 + 1;
    } while (cVar6 != '\0');
    if (pcVar7 == (char *)(param_1 + 0x8c)) {
      pcVar7[-1] = '\0';
    }
  }
  return 1;
}

